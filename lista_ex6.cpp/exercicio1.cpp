// 1. Faça um programa que lê 10 notas e exiba quantas são maiores que 7.

#include <stdio.h>
int main(){
    int vetor[10] = {};
    
        for(int i = 0; i < 10; i++){
            printf("Digite um valor: \n");
            scanf("%d \n", &vetor[i]);
        }

        for(int i = 0; i >= 7; i++){
            printf("%d - \n", vetor[i]);
        }

        printf("As notas maiores que 7 são: %d\n", vetor[i]);

        getchar();
        return 0;
}