/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   partida.h
 * Author: virtual
 *
 * Created on 25 de noviembre de 2019, 16:26
 */
//#include"cartas.h"     //Marta: mas abajo
//#include "jugadores.h"

#ifndef PARTIDA_H
#define PARTIDA_H

#include "jugadores.h"

typedef struct
{
    tbaraja fuera, robar;
    tjugadores j;
    int turno;
    int modo; //1-modo comprobación, 2-modo juego
}tUNO;

void descartar_cartas(); //función que añade la carta seleccionada de entre las posibilidades al mazo de descarte, llamado "fuera" de tUNO
void robar_carta(); //función que escoge una carta aleatoria del mazo "robar" de tUNO y la añade a la mano del jugador en cuestión
void turno(); //recorra el vecotor de jugadores en buble (al no haber cartas de acción siempre será en el mismo sentido
void fin(); // fucnión que controla el número de cartas de cada jugador y, en caso de que alguien se quede sin da por acabada la partida
//LEYLA:
void inicializar_partida(tUNO *pp);
int preguntar_comprobacion();



#endif /* PARTIDA_H */

