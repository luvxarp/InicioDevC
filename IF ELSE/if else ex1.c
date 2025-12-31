#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    numero1 = 10;
    numero2 = 5;

    if (numero1 >= numero2) {
        //bloco de código a ser executado se a condição for verdadeira
        printf("Número 1 é maior ou igual ao Número 2\n\n");
    } else{
        //bloco de código a ser executado se a condição for falsa
        printf("Número 1 é menor que número 2\n\n");
    }

    return 0;
}