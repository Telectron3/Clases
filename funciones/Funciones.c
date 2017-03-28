#include "Funciones.h"


int suma(int a, int b)
{
    int sumatoria = a + b;
    return sumatoria;
}


int resta(int a , int b)
{
    int resultado = a - b;
    return resultado;
}


int multiplicacion(int a, int b)
{
    int producto = a * b;
    return producto;
}


float division(float a, int b)
{
    while(b == 0)
    {
        printf("Error el divisor no puede ser 0\n");
        scanf("%d",&b);
    }

    float result = a / b;
    return result;
}

