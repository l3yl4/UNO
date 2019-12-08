#include <stdio.h>
#include "jugadores.h"
#include "cartas.h"

/*int main ()
{
    
}*/

void tirada(){
    
} // función que determina si puedes tirar o no, en caso de que sí se pueda determina las posibilidades
void mostrar_nombre(){
    
} //imprimir por patalla el nombre de los jugadores


//LEYLA:
void preguntar_njugadores(tjugadores *njugadores)
{
  do{
  printf("Cuantos jugadores? [3-5]: ");
  scanf("%d%*c", &njugadores->njugadores);
  }while ((njugadores->njugadores)<NJUGADORESMIN || (njugadores->njugadores)>NJUGADORESMAX);
  
}

void preguntar_nombre(tjugador nombre[DIM_NOMBRE])
{
    int i=0;
    tjugador n;
    
    printf("Tu nombre? ");
    scanf("%c", &n.nombre[i]);
    while(i<DIM_NOMBRE-1 && n.nombre[i]!='\n')
    {
        i++;
        scanf("%c", &n.nombre[i]);
    }
    n.nombre[i]='\n';
}
