#include <msp430g2231.h>

#define LED1_MASK       (1<<0)
#define LED2_MASK       (1<<6)
#define BUTTON_MASK     (1<<3)


int main(void) {

    /* stop watchdog timer */
    WDTCTL = WDTPW | WDTHOLD;

    /* set P1 direction */
    P1DIR = (LED1_MASK | LED2_MASK);
    P1DIR &= ~(BUTTON_MASK);
    
    /* Enable P1.3 Pull-Up Resistor*/
    P1REN  = BUTTON_MASK; //Define que vai resistor interno
    P1OUT |= BUTTON_MASK; //Define que vai usar Pull-Up 
    
    /* leds off */
    P1OUT &= ~(LED1_MASK | LED2_MASK);

    while(1){

        if((P1IN & BUTTON_MASK)) {
        
        	P1OUT |= (LED1_MASK);
        	P1OUT &= ~(LED2_MASK);
        }
        else {
        
        	P1OUT |= (LED2_MASK);
        	P1OUT &= ~(LED1_MASK);
        }
    }
}
