/* 1. Escreva um programa que leia uma matriz (3x5 ou 5x3) de 15 números inteiros e exiba
ao final a soma dos valores de cada linha que estão armazenados nesta matriz. */

#include<stdio.h>

int main(){
    int soma = 0;
    int mat[3][5];
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("Digite valor %d da linha e valor %d da coluna \n");
            scanf("%d%*c", &mat[i][j]);
                 soma = soma + mat[i][j];
            
        }
    }
   
    getchar();
    return 0;
}