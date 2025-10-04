#include<stdio.h>

void swap (int *a , int * b ) ;

// funcion que cambia los valores de dos variables enteras usando punteros
void swap (int *a , int * b ) {

    int temp = *a ;// Guardamos el valor de a en una variable temporal
    *a = *b ;   // Asignamos el valor de b a a
    *b = temp ; // Asignamos el valor temporal (original de a) a b
}

int main () {
    
    // Ejemplo de uso de la funcion swap

    //variables a intercambiar
    int x = 5 ;
    int y = 10 ;
    
    printf("Antes del swap: x = %d, y = %d\n", x, y);
    swap(&x, &y); // Llamamos a la funcion swap pasando las direcciones de x e y
    printf("Despues del swap: x = %d, y = %d\n", x, y);
    //fin  del uso de la funcion swap

    return 0;
}