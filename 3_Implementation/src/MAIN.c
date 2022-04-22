/**
 * @file MAIN.c
 * @author Kommalapati sowmya
 * @brief Heat Seating Application to set Temperature of seat
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "CASE_1.h"
#include "CASE_2.h"
#include "CASE_3.h"
#include "CASE_4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
        if(CASE_1_LED()==1) //Check if both the switches are pressed
        {
           
            TurnLED_ON();//Turn LED ON
            temp=CASE_2_GetADC(); //Get the ADC value
            CASE_3_PWM(temp); //PWM output based on temperature
		    CASE_4_USARTWrite(temp); //To Serial monitor to print Temperature
            

        }
        else  //in all other cases
        {
            TurnLED_OFF();//Turn LED OFF
		    _delay_ms(200);
        }

    }
    return 0;
}
