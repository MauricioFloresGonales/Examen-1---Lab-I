#include <stdio.h>
#include <stdlib.h>

#include "peliculas.h"
#include "genero.h"
#include "actores.h"

#define TP 5
#define TG 4
#define TA 5

int main()
{
    //ePelicula peliculas[TP];
    //eGenero generos[TG];
    eActor actores[TA];

    int opcion;

    inicializarEmpleados(actores,TA);

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

            break;
        case 3:

            break;
        default:
            printf("SALIR");
        }

    system("pause");
    system("cls");

    }while(opcion != 3);


    return 0;
}
