#include <stdio.h>
#include "Inputs.h"

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int codigo; /**(autoincremental)*/
    char nombre[51];/**Validar**/
    char apellido[51];/**Validar*/
    char sexo; /**Validar */
    int estado;
}eActor;


void menuActores(eActor actores[],int len);
void inicializarEmpleados(eActor actores[],int len);//PRINCIPAL
void ingresarActores(eActor actores[],int len);
int idAuto(eActor [],int len,int valMenor);
int idMayor(eActor [],int len,int valMenor);
int indiceLibre(eActor actores[],int len);
void modicficarActor(eActor actores[],int len);//PRINCIPAL
int buscarCodigo(eActor actores[],int len);
void mostrarUnActor(eActor actores[],int indice);
void MostrarActores(eActor actores[],int len);//PRINCIPAL
void borrarAlumno(eActor actores[],int len);
