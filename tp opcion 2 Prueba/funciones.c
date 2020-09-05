
#include "funciones.h"

float restarNumeros(float primerNumero, float segundoNumero)
{
    float resta;
    resta = primerNumero-segundoNumero;
    return resta;
}

float SumarNumeros(float primerNumero, float segundoNumero)
{
    float suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

float multiplicarNumeros(float primerNumero, float segundoNumero)
{
    float multiplicacion;
    multiplicacion = primerNumero*segundoNumero;
    return multiplicacion;
}

float dividirNumeros(float primerNumero, float segundoNumero)
{
    float division;
    division = (float)primerNumero/segundoNumero;
    return division;
}

int calcularFactorial(int operandoA)
{
   int resultadoA;


    if(operandoA == 0 )
    {
        resultadoA = 1;
    }
    else
    {
         resultadoA = operandoA * calcularFactorial(operandoA - 1);
    }

    return resultadoA;
}


}
