#include "elenco.h"

void inicializarElencos(eElenco elencos[],int len)
 {
     int i;
     for(i=0;i<len;i++)
     {
         elencos[i].codigoDePelicula = 0;
         elencos[i].codigoDeActor = 0;
     }
 }

//---------------------------------------------------------------------------------------------------------------------

int indiceLibreElenco(eElenco elencos[],int len)
{
    int i;
    int index = -1;

    for(i=0;i<len;i++)
    {
        if(elencos[i].codigoDePelicula != 0 && elencos[i].codigoDeActor != 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

//---------------------------------------------------------------------------------------------------------------------

void ingreseElenco(eElenco elencos[],int te,ePelicula peliculas[],int tp,eGenero generos[],int tg,eActor actores[],int ta)
{
    int index;
    int codePelicula;
    int codeActor;
    int i;
    int j;

    index = indiceLibreElenco(elencos,te);

    mostrarUnaPelicula(peliculas,tp,generos,tg);

    printf("ingrese el codigo de una pelicula: ");
    scanf("%d",&codePelicula);

    for(i=0;i<te;i++)
    {
        if(codePelicula == peliculas[j].codigo)
        {
            MostrarActores(actores,ta);

            printf("Ingrese el codigo de un Actor para el Elenco: ");
            scanf("%d",&codeActor);

            for(j=0;j<te;j++)
            {
                if(codeActor == actores[j].codigo)
                {
                    while(getInt(&elencos[index].valorContrato,"ingrese el valor del Contrato: ","Error,el contrato no puede pasar de 2.147.483.647",0,2147483647)!=0);
                }
            }
        }
    }

}

//---------------------------------------------------------------------------------------------------------------------------------



