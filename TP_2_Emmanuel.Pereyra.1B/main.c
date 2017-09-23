#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"
#define TAM 3



int main()
{
    ePersona listaPersonas[TAM];
    int opcion=0;
    int i;


    for(i=0; i<TAM; i++)
    {
        listaPersonas[i].estado = 0;
    }
    do
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarPersona(listaPersonas,TAM);
            break;
        case 2:
            borrarPersona(listaPersonas, TAM);
            break;
        case 3:
            ordenarPersonas(listaPersonas,TAM);
            mostrarPersonas(listaPersonas,TAM);

            break;

        case 4:
            system("cls");
            inicializarGrafico(listaPersonas,TAM);
             printf("/n/n");
            break;
        case 5:
            break;
        }

    }
    while(opcion!=5);

    return 0;
}


