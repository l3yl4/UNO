

/* 
 * File:   cartas_ok.h
 * Author: virtual
 *
 * Created on 25 de noviembre de 2019, 15:48
 */
#ifndef CARTAS_OK_H

#define CARTAS_OK_H

#define DIM 76 
#define CARTASXLINEA 15


typedef struct
{
    char color; // valores posibles: 0, 1, 2, 3;
    int num;
}tcarta;

typedef struct
{
    int ncartas;
    tcarta vcartas[DIM];
}tbaraja;

//marta: faltan parámetros
// void mostrar_cartas(); //funcion que muestra las cartas
void mostrar_carta(tcarta c); //funcion que muestra las cartas
void mostrar_carta_delreves(tcarta c); //funcion que muestra las cartas

tbaraja iniciar_baraja (); //rellena el vector inicial                JUDITH 08/12

tbaraja mezclar_baraja (tbaraja b); //mezcla el vector inicial                 JUDITH 08/12

//marta: si esta función reparte las cartas de un mazo entre 
// los jugadores, debería estar en jugadores.h
//void repartir_aleatoriamente(); // función que reparte las cartas



#endif /* CARTAS_OK_H */

