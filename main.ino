
#include <Ultrasonic.h>

#define DATA_PIN 8  // Pino de dados da fita de LED
#define MAX_LEDS 87

#define PINO_TRIGGER_0 4
#define PINO_ECHO_0 5

#define PINO_TRIGGER_1 7
#define PINO_ECHO_1 6

#define PINO_TRIGGER_2 12
#define PINO_ECHO_2 10

#define PINO_TRIGGER_3 13
#define PINO_ECHO_3 11

#define QTD_ANOS 4
#define QTD_CIDADES 4
#define QTD_ROTULOS 3

// Inicialização de cada sensor de ultrassom, para passagem dos anos
Ultrasonic
  ultrasonic_0(PINO_TRIGGER_0, PINO_ECHO_0),
  ultrasonic_1(PINO_TRIGGER_1, PINO_ECHO_1),
  ultrasonic_2(PINO_TRIGGER_2, PINO_ECHO_2),
  ultrasonic_3(PINO_TRIGGER_3, PINO_ECHO_3);

// Indices
int
  i=0,
  j=0,
  k=0;

/* Anos
  * 0: 2014
  * 1: 2015
  * 2: 2016
  * 3: 2017
  */
 
/* Cidades
  * 0: Vitória
  * 1: Vila Velha
  * 2: Serra
  * 3: Cariacica
  * 4: BRASIL
  */

/* Rótulos
  * 0: Atropelamentos
  * 1: Colisões
  * 2: Capotamentos
  */

int dados
  [QTD_ROTULOS]
  [QTD_CIDADES + 1] // +1 para o Brasil
  [QTD_ANOS] = {
    // Atropelamentos
    { 
      // 2019, 2020, 2021, 2022
      { 14, 27, 42, 51 }, // Vitória
      { 14, 27, 42, 51 }, // Vila Velha
      { 14, 27, 42, 51 }, // Serra
      { 14, 27, 42, 51 }, // Cariacica
      { 14, 27, 42, 51 }  // BRASIL
    },
    // Colisões
    { 
      // 2019, 2020, 2021, 2022
      { 14, 27, 42, 51 }, // Vitória
      { 14, 27, 42, 51 }, // Vila Velha
      { 14, 27, 42, 51 }, // Serra
      { 14, 27, 42, 51 }, // Cariacica
      { 14, 27, 42, 51 }  // BRASIL
    },
    // Capotamentos
    { 
      // 2019, 2020, 2021, 2022
      { 14, 27, 42, 51 }, // Vitória
      { 14, 27, 42, 51 }, // Vila Velha
      { 14, 27, 42, 51 }, // Serra
      { 14, 27, 42, 51 }, // Cariacica
      { 14, 27, 42, 51 }  // BRASIL
    }
  };


void setup() {
  ;
}

void loop() {
  ;
}
