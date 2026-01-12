#include <stdio.h>

int main(){
    int idade = 20;
    double altura = 1.70;
    //float deu problema, pois 1.70 = 1.70 estava sendo lido diferente, como se 1.70 > 1.70 por conta da imprecisão no resto das casas decimais do ponto flutuante.

    printf("\n\n%.11f\n\n", altura);

    //Idade >= 18 => Verdadeira
    //Idade <= 30 => Verdadeira
    //Verdadeira && Verdadeira

    //Verdadeiro && Altura > 1.70
    //Verdadeiro && Verdadeiro => Verdadeiro.


    
    if(idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("\nVocê está na faixa etária e tem a altura adequada.\n");
    }   else{
        printf("\nVocê não atende aos critérios.\n");
    }

    return 0;
}