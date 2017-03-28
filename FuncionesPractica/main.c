#include <stdio.h>
#include <stdlib.h>
#include "Funciones2.h"

int main()
{
    int legajo;
    printf("Ingrese su numero de legajo de 4 cifras");
    scanf("%d",&legajo);
    numeroLegajo(legajo);
    printf("su numero de legajo es: %d", legajo);

    return 0;
}

