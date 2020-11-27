// 1. Faça um programa que lê 10 notas e exiba quantas são maiores que 7.

#include <stdio.h>

int main(){
    int vetor[10];
    int i;
    for(int i = 0; i < 10; i++){
        printf("Informe o número da posição %i do vetor: \n", i);
        scanf("%i", &vetor[i]);
    }

    for(int i = 0; i < 10; i+=7){
        printf("%d - \n", vetor[i]);

    }

    getchar();
    return 0;
}