#include <stdio.h>
#include <stdlib.h>

int sumar(int,int);
int factorial(int);

int main(){
    int numeroUno, numeroDos, resultado;
    numeroUno = 0;
    numeroDos = 0;
    resultado = 0;
    printf("Hola, Gaby!\n");
    printf("Esta es una prueba para desarrollo colaborativo.\n");
    do{
        printf("Introduce un numero entre 0 y 5: ");
        scanf("%d",&numeroUno);
        printf("Introduce otro un numero entre 0 y 5: ");
        scanf("%d",&numeroDos);
    }while((numeroUno<0)||(numeroDos<0)||(numeroUno>5)||(numeroDos>5));
    resultado = sumar(numeroUno,numeroDos);
    printf("El resultado de %d + %d es: %d.\n",numeroUno,numeroDos,resultado);
    //resultado = factorial(numeroUno);
    printf("El factorial de %d es: %d.\n",numeroUno,resultado);
    return 0;
}

int sumar(int a, int b){
    return a + b;
}
