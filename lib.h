#ifndef MY_LIB
#define MY_LIB
#define HIGH 1
#define LOW 0

typedef enum {
  ESPERA= 0,
  LLENANDO= 1,
  EMERGENCIA= 2
}estados_t;

typedef struct {
  char h;         // nivel actual
  char h_set;     // nivel seteado
  char deltaH;    // Delta altura
}nivel_t;

estados_t llenando (estados_t actual);
estados_t espera (estados_t actual);
estados_t emergencia (estados_t actual);
void inicio(void);    //inicializar el micro
int get_sensorAgua ();
int get_sensorCisterna();

#endif
