/* 2. Faça um programa que carregue um vetor com sete números inteiros, calcule e mostre:
• Os números múltiplos de 2
• Os números múltiplos de 3
• Os números múltiplos de 2 e 3 (ao mesmo tempo). */

#include <stdio.h>
int main(){
    int vetor[7];

    for(int i=0; i<7; i++){
        printf("Digite um valor: \n");
        scanf("%d \n", &vetor[i]);
    }

    getchar();
    return 0;
}