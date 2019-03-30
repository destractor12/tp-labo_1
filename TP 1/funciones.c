#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"


int mostrarMenu(float num1,float num2)
{
    int opcion;

    printf("1. Ingresar 1er operando (A= %.2f)\n",num1);
    printf("2. Ingresar 2do operando (B= %.2f)\n",num2);
    printf("3. Calcular todas las operaciones\n");
    printf("4. Informar resultados\n");
    printf("5. Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    opcion=validarEntero(opcion,"una opcion: ",1,5);

    return opcion;

}

float getfloat(char mensaje[])
{
    float num;

    printf("%s",mensaje);
    scanf("%f",&num);

    return num;
}

float SumarOperandos(float num1, float num2)
{
    float suma;

    suma = num1+num2;

    return suma;

}

float restadeoperandos(float num1,float num2)
{
    float resta;

    resta=num1-num2;

    return resta;
}

float divisiondeoperandos(float num1,float num2)
{
    float resultado;

    resultado=num1/(num2);

    if(num1==0||num2==0)
    {
        printf("No es posible dividir por cero");
    }

    return resultado;
}

float multiplicaciondeoperandos(float num1,float num2)
{
    float resultado;

    resultado=num1*(num2);

    return resultado;
}

void mostrarResultados(float re, char mensaje[])
{
    printf("%s %.2f",mensaje,re);
}

void mostrarResultatres( int re,char mensaje[])
{
    if(re==1||re==0)
    {
            printf("\nel factorial es: 1");
    }
    else if(re<0)
    {
        printf("es un numero negativo");
    }
    else
    {
         printf("%s %d",mensaje,re);
    }

}

char getletra(char m[])
{
    char letra;

    printf(m);
    fflush(stdin);
    scanf("%c",&letra);

    return letra;
}

int pedirEntero(char texto[],int min,int max)
{
    int numero;

    printf("Ingrese %s", texto);
    scanf("%d",&numero);

    numero = validarEntero(numero,"Reingrese %s",18,60);

    return numero;
}

int factorial(float num)
{
    int numerofactorizado=1;
    int i;

    if((int)num==1||(int)num==0)
    {
        numerofactorizado=1;
    }
    else if((int)num<0)
    {
        printf("El numero ingresado es negativo");
    }
    else
    {
        for(i=1;i<=(int)num;i++)
        {
            numerofactorizado=numerofactorizado*i;
        }
    }
    return numerofactorizado;
}

int validarEntero(int numero,char texto[],int min,int max)
{
    while(numero<min || numero>max)
    {

        printf("\nReingrese %s",texto);
        scanf("%d",&numero);
    }
    return numero;
}

