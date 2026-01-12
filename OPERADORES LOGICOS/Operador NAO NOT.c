#include <stdio.h>

int main(){
    int a = 1;

    if(!a) { //(!(a>0))
        printf("\nA variável é zero.\n");
    }   else{
        printf("\nA variável é diferente de zero.\n");
        //printf("\n'a' não é um número positivo.\n");
    }

    return 0;
}