#include <stdio.h>
#include "peliculas.h"
#include "genero.h"


void harcodeoGeneros(eGenero generos[],int len)
{
    int id[]={1,2,3,4};
    char descripcion[][51]={"Accion","Terror", "Romance", "Suspenso"};
    int i;

    for(i=0;i<len;i++)
    {
        generos[i].id = id[i];
        stricmp(generos[i].descripcion,descripcion);
    }

}
