#include "partida.h"

void descartar_cartas(){
    
} //función que añade la carta seleccionada de entre las posibilidades al mazo de descarte, llamado "fuera" de tUNO
void robar_carta(){
    
} //función que escoge una carta aleatoria del mazo "robar" de tUNO y la añade a la mano del jugador en cuestión
void turno(){
    
} //recorra el vecotor de jugadores en buble (al no haber cartas de acción siempre será en el mismo sentido
void fin(){
    
} // fucnión que controla el número de cartas de cada jugador y, en caso de que alguien se quede sin da por acabada la partida

//LEYLA: 
void inicializar_partida(tUNO *pp)
{ 
    preguntar_njugadores(&pp->j.njugadores);
    preguntar_nombre(&pp->j.vjugadores[0].nombre);
    pp->modo=preguntar_comprobacion(&pp->modo); 
}

int preguntar_comprobacion(int modo)
{
    int m;
    char pregunta[20] = "Modo comprobacion? "; 
    m = preguntar_si_o_no(pregunta);
    return m;
}
