/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cartas_ok.h
 * Author: virtual
 *
 * Created on 25 de noviembre de 2019, 15:48
 */
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

