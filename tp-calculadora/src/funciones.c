#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float sumar(float num1, float num2)
{
    float suma;
    suma=num1+num2;
    return suma;
}
float restar (float num1, float num2)
{
    float resta;
    resta=num1-num2;
    return resta;
}
float multiplicar (float num1, float num2)
{
    float multiplicacion;
    multiplicacion=num1*num2;
    return multiplicacion;
}

float dividir (float num1, float num2)
{
    float division;
    division=num1/num2;
    return division;
}
float factorizar (float num)
{
    float factorial=1;
    float i;
    for (i=1;i<=num;i++)
    {
        factorial= factorial*i;
    }
    return factorial;
}
