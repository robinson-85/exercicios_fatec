/* 5. Faça um programa que carregue uma matriz 5x5 de números reais, calcule e mostre a
média dos elementos das linhas pares da matriz. */

#include <stdio.h>

int main(){
    int media_par = 0;
    int mat[5][5];
    int i, j;

        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++){
                printf("Digite valor %d da linha e valor %d da coluna \n");
                scanf("%d%*c", &mat[i][j]);
            }
        }
    
    getchar();
    return 0;
}