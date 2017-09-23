#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"


void cargarPersona(ePersona lista[], int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        if(lista[i].estado==0)
        {

            printf("Ingrese Nombre: ");
            fflush(stdin);
            gets(lista[i].nombres);
            printf("Ingrese edad: ");
            scanf("%d", &lista[i].edad);
            printf("Ingrese el Documento: ");
            scanf("%d", &lista[i].dni);

            lista[i].estado = 1;

            break;
        }

    }
}





void borrarPersona(ePersona lista[], int tam)
{
    int i;
    int auxInt;
    char respuesta;
    int flag=0;
    printf("Ingrese el numero de documento : ");
    scanf("%d",&auxInt);
    for (i=0 ; i<tam ; i++)
    {
        if(lista[i].dni==auxInt)
        {

            flag=1;
            mostrarPersona(lista[i]);
            printf("Desea eliminar persona?\n");
            respuesta=getche();

            if(respuesta=='s')
            {
                lista[i].estado=-1;


            }
            else
            {

                printf("Accion cancelada \n");
            }
            fflush(stdin);
            break;
        }


    }
}



void mostrarPersona(ePersona per)
{
    printf("%s--%d--%d\n",per.nombres, per.edad, per.dni);


}


void mostrarPersonas(ePersona lista[], int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarPersona(lista[i]);
        }

    }
}

void ordenarPersonas(ePersona lista[], int tam)
{
    int i, j;
    ePersona auxPersona;

    for(i=0; i<tam-1; i++)
    {

        for(j=i+1; j<tam; j++)
        {

            if(stricmp(lista[i].nombres, lista[j].nombres)>0)
            {
                auxPersona=lista[i];
                lista[i]=lista[j];
                lista[j]=auxPersona;

            }
        }
    }
}



















void inicializarGrafico(ePersona lista[], int tam)
{

    int i;
    int max=0;
    int contador=0,contador2=0,contador3=0;


    for(i=0; i<tam ; i++)
    {
        if(lista[i].estado==1 && lista[i].edad>0)
        {

            if(lista[i].edad <=18 )
            {
                contador++;
            }
            else if (lista[i].edad >18 &&  lista[i].edad <=35)
            {
                contador2++;
            }
            else
            {
                contador3++;
            }
        }

    }
    max=contador;

    if(contador < contador2)
    {
        max=contador2;
    }

    if (max < contador3)
    {
        max=contador3;
    }


    for (i = max; i > 0; i--)
    {

        if (contador >= i)
        {
            printf("*\t");
        }
        else
        {
            printf(" \t");
        }
        if  (contador2 >= i)
        {
            printf("*\t");
        }
        else
        {
            printf("\t");
        }
        if (contador3 >=i)
        {
            printf("*\n");
        }
        else
        {
            printf("\n");
        }

        // putchar('\n');
    }
    printf("18    19-35  \t>35\n ");
}


