#include "cartas.h"
#include "jugadores.h"
#include "partida.h"
#include "colores.h"

//marta: el main va en uno.c
/* int main ()
{
    
}*/
void descartar_cartas(){
    
} //función que añade la carta seleccionada de entre las posibilidades al mazo de descarte, llamado "fuera" de tUNO
void robar_carta(){
    
} //función que escoge una carta aleatoria del mazo "robar" de tUNO y la añade a la mano del jugador en cuestión
void turno(){
    
} //recorra el vecotor de jugadores en buble (al no haber cartas de acción siempre será en el mismo sentido
void fin(){
    
} // fucnión que controla el número de cartas de cada jugador y, en caso de que alguien se quede sin da por acabada la partida

//LEYLA: 
void inicializar_partida()
{
    tjugadores njugadores; 
    tjugador nombre;
    int modo;
    
    preguntar_njugadores(&njugadores);
    preguntar_nombre(&nombre);
    modo = preguntar_comprobacion(modo); //no he cogido el modo de dentro de la struct de partida.h porque no sé hacerlo, así que he sacado la variable del struct
    
            
}
// LEYLA:
int preguntar_comprobacion()
{
    int m;
    char pregunta[30] = "Modo comprobacion? "; //he cogido una función de la librería preguntas.h, y he puesto el 30 por poner algo: preguntaré a Marta
    m = preguntar_si_o_no(pregunta);
    return m;
}