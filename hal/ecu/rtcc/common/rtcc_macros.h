/*
 * rtcc_macros.h
 *
 * Created: 04/10/2019 07:13:14 AM
 *  Author: Loay Ashraf
 */ 

#ifndef RTCC_MACROS_H_
#define RTCC_MACROS_H_

#if (RTCC_CONTROLLER == RTCC_DS3231)

#include "hal/ecu/rtcc/driver/DS3231/DS3231.h"

#endif

#if defined(DS3231_H_)

	#define RTCC_INIT								DS3231_init()
	#define RTCC_ENABLE								DS3231_enable()
	#define RTCC_SET_CLOCK_MODE(CLOCK_MODE)			DS3231_setClockMode(CLOCK_MODE)
	#define RTCC_SET_CLOCK(CLOCK)					DS3231_setClock(CLOCK)
	#define RTCC_SET_CALENDAR(CALENDAR)				DS3231_setCalendar(CALENDAR)
	#define RTCC_GET_CLOCK							DS3231_getClock()
	#define RTCC_GET_CALENDAR						DS3231_getCalendar()
	#define RTCC_SET_ALARM(ALARM,ALARM_CONFIG)		DS3231_setAlarm(ALARM,ALARM_CONFIG)
	#define RTCC_ENABLE_ALARM(ALARM)				DS3231_enableAlarm(ALARM)
	#define RTCC_DISABLE_ALARM(ALARM)				DS3231_disableAlarm(ALARM)

#endif

#endif /* RTCC_MACROS_H_ */