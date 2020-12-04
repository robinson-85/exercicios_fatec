/* 7. Faça um programa que leia um vetor de 15 posições de números inteiros. Exibe 
quantos e quais destes números são primos. */

#include <stdio.h>
int main(){
    int vetor[5];
    int resultado = 0;

    for(int i=0; i<5; i++){
        printf("Digite os valores: \n");
        scanf("%d", &vetor[i]);
    }

    for(int i=2; i<=15/2; i++){
        if (vetor[i]% i == 0 == resultado){
            printf("Esses são números primos: %d\n", resultado);
        }
    }
    
    getchar();
    return 0;
}