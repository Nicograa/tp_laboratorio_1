/* GRAÑA NICOLAS
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
*/
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





    printf("\n>>>>>>>CALCULADORA<<<<<<<\n\n" );








    do
    {
        printf("\n*** MENU CALCULADORA ***\n" );
        printf("1-Ingresar 1er operando 'A': \n");
        printf("2-Ingresar 2do operando 'B': \n");
        printf("3-Calcular todas las operaciones\n");
        printf("4-Informar resultados\n");
        printf("5-Salir.\n");
        printf("\nIngrese una opcion:");
        scanf("%d", &opcionMenu);

        switch(opcionMenu)
        {
            case 1:
                printf("\nIngresar 1er operando 'A'= ");
                scanf("%f", &operandoA);
                break;

            case 2:
                printf("\nIngresar 2do operando 'B'= ");
                scanf("%f", &operandoB);
                break;

            case 3:
                suma = SumarNumeros(operandoA, operandoB);

                resta= restarNumeros(operandoA, operandoB);

                multiplicacion= multiplicarNumeros(operandoA, operandoB);

                division= dividirNumeros(operandoA, operandoB);

                resultadoA= calcularFactorial(operandoA);

                resultadoB= calcularFactorial(operandoB);

                printf("\nA=%.2f\n",operandoA);
                printf("\nB=%.2f\n",operandoB);
                printf("\nCALCULANDO TODAS LAS OPERACIONES...... \n");
                break;

            case 4:
                printf("-------------------------------------------------------------------------------\n\n");
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
                        printf("\n                                Division");
                        printf("\n-------------------------------------------------------------------------------\n");
                        printf( "\n ERROR: No se puede dividir entre cero.\n" );
                        printf("-------------------------------------------------------------------------------\n\n");
                    }


                    printf("\n                                Factorial");
                    printf("\n-------------------------------------------------------------------------------\n");
                    printf("Operando A= %.2f\n", operandoA);

                     if (operandoA < 1 || operandoA - (int) operandoA != 0)
                    {
                        printf("ERROR no se pudo hallar el factorial de %.2f.\nEl numero tiene que ser mayor a 0 o no debe ser un numero decimal\n", operandoA);
                    }else
                        {
                            printf("Resultado: \n");
                            printf("El factorial de %.0f es= %d\n", operandoA, resultadoA);
                        }

                    printf("-------------------------------------------------------------------------------\n");

                    printf("Operando B= %.2f\n", operandoB);

                    if (operandoB < 1 || operandoB - (int) operandoB != 0)
                    {
                        printf("ERROR no se pudo hallar el factorial de %.2f.\nEl numero tiene que ser mayor a 0 o no debe ser un numero decimal\n", operandoB);
                    } else
                        {
                            printf("Resultado: \n");
                            printf("El factorial de %.0f es= %d\n", operandoB, resultadoB);
                        }
                    printf("-------------------------------------------------------------------------------\n\n");
                break;
            case 5:
                printf("\nGracias por utilizar nuestro programa.\n");
                printf("..........................Grana Nicolas 1c.");
                break;

            default: printf("\n>>ERROR INGRESA UNA OPCION CORRECTA<<\n");
                     break;
        }
    }while(opcionMenu!=5);


    return 0;
}
