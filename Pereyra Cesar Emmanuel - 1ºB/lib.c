#include "lib.h"
#include <conio.h>

//Implementaciones
float operador(){
    float aux;
    printf("\n\nIngrese un valor : ");
    scanf("%f",&aux);
    return aux;
    }

float sumar(float a,float b) //Funcion Suma
{
    float resultado;
    resultado=a+b;

    return resultado;
}

float restar(float a,float b) //Funcion Resta
{
    float resultado;
    resultado=a-b;
    return resultado;
}

float multiplicacion(float a, float b) //Funcion multiplicacion
{
    float resultado;
    resultado=a*b;
    return resultado;
}


float dividir(float a, float b){    //funcion dividir
    float resultado;
    resultado=a/b;

return resultado;
}

long long int factorial(int n)
{
	long long int resultado;
if(n==1)
{
return 1;
}
resultado=n* factorial(n-1);
return (resultado);
}

