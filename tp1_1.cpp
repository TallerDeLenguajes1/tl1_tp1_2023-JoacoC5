#include <stdio.h>

main (){
    int a=5432, *punt;

    punt = &a;

    printf("Contenido del puntero: %d\n", punt);
    printf("Direccion de memoria almacenada por puntero: %d\n", punt);
    printf("Direccion de memoria de la variable: %d\n", &a);
    printf("Direccion de memoria del puntero: %d\n", &punt);
    printf("Memoria utilizada por la variable: %d Bytes", sizeof(*punt));

    return 0;
}