#ifndef __CASE_4_H__
#define __CASE_4_H__

#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#define F_CPU 16000000UL /**< Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< Formula to calculate UBRR value */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Setting Baud rate and Enabling Rx and Tx 
 * 
 */
void USARTInit();

/**
 * @brief Reading data
 * 
 * @return int The read data
 */
int USARTRead();

/**
 * @brief Writing data to view in serial monitor
 * 
 * @param[in] temp The ADC value
 */
void CASE_4_USARTWrite(uint16_t temp);

#endif 