#include<stdio.h>

void swap (int *a , int * b ) ;
int longitudCadena ( char * cadena ) ;

// funcion que cambia los valores de dos variables enteras usando punteros
void swap (int *a , int * b ) {

    int temp = *a ;// Guardamos el valor de a en una variable temporal
    *a = *b ;   // Asignamos el valor de b a a
    *b = temp ; // Asignamos el valor temporal (original de a) a b
}

// funcion que calcula la longitud de una cadena de caracteres
int longitudCadena ( char * cadena )  {
    int longitud = 0 ;
    while ( *cadena= '\0' ) { // Recorremos la cadena hasta encontrar el caracter nulo
        longitud++ ; // Incrementamos la longitud por cada caracter no nulo
    }
    return longitud ; // Devolvemos la longitud calculada
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

    // Ejemplo de uso de la funcion longitudCadena
    char cadena[] = "Hola, mundo!";
    int longitud = longitudCadena(cadena); // Llamamos a la funcion longitudCadena  
    printf("La longitud de la cadena \"%s\" es: %d\n", cadena, longitud);
    //fin del uso de la funcion longitudCadena
    
    return 0;
}