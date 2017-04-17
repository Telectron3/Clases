#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PEKINES 1
#define PITBUL 2
#define LABRADOR 3
#define OBEJERO 4
#define CANICHE 5

typedef struct
{
    int codigo;
    char nombre[100];
    char telefono[50];


}eDuenio;

typedef struct
{
    int identificador;
    int raza;
    char nombre[100];
    int vacuna_al_dia;
    int duenio;


}ePerro;

void cargarDuenios(eDuenio[]);
void cargarPerros(ePerro[]);
void mostrarPerros(ePerro[]);

int main()
{
    eDuenio duenio1[1];
    printf("%d,--%s,--%s,--",cargarDuenios(duenio1[1]));

    return 0;
}

void cargarDuenios(eDuenio D[])
{

    int cod[3]= {1,2,3};
    char nomb[3][50]={"Juan","Maria","Luis"};
    char tel[3] [30]={"4312","8844","2345"};

    for ( int i=0;i<3;i++)
    {
        D[i].codigo= cod[i];

        strcpy(D[i].nombre,nomb[i]);
        strcpy(D[i].telefono,tel[i]);
    }

}

void cargarPerros(ePerro P[])
{
    int cod[3] = {1,2,3};
    int raza[3] = {PEKINES, LABRADOR, PITBUL};
    char nomb[3][50]={"Firulais","Yoyo","Lola"};
    int vacuna[3] = {1,0,1};
    int duenio[3] = {1,2,3};

    for (int i = 0; i<3; i++)
    {
        P[i].identificador = cod[i];
        P[i].raza = raza[i];
        strcpy (P[i].nombre,nomb[i]);
        P[i].vacuna_al_dia = vacuna[i];
        P[i].duenio = duenio[i];
    }


}
