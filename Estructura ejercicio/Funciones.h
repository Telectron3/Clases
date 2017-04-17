#define PEKINES 1
#define CANICHE 2
#define LABRADOR 3
#define PITBUL 4
#define OBEJERO 5

typedef struct
{
    int codigo;
    char nombre[50];
    char telefono[8];

}eDuenio;

typedef struct
{
    int identificador;
    int raza;
    char nombre[50];
    int vacuna_al_dia;
    int duenio;
}ePerro;

eDuenio Duenio(int, char[], char[]);
ePerro Perro(int, int, char[], int, int);
