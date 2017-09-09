#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lib.h"

int main(){
    float a=0,b=0;
    int valorA,valorB; //Los Valores que ingrese el usuario se van a imprimir en el menu(-1. y -2.
    float resultado;
    int opcion;

    do{

            system("cls");
            printf("\t\t\t*BIENVENIDO*\n\n\n");
            //system("COLOR F4");
            if(valorA==1)
            {printf("\t\t1-Ingrese un valor para (A=x).\n\n");}
            else{printf("\t\t1-Ingrese un valor para A=%.2f)\n\n",a);}
            if(valorB==1)
            {printf("\t\t2-Ingrese un valor para (A=y).\n\n");}
            else{printf("\t\t2-Ingrese un valor para B=%.2f)\n\n",b);}
            printf("\t\t3-Calcular la Suma (A+B).\n\n");
            printf("\t\t4-Calcular la Resta (A-B).\n\n");
            printf("\t\t5-Calcular Producto (A*B).\n\n");
            printf("\t\t6-Calcular la Division (A/B).\n\n");
            printf("\t\t7-Calcular el factorial (!A).\n\n");
            printf("\t\t8-Calcular todas las Operaciones.\n\n");
            printf("\t\t9-Salir.\n\n");
            printf("\t\tIngrese una opcion: ");

            opcion=getche();

            switch(opcion)
            {

            case '1':
            a=operador();
            break;
            case '2':
            b=operador();
            break;

            case '3':
            if(a==0 || b==0)
            {printf("\n\nPrimero debe ingresar dos valores!\n\n");}
            else{
            resultado=sumar(a,b);
            printf("\n\nEl resultado de la suma  es: %.2f\n\n",resultado);}
            system("pause");
            break;

            case '4':
            if(a==0 && b==0)
            {printf("\n\nPrimero debe ingresar dos valores!\n\n");}
            else{
            resultado=restar(a,b);
            printf("\n\nEl resultado de la resta es : %.2f\n\n",resultado);}
            system("pause");
            break;

            case '5':
            if(a==0 && b==0)
            {printf("\n\nPrimero debe ingresar dos valores!\n\n");}
            else {
            resultado=multiplicacion(a,b);
            printf("\n\nEl resultado de la multiplicacion es: %.2f\n\n",resultado);}
            system("pause");
            break;

            case '6':
            resultado=dividir(a,b);
            if(a==0 &&b==0) {
            printf("\n\nPrimero debe ingresar dos valores!\n\n");}
            else if(b==0){
            printf("\n\nNo se puede dividir por 0\n",b);
            }
            else{
            printf("\n\nEl resultado de la division es: %.2f\n\n ",resultado);
            }
            system("pause");
            break;

            case '7':
            if(a<=0) {
            printf("\n\nIngrese un valor para 'A' mayor a 0!\n\n");}
            else{
            resultado=factorial(a);
            printf("\n\nEl resultado del factorial A es: %.0llf\n\n ",resultado);}
            system("pause");
            break;
            case '8':
                system("cls");
            if(a==0 &&b==0) {
            printf("\n\nPrimero debe ingresar dos valores\n\n");}
            else{
            printf("El resultado de la suma es: %.2f\n\n",sumar(a,b));
            printf("El resultado de la resta es : %.2f\n\n",restar(a,b));
            printf("El resultado de la multiplicacion es: %.2f\n\n",multiplicacion(a,b));
            printf("El resultado de la division es: %.2f\n\n ",dividir(a,b));
            printf("El resultado del factorial es: %lli\n\n",factorial(a));}
            system("pause");
            break;
            case '9':
                printf("\nHasta luego n.n");
                break;
                default:
                printf("\nLa opcion que ingreso es Incorrecta!\n");
                system("pause");

            }
}while(opcion!='9');
    return 0;
}
