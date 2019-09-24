/*
 * HD44780_config.h
 *
 * Created: 23/09/2019 05:13:42 PM
 *  Author: Loay Ashraf
 */ 


#ifndef HD44780_CONFIG_H_
#define HD44780_CONFIG_H_

/*------------DEFINE HD44780 INTERFACE MODE------------*/

/*#define HD44780_RW_PIN			PA3_M*/		// uncomment this if RW pin is connected
#define HD44780_EN_PIN			PA6_M
#define HD44780_RS_PIN			PA7_M
#define HD44780_DATA_PORT		PORTB_M

#define HD44780_DATA_MODE		8
#if (HD44780_DATA_MODE == 8)
#define HD44780_DATA_PORT_MASK	0XFF
#else
#define HD44780_DATA_PORT_MASK	0xF0
#endif


#endif /* HD44780_CONFIG_H_ */