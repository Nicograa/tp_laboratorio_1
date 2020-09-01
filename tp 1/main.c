#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    int operandoA;
    int operandoB;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int resultadoA;
    int resultadoB;
    int opcionMenu;


    do
     {
        printf("\nIngrese un numero A: ");
        scanf("%d", &operandoA);

        printf("\nIngrese otro numero B: ");
        scanf("%d", &operandoB);

        printf( "\n*** MENU CALCULADORA ***" );
        printf("\n1-Sumar numeros\n2-Restar numeros\n3-Multiplicar numeros\n4-Dividir numeros\n5-Factorizar numeros\n6-Salir.\n");
        printf("\nElija una opcion:");
        scanf("%d", &opcionMenu);

        switch(opcionMenu)
        {
            case 1:
                suma = SumarNumeros(operandoA, operandoB);
                printf("\nEl resultado de A+B es: %d\n", suma);
                break;
            case 2:
                resta= restarNumeros(operandoA, operandoB);
                printf("\nLa resta de A-B es: %d\n", resta);
                break;
            case 3:
                multiplicacion= multiplicarNumeros(operandoA, operandoB);
                printf("\nEl resultado de A*B es: %d\n", multiplicacion);
                break;
            case 4:
                if(operandoB!=0)
                {
                    division= dividirNumeros(operandoA, operandoB);
                    printf("\nEl resultado de A/B es: %.2f\n", division);
                }else
                    {
                        printf( "\n ERROR: No se puede dividir entre cero.\n" );
                    }
                    break;
            case 5:
                resultadoA = calcularFactorialA(operandoA);
                printf("\nEl factorial de %d es: %d\n", operandoA, resultadoA);

                resultadoB = calcularFactorialB(operandoB);
                printf("\nEl factorial de %d es: %d\n", operandoB, resultadoB);
                break;
            case 6:
                printf("\nGracias por utilizar nuestro programa\n");
                break;
        }
     }while(opcionMenu!=6);



    return 0;
}

