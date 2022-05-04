#include <msp430g2553.h>
#include <stdint.h>

#define LED1_MASK       (1<<0)
#define LED2_MASK       (1<<6)
#define BUTTON_MASK     (1<<3)

volatile uint8_t intFlag = 0; 

int main(void) {

    /* stop watchdog timer */
    WDTCTL = WDTPW | WDTHOLD;

    /* set P1 direction */
    P1DIR = (LED1_MASK | LED2_MASK);
    P1DIR &= ~(BUTTON_MASK);
    
    /* Enable P1.3 Pull-Up Resistor*/
    P1REN  = BUTTON_MASK; //Define que vai resistor interno
    P1OUT |= BUTTON_MASK; //Define que vai usar Pull-Up 
    
    // Attaching interrupt on pin 1.3
	P1IE |= BUTTON_MASK;
	
	// Select falling edge transition
	P1IES |= BUTTON_MASK;
	   
    // Clean Interrupts Flag
    P1IFG = 0x00;
    
    // Set Interrupts
    _BIS_SR(GIE);

    P1OUT |=  (LED1_MASK);
    P1OUT &= ~(LED2_MASK);

    while(1){

    
    }
}

#pragma vector = PORT1_VECTOR // PORT1 Interrupt Routine
__interrupt void Port_1(void){

	__delay_cycles(100000);
	P1OUT ^= LED1_MASK | LED2_MASK; 
	P1IFG = 0x00;
}
