#include<stdio.h>

void swap (int *a , int * b ) ;
int longitudCadena ( char * cadena ) ;
void invertirArreglo (int * arr , int size ) ;

// funcion que cambia los valores de dos variables enteras usando punteros
void swap (int *a , int * b ) {

    int temp = *a ;// Guardamos el valor de a en una variable temporal
    *a = *b ;   // Asignamos el valor de b a a
    *b = temp ; // Asignamos el valor temporal (original de a) a b
}

// funcion que calcula la longitud de una cadena de caracteres
int longitudCadena ( char * cadena )  {
    int longitud = 0 ;
    while( *cadena!='\0' ) { // Recorremos la cadena hasta encontrar el caracter nulo
        longitud++; // Incrementamos la longitud por cada caracter no nulo
        cadena++ ; // Avanzamos al siguiente caracter
    }
    return longitud ; // Devolvemos la longitud calculada
}

// funcion que invierte los elementos de un arreglo de enteros
void invertirArreglo (int * arr , int size )  {
    
    int temp; // Variable temporal para el intercambio
    
    for ( int i = 0 ; i < size / 2 ; i++ ) { 
    temp = *(arr + i);// Guardamos el valor actual en una variable temporal
    *(arr + i) = *(arr + size - 1 - i); // Asignamos el valor opuesto al actual
    *(arr + size - 1 - i) = temp;// Asignamos el valor temporal (original) al opuesto

    }
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

    // Ejemplo de uso de la funcion invertirArreglo
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]); // Calculamos el tamaño del arreglo
    invertirArreglo(arr, size); // Llamamos a la funcion invertirArreglo
    printf("Arreglo invertido: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Imprimimos los elementos del arreglo invertido
    }
    printf("\n");
    //fin del uso de la funcion invertirArreglo


    
    return 0;
}