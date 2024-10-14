#include "lib.h"

int main(){
    nivel_t datos;
    estados_t estadoActual;

    estados_t (*funcion[])(estados_t)={espera, llenando, emergencia};      // puntero a funcion
    inicio();
    while(1) estadoActual = funcion[estadoActual](estadoActual);

}