/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   jugadores.h
 * Author: virtual
 *
 * Created on 25 de noviembre de 2019, 15:33
 */
//#include "cartas.h"    //Marta: los includes van después del #ifndef
//#include "jugadores.h"

#ifndef JUGADORES_H
#define JUGADORES_H

#include "cartas.h"

#define DIM_NOMBRE 25
#define NJUGADORES 4

typedef struct
{
    char nombre[DIM_NOMBRE];
    tbaraja mano;
}tjugador;

typedef struct
{
    int njugadores;
    tjugador vjugadores[NJUGADORES];   
}tjugadores;

void tirada(); // función que determina si puedes tirar o no, en caso de que sí se pueda determina las posibilidades
void mostrar_nombre(); //imprimir por patalla el nombre de los jugadores
void repartir_aleatoriamente(tbaraja *m, tjugadores *js); // función que reparte las cartas
//LEYLA:
void preguntar_njugadores(int *njugadores);
void preguntar_nombre(char nombre[DIM_NOMBRE]);




#endif /* JUGADORES_H */

