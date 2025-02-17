#include <stdio.h>

int main (){
    /*se a idade for 18 ou mais, o programa imprime "Vocẽ é maior de idade.
    nesse exemplo, 20 é maior que 18, então a mensagem sera exibida"*/

    int idade = 17;

    if(idade >= 18){
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade\n");
    }
}