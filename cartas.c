#include <stdio.h>
#include "cartas.h"
#include "colores.h"
#include "azar.h"

/*
void mostrar_carta(tcarta c);
tbaraja iniciar_baraja ();
tbaraja mezclar_baraja (tbaraja b); 
void mostrar_carta_delreves(tcarta c);

int main ()
{
    int i, j;
    tbaraja b;

    b = iniciar_baraja();
    
    
    
    for (i=0; i<b.ncartas; i++)
    {
        
        if (i%CARTASXLINEA==0)
            printf ("|");
        mostrar_carta(b.vcartas[i]);
        printf ("|");
        if ((i+1)%CARTASXLINEA==0 )
        {
            printf ("\n");
            for (j=0; j<CARTASXLINEA; j++)
                printf ("+---");
            printf ("+\n");
        }
        
    }
    printf ("\n\n");
    
    b= mezclar_baraja(b);
    
    
    
    printf ("\n\n"); 
    
    for (i=0; i<b.ncartas; i++)
    {
        
        if (i%CARTASXLINEA==0)
            printf ("|");
        mostrar_carta_delreves(b.vcartas[i]);
        printf ("|");
        if ((i+1)%CARTASXLINEA==0 )
        {
            printf ("\n");
            for (j=0; j<CARTASXLINEA; j++)
                printf ("+---");
            printf ("+\n");
        }
        
    }
    printf ("\n");
    for (i=0; i<b.ncartas; i++)
    {
        
        if (i%CARTASXLINEA==0)
            printf ("|");
        mostrar_carta(b.vcartas[i]);
        printf ("|");
        if ((i+1)%CARTASXLINEA==0 )
        {
            printf ("\n");
            for (j=0; j<CARTASXLINEA; j++)
                printf ("+---");
            printf ("+\n");
        }
        
    }
    printf ("\n");
 
}
*/

void mostrar_carta(tcarta c)
{
    cambiar_color_letra(0);
    
    switch (c.color)
    {
        case 1:
            cambiar_color_fondo(1);
            break;
        case 2:
            cambiar_color_fondo(2);
            break;
        case 3:
            cambiar_color_fondo(3);
            break;
        case 4:
            cambiar_color_fondo(4);
            break;
    }
    printf (" %d ", c.num);
    default_attributes();
} //funcion que muestra una carta

void mostrar_carta_delreves(tcarta c)
{
    cambiar_color_fondo(0);
    cambiar_color_letra (2);
    printf ("UNO"); 
    default_attributes();
}

tbaraja iniciar_baraja ()
{
    int i, j, cont;
    tbaraja b;
    cont=0;
    b.ncartas=76;//prueba
    for(i=1; i<=4; i++)
    {
        for (j=0; j<=9; j++)
        {
            b.vcartas[cont].num=j;
            b.vcartas[cont].color=i;
            cont++;
        }
        
        for (j=1; j<=9; j++)
        {
            b.vcartas[cont].num=j;
            b.vcartas[cont].color=i;
            cont++;
        }
          
            
    }
    return b;
} //esta funcion crea todas las cartas

tbaraja mezclar_baraja (tbaraja b)
{
    tcarta c;
    int pos1, i, pos2;
    
    for(i=0; i<b.ncartas; i++)
    {
        pos1 = numero_al_azar(b.ncartas);
        pos2 = numero_al_azar(b.ncartas);
        c = b.vcartas[pos1];
        b.vcartas[pos1]=b.vcartas[pos2];
        b.vcartas[pos2]=c;
    }  
    return b;
    
    
}

