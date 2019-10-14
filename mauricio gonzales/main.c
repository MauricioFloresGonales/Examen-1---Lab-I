#include <stdio.h>
#include <stdlib.h>

#include "peliculas.h"
#include "actores.h"
#include "elenco.h"

#define TP 5
#define TG 4
#define TA 8
#define TE 8

int main()
{
    ePelicula peliculas[TP];
    eGenero generos[TG];
    eActor actores[TA];
    eElenco elencos[TE];

    int opcion;

    inicializarActores(actores,TA);
    harcodeoActores(actores,5);

    do{
        printf("1- Gestion de Actores:\n");
        printf("2- Gestion de Elencos:\n");
        printf("3- salir:\n");

        printf("elija una opcion:\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            menuActores(actores,TA);
            break;
        case 2:
            ingreseElenco(elencos,TE,peliculas,TP,generos,TG,actores,TA);
            break;
        default:
            printf("SALIR");
        }

    system("pause");
    system("cls");

    }while(opcion != 3);


    return 0;
}
