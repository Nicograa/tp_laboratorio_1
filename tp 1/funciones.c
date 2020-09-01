#include "funciones.h"

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

int calcularFactorialA(int operandoA)
{
   int resultadoA;


    if(operandoA == 0 )
    {
        resultadoA = 1;
    }
    else
    {
         resultadoA = operandoA * calcularFactorialA(operandoA - 1);
    }

    return resultadoA;
}

int calcularFactorialB(int operandoB)
{
   int resultadoB;


    if(operandoB == 0 )
    {
        resultadoB = 1;
    }
    else
    {
         resultadoB = operandoB * calcularFactorialB(operandoB - 1);
    }

    return resultadoB;
}
