#include <stdio.h>
#include "jugadores.h"

void tirada(){
    
} // función que determina si puedes tirar o no, en caso de que sí se pueda determina las posibilidades

void mostrar_nombre(int *njugadores, char nombre[DIM_NOMBRE]){
/*
    int i=0;
    
    for(i=1; i<*njugadores; i++)
        printf("Turno Robot%d\n", i);  //en funcion de turno 
*/
} //imprimir por patalla el nombre de los jugadores

void preguntar_njugadores(int *njugadores)
{
    char pregunta[30]="Cuantos jugadores? ";
    *njugadores = preguntar_n_en_rango(pregunta, 3, 5);
   
}

void preguntar_nombre(char nombre[DIM_NOMBRE])
{
    char pregunta[20] = "Tu nombre? ";
    preguntar_cadena(pregunta, nombre);
}
