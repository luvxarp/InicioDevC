#include <stdio.h>

int main(){
    int numero = 11;

    printf("%d\n\n", numero);

    if (numero % 2 == 0) {
        //bloco de código a ser executado se o resto da divisão por 2 for = 0.
        printf("O número é par\n\n");
    } else{
        //bloco de código a ser executado se o resto for maior que 0.
        printf("O número é impar\n\n");
    }

    return 0;
}