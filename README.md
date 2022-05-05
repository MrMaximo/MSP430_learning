# MSP430 Learning

To start developing embedded systems using Texas Instruments' wide variety of microcontrollers, I'm applying microcontroller programming concepts, starting with the basics,
such as the use of IOs and timers, and gradually exploring the other features available on the development boards that I have access.

I'm using the **Ubuntu 22.04** terminal to compile and debug the programs.
To start my studies, I followed the initial steps I read on [Sergio Prado's blog](https://sergioprado.org/trabalhando-com-o-msp430-no-linux/). To develop the generic Makefile I'll use, I'm following the steps at [Embarcados' blog](https://www.embarcados.com.br/introducao-ao-makefile/).

Along with learning this family of microcontrollers, I also take the opportunity to exercise my knowledge about the Git tool. Along with learning this family of microcontrollers, I also take the opportunity to exercise my knowledge about the Git tool, reinforcing the daily update of the documentation until it becomes a habit. So, updates for these projects will be in this README file. To help organize and format the document, I will always refer to this [Wiki Page](https://docs.github.com/pt/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)

## Used Development Board

For now, the development board I will be using will be the LaunchPad MSP-EXP430G2. If I use another, I will update and specify in the files. The datasheet I'm using to understand the µC is available [here](https://www.ti.com/lit/ug/slau144j/slau144j.pdf?ts=1651667852904&ref_url=https%253A%252F%252Fwww.ti.com%252Fproduct%252FMSP430G2553).

<p align="center">
	<img src="/images/launchpad.jpg" alt="MSP-EXP430G2" width="200" rotate="90"/>
 </p>
 
## Projects

1. Hello World!
	- Blink built-in LEDs
2. Button
	- Toggle built-in LEDs with button pressing
3. Interrupt Button
	- Doing the same thing, but now with interruptions
4. *Work in progress*
