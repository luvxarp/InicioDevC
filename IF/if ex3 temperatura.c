#include <stdio.h>

int main(){
    /*Se a idade for 18 ou maior, o programa imprime 'Você é maior de idade'
    No nosso exemplo, 20 é a idade dada, e 20 é um valor maior que 18,
    então a mensagem será exibida.*/

    float temperatura = 30.0;

    if (temperatura >= 30.0) {
        printf("Está calor!\n\n");
    }

    printf("Fora IF\n\n");
    return 0;
}