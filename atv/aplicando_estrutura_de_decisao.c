#include <stdio.h>

int main (){

// variaveis
    float umidade, temperatura;
    unsigned int estoque, estoqueminimo;

// incrementando variavel
    estoqueminimo = 1000;

// captura de informações
    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

// conferindo temperatura
    if (temperatura > 30) {
        printf("Temperatura está alta.\n");
    } else {
        printf("Temperatura está dentro dos parâmetros.\n");
    }
// conferindo umidade
    if (umidade > 50) {
        printf("Umidade está elevada\n");
    } else {
        printf("Umidade está dentro dos parâmetros.\n");
    }
// conferindo estoque
    if (estoque < estoqueminimo) {
        printf("O estoque está baixo.\n");
    } else {
        printf("Estoque está normal.\n");
    }

}