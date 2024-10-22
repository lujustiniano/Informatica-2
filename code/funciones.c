#include "config.h"

char get_sensorAgua()
{

    return SENSOR_AGUA; // pin de entrada del sensor
}

char get_sensorCisterna()
{
    return SENSOR_CISTERNA;
}

char get_boton()
{
    return SENSOR_BOTON;
}

void set_led(int valor){
    LED=valor;    
}

void inicio(void)
{
    GpioInitStructure_AVR sensorAgua, sensorBoton, led; 

    sensorAgua.port=SENSOR_AGUA_PUERTO;
    sensorAgua.modo=avr_GPIO_mode_Input;
    sensorAgua.pines=SENSOR_AGUA_PIN;
    init_gpio(sensorAgua);
    
    sensorBoton.port=SENSOR_BOTON_PUERTO;
    sensorBoton.modo=avr_GPIO_mode_Input;
    sensorBoton.pines=SENSOR_BOTON_PIN; //| SENSOR_CISTERNA_PIN;
    init_gpio(sensorBoton);

    led.port=LED_PUERTO;
    led.modo=avr_GPIO_mode_Output;
    led.pines=LED_PIN;
    init_gpio(led);

    sei();
}