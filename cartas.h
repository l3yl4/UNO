
#include "azar.h"
#include "colores.h"
#include "preguntas.h"

#ifndef CARTAS_OK_H

#define CARTAS_OK_H

#define DIM 76 


typedef struct
{
    char color; // marta: valores posibles?
    int num;
}tcarta;

typedef struct
{
    int ncartas;
    tcarta vcartas[DIM];
}tbaraja;

//marta: faltan parámetros
// void mostrar_cartas(); //funcion que muestra las cartas
void mostrar_cartas(tbaraja b); //funcion que muestra las cartas

//marta: si esta función reparte las cartas de un mazo entre 
// los jugadores, debería estar en jugadores.h
//void repartir_aleatoriamente(); // función que reparte las cartas



#endif /* CARTAS_OK_H */

