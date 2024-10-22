#include "lib.h"

int main(){

    estados_t estadoActual=ESPERA;

    estados_t (*funcion[])()={espera, llenando, emergencia};      // puntero a funcion
    inicio();
    while(1) estadoActual = (*funcion[estadoActual])();

}

