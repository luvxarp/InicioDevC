#include <stdio.h>

int main(){
    //Declarar variáveis produto, u i estoque, double valor unitário, double valor total e
    //u i quantidade mínima
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    
    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB; 

    //Exibir as informações dos produtos
    printf("%s tem estoque %u e o valor unitário é %.2f\n", produtoA, estoqueA, valorA);
    printf("%s tem estoque %u e o valor unitário é %.2f\n", produtoB, estoqueB, valorB);

    //Comparações com o valor mínimo do estoque
    int resultadoA;
    int resultadoB;
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O %s tem estoque mínimo = %d\n", produtoA, resultadoA);
    printf("O %s tem estoque mínimo = %d\n", produtoB, resultadoB);

    //Comparações entre os valores totais dos produtos
    printf("O valor total de A (R$%.2f) é maior que o valor total de B (R$%.2f): %d\n", 
                                            estoqueA * valorA, estoqueB * valorB,
                                            (estoqueA * valorA) > (estoqueB * valorB));

}