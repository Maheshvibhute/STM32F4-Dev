/*******************************************************************************
*//**
* @mainpage
* @section section1 Introduction:
*         Having studied this LAB you will able to: \n
*         -   Understand the GPIO functions \n
*         -   Study the programs related to the Switch interface
*
* @section section2 Example2 :
*    Objective: Write a program to interface switches and test debouncing of keys.
*
* @section section3 Program Description:
*    This program demonstrates Switch interface and use them to turn LED on and off and test debouncing.
*
* @section section4 Included Files:
*
*   | Header Files           	  | Source Files           	  |
*   | :------------------------:| :------------------------:|
*   | @ref stm32f4xx_hal_conf.h | @ref stm32f4xx_hal_msp.c  |
*   | @ref stm32f4xx_it.h 		  | @ref stm32f4xx_it.c	 	    |
*   | @ref stm32f4_ask25.h   	  | @ref stm32f4_ask25.c   	  |
*   |                           | @ref main.c               |
*
*
*
* \n
* @section section5 Pin Assignments
*
*   | STM32F407 Reference | Device (ASK25) |
*   | :------------------:| :-------------:|
*   |  GPIO D.12          | LED4           |
*   |  GPIO D.13          | LED3           |
*   |  GPIO E.4(P2.13)    | SW1            |
*   |  GPIO E.5(P2.14)    | SW2            |
*
* @section section6 Connection
*   | STM32F407 Reference | Device          |
*   | :------------------:| :-------------: |
*   | J6                  | ASK-25 (PL3)    |
*
* @section section7 Program Folder Location
*       <Eg2>
*
*
* @section section8 Part List
*   - STM32F4Discovery Board \n
*   - Flat cable \n
*   - USB cable \n
*   - Eclipse IDE \n
*   - PC \n
*   - ASK-25 Rev2.0 \n

*
* @section section9 Hardware Configuration
*   - Connect ASK 25 to educational practice board using flat cable.
*   - Connect the board using USB port of PC using USB cable.
*   - Apply Reset condition by pressing the Reset switch to ensure proper communication.
*   - Using download tool (STM ST-LINK Utility) download the .hex file developed using available tools.
*   - Reset the board.
*   - Observe the Output.

*
* @section section10 Output:
*    LED will On and Off when a switch is pressed and is not consistent with your press as it is fluctuating
*    because of debouncing and using the delay it will fluctuate less
*\n
*\n
*******************************************************************************/
