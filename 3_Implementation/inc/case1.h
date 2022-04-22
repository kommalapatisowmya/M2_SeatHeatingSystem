#ifndef __CASE_1_H__
#define __CASE_1_H__
/**
 * @file case1.h
 * @author SowmyaKommalapati (kommalapatisowmya18@gmail.com)
 * @brief Header file for activity1
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port Number */
#define LED_PIN  (PORTD2)   /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)   /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void);

/**
 * @brief Function to turn LED on
 * 
 */
void TurnLED_ON();

/**
 * @brief Function to turn LED off
 * 
 */
void TurnLED_OFF();

/**
 * @brief Activity 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed 
 * 
 */
int case_LED(void);

#endif /* __CASE_1_H__ */