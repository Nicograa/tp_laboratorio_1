
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

int calcularFactorial(int numero)
{
    int resultado;

    if(numero<0)
        {
            return 0;
        }

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
         resultado = numero * calcularFactorial(numero - 1);
    }

    return resultado;

}



