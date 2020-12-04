/* 5. Faça um programa que carregue 1 vetor de 6 elementos numéricos inteiros; calcule e
imprima a quantidade de números pares e a quantidade de números impares. */

#include <stdio.h>
int main(){
    int vetor[6];
    int par, impar;

    for(int i=0; i<6; i++){
        printf("Digite os valores: \n");
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<6; i++){
        if(vetor[i]%2==0){
            printf("Número par: %d\n", vetor[i]);
        }
        else{
            printf("Número ímpar: %d\n", vetor[i]);
        }
    }

    getchar();
    return 0;
}