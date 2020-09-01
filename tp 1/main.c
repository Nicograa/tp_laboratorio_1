#include <stdio.h>
#include <stdlib.h>

int SumarNumeros(int, int);
int restarNumeros(int, int);
int multiplicarNumeros(int, int);
float dividirNumeros(int, int);

int main()
{
    int operandoA;
    int operandoB;
    int suma;
    int resta;
    int multiplicacion;
    float division;


    printf("Ingrese un numero: ");
    scanf("%d", &operandoA);
    printf("Ingrese otro numero: ");
    scanf("%d", &operandoB);

    suma = SumarNumeros(operandoA, operandoB);
    printf("El resultado de A+B es: %d\n", suma);

    resta= restarNumeros(operandoA, operandoB);
    printf("La resta de A-B es: %d\n", resta);

    multiplicacion= multiplicarNumeros(operandoA, operandoB);
    printf("El resultado de A*B es: %d\n", multiplicacion);

    division= dividirNumeros(operandoA, operandoB);
    printf("El resultado de A/B es: %.2f", division);

    return 0;
}

int restarNumeros(int primerNumero, int segundoNumero)
{
    int resta;
    resta = primerNumero-segundoNumero;
    return resta;
}

int SumarNumeros(int primerNumero, int segundoNumero)
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

int multiplicarNumeros(int primerNumero, int segundoNumero)
{
    int multiplicacion;
    multiplicacion = primerNumero*segundoNumero;
    return multiplicacion;
}

float dividirNumeros(int primerNumero, int segundoNumero)
{
    float division;
    division = (float)primerNumero/segundoNumero;
    return division;
}

