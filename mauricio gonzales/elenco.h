#include "actores.h"
#include "peliculas.h"

typedef struct
{
    int codigoDePelicula; /**Validar*/
    int codigoDeActor; /**Validar*/
    int valorContrato;

}eElenco;

void inicializarElencos(eElenco[],int len);
int indiceLibreElenco(eElenco [],int len);

void ingreseElenco(eElenco[],int te,ePelicula[],int tp,eGenero[],int tg,eActor[],int ta);

