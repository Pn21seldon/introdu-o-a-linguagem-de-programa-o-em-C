#include <stdio.h>

int main (){

    int numero = 5, resultado;

    resultado = numero % 2;

    printf("A variável resultado é: %d\n", resultado);

    if (resultado == 0) {
        printf("O númeri é par.\n");
    } else {
        printf("o número é impar\n");
    }
}