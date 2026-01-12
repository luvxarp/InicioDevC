#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;
    int c = 1;

    //a > 0 => verdadeiro
    //b < 0 => falso
    // Verdadeiro && Falso => falso
    // Falso || c == 0
    // Falso || Falso => falso

    //CASO:

    //a > 0 => verdadeiro
    //b < 0 => verdadeiro
    // Verdadeiro && Verdadeiro => verdadeiro
    // Verdadeiro || c == 0
    // Verdadeiro || Falso => verdadeiro

    
    if(a > 0 && b < 0 || c == 0) {
        printf("\nA condição é verdadeira\n");
    }   else{
        printf("\nA condição é falsa\n");
    }

    return 0;
}