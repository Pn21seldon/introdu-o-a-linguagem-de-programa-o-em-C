#include <stdio.h>

int main (){

    int numero = 6, resultado;

    resultado = numero % 2;

    printf("A variável resultado é: %d\n", resultado);

    if (numero % 2 == 0) {
        printf("O númeri é par.\n");
    }
}