/*GRA�A NICOLAS
Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) �El resultado de A+B es: r�
b) �El resultado de A-B es: r�
c) �El resultado de A/B es: r� o �No es posible dividir por cero�
d) �El resultado de A*B es: r�
e) �El factorial de A es: r1 y El factorial de B es: r2�
5. Salir

*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    float operandoA;
    float operandoB;
    int numero;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float resultadoA;
    float resultadoB;
    int opcionMenu;


    do
     {
        printf(">>>>>CALCULADORA <<<<<\n\n");
        printf("\nIngrese un numero 'A': ");
        scanf("%f", &operandoA);

        printf("\nIngrese otro numero 'B': ");
        scanf("%f", &operandoB);

        printf("\n*** MENU CALCULADORA ***" );
        printf("\n1-Sumar numeros\n2-Restar numeros\n3-Multiplicar numeros\n4-Dividir numeros\n5-Factorizar numeros\n6-Salir.\n");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcionMenu);

        switch(opcionMenu)
        {
            case 1:
                printf("\n                                SUMA");
                printf("\n-------------------------------------------------------------------------------\n");
                suma = SumarNumeros(operandoA, operandoB);
                printf("Operando A= %.2f\n", operandoA);
                printf("Operando B= %.2f\n", operandoB);
                printf("Resultado: \n");
                printf("La suma de A+B es= %.2f\n",suma);
                printf("-------------------------------------------------------------------------------\n\n");
                break;
            case 2:
                printf("\n                                RESTA");
                printf("\n-------------------------------------------------------------------------------\n");
                resta= restarNumeros(operandoA, operandoB);
                printf("Operando A= %.2f\n", operandoA);
                printf("Operando B= %.2f\n", operandoB);
                printf("Resultado: \n");
                printf("La resta de A-B es= %.2f\n", resta);
                printf("-------------------------------------------------------------------------------\n\n");
                break;
            case 3:
                printf("\n                                Multiplicacion");
                printf("\n-------------------------------------------------------------------------------\n");
                multiplicacion= multiplicarNumeros(operandoA, operandoB);
                printf("Operando A= %.2f\n", operandoA);
                printf("Operando B= %.2f\n", operandoB);
                printf("Resultado: \n");
                printf("La multiplicacion de A*B es= %.2f\n", multiplicacion);
                printf("-------------------------------------------------------------------------------\n\n");
                break;
            case 4:
                if(operandoB!=0)
                {
                    printf("\n                                Division");
                    printf("\n-------------------------------------------------------------------------------\n");
                    division= dividirNumeros(operandoA, operandoB);
                    printf("Operando A= %.2f\n", operandoA);
                    printf("Operando B= %.2f\n", operandoB);
                    printf("Resultado: \n");
                    printf("El resultado de A/B es= %.2f\n", division);
                    printf("-------------------------------------------------------------------------------\n\n");
                }else
                    {
                        printf( "\n ERROR: No se puede dividir entre cero.\n" );
                    }
                    break;
            case 5:
                printf("\n                                Factorial");
                printf("\n-------------------------------------------------------------------------------\n");
                resultadoA = calcularFactorial(operandoA);
                printf("Operando A= %.2f\n", operandoA);
                printf("Resultado: \n");
                printf("El factorial de %.2f es= %.2f\n", operandoA, resultadoA);
                printf("\n-------------------------------------------------------------------------------\n");
                resultadoB = calcularFactorial(operandoB);
                printf("Operando B= %.2f\n", operandoB);
                printf("Resultado: \n");
                printf("El factorial de %.2f es= %.2f\n", operandoB, resultadoB);
                 printf("-------------------------------------------------------------------------------\n\n");
                break;
            case 6:
                printf("\nGracias por utilizar nuestro programa\n");
                break;

            default: printf("\ERROR INGRESO UNA OPCION INCORRECTA\n");
                     break;
        }
     }while(opcionMenu!=6);




    return 0;
}

