#include "config.h"

int get_sensorAgua()
{

    return (int)SENSOR_AGUA; // pin de entrada del sensor
}

int get_sensorCisterna()
{
    return (int)SENSOR_CISTERNA;
}

int get_boton()
{

    return (int)SENSOR_BOTON;
}

void inicio(void)
{
    GpioInitStructure_AVR sensorAgua, sensorBoton; 

    sensorAgua.port=SENSOR_AGUA_PUERTO;
    sensorAgua.modo=avr_GPIO_mode_Input;
    sensorAgua.pines=SENSOR_AGUA_PIN;

    sensorBoton.port=SENSOR_BOTON_PUERTO;
    sensorBoton.modo=avr_GPIO_mode_Input;
    sensorBoton.pines=SENSOR_BOTON_PIN | SENSOR_CISTERNA_PIN;

    sei();
}