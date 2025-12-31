#include <stdio.h>

int main(){

    int numero = 5, resultado;

    resultado = numero % 2;

    printf("A variável resultado é: %d.\n\n", resultado);

    if (resultado == 0) {
        printf("O número é par.\n\n");
    }
    else{
    printf("O número é ímpar.\n\n");
    }

    return 0;
}