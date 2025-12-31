#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;


    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        //Condição verdadeira
        printf("\nTemperatura está alta!\n");
    }   else{
        //Condição falsa
        printf("\nTemperatura está dentro dos parâmetros.\n");
    }

    if (umidade > 50) {
        printf("A umidade está elevada.\n");
    }   else {
        printf("Umidade está dentro dos parâmetros.\n");
    }

    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo.\n\n");
    }   else {
        printf("Estoque normal.\n\n");
    }

    return 0;
}