#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int sumatoria = suma(1,2);
    printf("El resultado de la suma es: %d\n",sumatoria);

    int rest = resta(4,2);
    printf("El resultado de la resta es: %d\n",rest);

    int mult = multiplicacion(10, 10);
    printf("EL resultado de la multiplicacion es: %d\n",mult);

    float divi = divicion(20,2);
    printf("El resultado de la divicion es: %f\n",divi);


    return 0;
}
