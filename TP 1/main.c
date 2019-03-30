#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno;
    float numeroDos;
    float suma=0;
    float resta=0;
    float multiplicacion=0;
    float division=0;
    int resultado;
    int resultado2;

    do
    {
        system("cls");
        fflush(stdin);
        opcion=mostrarMenu(numeroUno,numeroDos);


        switch(opcion)
        {
        case 1:
            system("cls");
            numeroUno=getfloat("Ingrese el 1er operando:");
            fflush(stdin);
            break;

        case 2:
            system("cls");
            numeroDos=getfloat("Ingrese el 2do operando:");
            fflush(stdin);
            break;

        case 3:
            system("cls");

            suma=SumarOperandos(numeroUno, numeroDos);

            resta=restadeoperandos(numeroUno, numeroDos);

            division=divisiondeoperandos(numeroUno, numeroDos);

            multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);

            resultado=factorial(numeroUno);

            resultado2=factorial(numeroDos);

            break;
        case 4:
            system("cls");

            mostrarResultados( suma, "a) El resultado de A+B es: ");
            mostrarResultados( resta, "\nb) El resultado de A-B es: ");
            mostrarResultados( division, "\nc) El resultado de A/B es: ");
            mostrarResultados( multiplicacion, "\nd) El resultado de A*B es: ");
            mostrarResultatres(resultado,"\ne) El factorial de A es: ");
            mostrarResultatres(resultado2," y El factorial de B es:");
            system("\npause");
            break;
        case 5:

            seguir = 'n';
            break;
        }

    }
    while(seguir!='n');

    return 0;
}


