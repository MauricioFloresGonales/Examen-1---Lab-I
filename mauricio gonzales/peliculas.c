#include <stdio.h>
#include <string.h>

#include "peliculas.h"
#include "genero.h"


//file:///Y:/%23%23%23%20LAB1/PPLI%201C%20Parte%201.docx.pdf

void harcodeoPeliculas(ePelicula peliculas[],int len)
{
    int codigo[] ={1,2,3,4,5,6};
    char descripcion[][51]={"destino final","gol","depredador","los juegos del hambre","transformer","los tres chiflados"};
    int duracion[] = {2,1,1,2,3,2};
    int idGenero[] = {1,2,3,4,2,1};
    int i;

    for(i=0;i<len;i++)
    {
        peliculas[i].codigo = codigo[i];
        stricmp(peliculas[i].descripcion,descripcion[i]);
        peliculas[i].duracion = duracion[i];
        peliculas[i].idGenero = idGenero[i];
    }
}

//void ingresarPelicula(ePelicula[],int len);

