#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    float operandoA;
    float operandoB;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int resultadoA;
    int resultadoB;
    int opcionMenu;

    printf("\n   ***CALCULADORA ***\n\n" );


    printf("\n*** MENU CALCULADORA ***\n" );
    printf("\n1-Ingrese un numero 'A':\n");
    printf("\n2-Ingrese un numero 'B':\n");
    printf("\n3-Calcular todas las operaciones\n");
    printf("\n4-Informar resultados\n");
    printf("\n5-Salir.\n");


    do
    {


        printf("\nElija una opcion:");
        scanf("%d", &opcionMenu);

        switch(opcionMenu)
        {
            case 1:
                printf("\nIngresar operando 'A': ");
                scanf("%f", &operandoA);
                break;

            case 2:
                printf("\nIngresar operando 'B': ");
                scanf("%f", &operandoB);
                break;

            case 3:
                suma = SumarNumeros(operandoA, operandoB);
                resta= restarNumeros(operandoA, operandoB);
                multiplicacion= multiplicarNumeros(operandoA, operandoB);
                division= dividirNumeros(operandoA, operandoB);
                resultadoA = calcularFactorialA(operandoA);
                resultadoB = calcularFactorialB(operandoB);
                printf("\nCALCULANDO TODAS LAS OPERACIONES...... \n");
                break;

            case 4:

                printf("\n                                SUMA");
                printf("\n-------------------------------------------------------------------------------\n");
                printf("Operando A= %.2f\n", operandoA);
                printf("Operando B= %.2f\n", operandoB);
                printf("Resultado: \n");
                printf("La suma de A+B es= %.2f\n",suma);
                printf("-------------------------------------------------------------------------------\n\n");
                printf("\n                                RESTA");
                printf("\n-------------------------------------------------------------------------------\n");
                printf("Operando A= %.2f\n", operandoA);
                printf("Operando B= %.2f\n", operandoB);
                printf("Resultado: \n");
                printf("La resta de A-B es= %.2f\n", resta);
                printf("-------------------------------------------------------------------------------\n\n");
                printf("\n                                Multiplicacion");
                printf("\n-------------------------------------------------------------------------------\n");
                printf("Operando A= %.2f\n", operandoA);
                printf("Operando B= %.2f\n", operandoB);
                printf("Resultado: \n");
                printf("La multiplicacion de A*B es= %.2f\n", multiplicacion);
                printf("-------------------------------------------------------------------------------\n\n");

                 if(operandoB!=0)
                {
                    printf("\n                                Division");
                    printf("\n-------------------------------------------------------------------------------\n");
                    printf("Operando A= %.2f\n", operandoA);
                    printf("Operando B= %.2f\n", operandoB);
                    printf("Resultado: \n");
                    printf("El resultado de A/B es= %.2f\n", division);
                    printf("-------------------------------------------------------------------------------\n\n");
                }else
                    {
                        printf( "\n ERROR: No se puede dividir entre cero.\n" );
                    }

                 printf("\n                                Factorial");
                printf("\n-------------------------------------------------------------------------------\n");

                printf("Operando A= %.2f\n", operandoA);
                printf("Resultado: \n");
                printf("El factorial de %.2f es= %d\n", operandoA, resultadoA);
                printf("\n-------------------------------------------------------------------------------\n");

                printf("Operando B= %.2f\n", operandoB);
                printf("Resultado: \n");
                printf("El factorial de %.2f es= %d\n", operandoB, resultadoB);
                printf("-------------------------------------------------------------------------------\n\n");
                 break;
            case 5:
                printf("\nGracias por utilizar nuestro programa\n");
                printf("..........................Grana Nicolas");
                break;
        }
    }while(opcionMenu!=5);


    return 0;
}
