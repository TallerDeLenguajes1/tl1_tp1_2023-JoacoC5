#include <stdio.h>

int cuadrado (int a);
void cuadradoV (int a);
void variable (int a);
void invertir (int *a, int *b);
void orden (int *a, int *b);

int main () {

    int num, cuad, numA, numB, *puntA, *puntB;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    cuad = cuadrado (num);
    printf("El cuadrado del numero es %d\n\n", cuad);

    cuadradoV (num);

    variable (num);

    printf("Ingrese un numero: ");
    scanf("%d", &numA);
    printf("Ingrese el otro numero: ");
    scanf("%d", &numB);

    puntA = &numA;
    puntB = &numB;

    printf("\nEl valor del numero A es: %d\n", *puntA);
    printf("El valor del numero B es: %d\n", *puntB);

    invertir (puntA, puntB);

    printf("\nNuevo valor numero A es: %d\n", *puntA);
    printf("Nuevo valor numero B es: %d\n", *puntB);

    orden (puntA, puntB);
    printf("\nEL numero menor es: %d\n", *puntA);
    printf("EL numero mayor es: %d\n", *puntB);


    return 0;
}

int cuadrado (int a)
{
    int aux;

    aux = a*a;

    return aux;
}

void cuadradoV (int a) {
    int aux;

    aux = a*a;

    printf("El cuadrado del numero en la funcion void es: %d\n\n", aux);
}

void variable (int a)
{
    printf("La direccion de memoria de la variable es %d\n", &a);
    printf("El contenido de la variable es %d\n\n", a);

}

void invertir (int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void orden (int *a, int *b)
{
    int aux;

    aux = *a;

    if(*a>*b) {
        *a = *b;
        *b = aux;
    }
}