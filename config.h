#ifndef config
#define config
#include "avr_api.h"

#define SENSOR_AGUA_PUERTO avr_GPIO_A
#define SENSOR_AGUA_PIN avr_GPIO_PIN_0
#define SENSOR_AGUA avr_GPIOA_IN_0

#define SENSOR_BOTON_PUERTO avr_GPIO_B
#define SENSOR_BOTON_PIN avr_GPIO_PIN_1
#define SENSOR_BOTON avr_GPIOB_IN_1

#define SENSOR_CISTERNA_PIN avr_GPIO_PIN_0
#define SENSOR_CISTERNA avr_GPIOB_IN_0

#endif
