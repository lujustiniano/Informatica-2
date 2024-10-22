#include "lib.h"

estados_t llenando(void)
{
    char sensorCisterna=get_sensorCisterna();
    char sensorAgua= get_sensorAgua();
    char sensorBoton= get_Boton();

    if(sensorBoton==HIGH){
        return EMERGENCIA;
    }

    if (sensorCisterna== LOW)
    {   
        set_led(LOW);
        return EMERGENCIA;
    }
    else if (sensorAgua== HIGH) 
    { 
        set_led(LOW);
        return ESPERA;  
    }
    set_led(HIGH);
    return LLENANDO;
}

estados_t espera(void)
{
    char sensorAgua= get_sensorAgua();
    if (sensorAgua== LOW)
            {
            return LLENANDO;
        }
        return ESPERA;
    }

   estados_t emergencia()
    {
        char sensorBoton=get_Boton();
        if (sensorBoton==LOW)
        {
            set_led(LOW);
            return ESPERA;
        }
        return EMERGENCIA;
    }


