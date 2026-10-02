/*Ejercicio 12
Una empresa de desarrollo software relacionado a la música cuenta con un servicio de listas de reproducción. Las mismas son creadas por cada 
uno de sus usuarios. De cada una se conoce el nombre y la duración en horas. De cada canción se conoce el nombre de la lista a la que pertenece, 
autor y nombre, género y duración.
Realiza un programa que permita:*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//a)Generar una estructura adecuada para cada una de las listas como también las canciones que va a contener cada una de ellas.
typedef struct
{
    char autor[20];
    char nombre[30];
    char genero[20];
    float duracion;
} cancion;

struct nodo2
{
    cancion dato;
    struct nodo2 *sig;
};

typedef struct nodo2 *puntero2;

typedef struct
{
    char nombre[30];
    int duracion;
    cancion *primera_cancion;
} playlist;

struct nodo
{
    playlist dato;
    struct nodo *sig;
} ;

typedef struct nodo *puntero;

//b) Ingresar los datos correspondientes a cada una de las listas de reproducción.
void crear(puntero &c)
{
    c = NULL;
    return;
}

void crear2(puntero2 &c)
{
    c = NULL;
    return;
}
void insertar_cancion(puntero2 &c2)
{
    puntero2 nuevo;
    char nombre[30];
    float acum = 0;

    printf("Ingrese nombre de la cancion:\n");
    gets(nombre);
    while (nombre != NULL)
    {
        nuevo = (puntero2) malloc (sizeof(struct nodo2));
        nuevo -> dato.nombre = nombre;
        printf("Ingrese Autor:\n");
        gets(nuevo->dato.autor);
        printf("Ingrese Genero:\n");
        gets(nuevo->dato.genero);
        printf("Ingrese duracion:\n");
        scanf("%.2f", &nuevo -> dato.duracion);
    }
}
void insertar_playlist(puntero &c, puntero &c2)
{
    puntero nuevo;
    char nombre[30];

    printf("Ingrese nombre de la playlist:\n");
    gets(nombre);
    if (nombre != NULL)
    {
        nuevo = (puntero) malloc (sizeof(struct nodo));
        nuevo -> dato.nombre;
        insertar_cancion(c2);
    }
}

int main()
{
    puntero cabeza;
    puntero2 cabeza2;

    crear(cabeza);
    crear2(cabeza2);

    insertar_playlist(cabeza, cabeza2);
}

c)
Registrar el ingreso de las distintas canciones, el mismo no cuenta con un orden especifico.
d)
Dado un nombre y autor ingresado por el usuario realizar la eliminación de dicha canción de la lista correspondiente.
e)
Generar una nueva lista de reproducción llamada “Rock alternativo” y guardar todas aquellas canciones de las listas existentes cuyo genero sea “Rock alternativo”.
f)
Mostrar la lista generada usando una función recursiva.