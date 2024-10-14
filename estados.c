#include "lib.h"

estados_t llenando(estados_t actual)
{
    estados_t set;

    if (get_sensorCisterna == LOW)
    {
        return EMERGENCIA;
    }
    else if (get_sensorAgua == HIGH) // si el sensor es menor a 0, que empiece a llenar
    {
        return ESPERA;
    }
    return LLENANDO;
}

estados_t espera(estados_t actual)
{
    if (get_sensorAgua == LOW)
    {
        return LLENANDO;
    }
    return ESPERA;
}

estados_t emergencia(estados_t actual)
{
    if (get_sensorCisterna == HIGH)
    {

        return ESPERA;
    }
    return EMERGENCIA;
}