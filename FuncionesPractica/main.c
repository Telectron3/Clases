#include <stdio.h>
#include <stdlib.h>

int numeroLegajo(int);
int sueldoNeto(float);
char sexo(char);
int edad(int);


int main()
{
    int legajo;
    printf("Ingrese su numero de legajo de 4 cifras");
    scanf("%d",&legajo);
    numeroLegajo(legajo);
    printf("su numero de legajo es: %d", legajo);

    return 0;
}

int numeroLegajo(int numero)
{
    while(numero<1000 || numero>9999)
    {
        printf("El numero de legajo es incorrecto por favor coloquelo de nuevo");
        scanf("%d", &numero);
    }
    return 0;
}
