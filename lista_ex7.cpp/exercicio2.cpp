/* 2. Escreva um programa que leia uma matriz 4 x 5 e ao final exiba a quantidade 
de números pares, a quantidade de números ímpares, a soma dos números pares, a soma 
dos números ímpares, a média dos números pares e a média dos números ímpares. */

#include <stdio.h>

int main(){
    int num_par, num_impar, soma_par, soma_impar, media_par, media_impar;
    int mat[4][5];
    int i, j;

        for(i=0; i<4; i++){
            for(j=0; j<5; j++){
                printf("Digite valor da linha %d e valor da coluna %d\n", i, j);
                scanf("%d%*c", &mat[i][j]);
            }
        }

        for(i=0; i<4; i+=2){
            for(j=0; j<5; j+=2){
                printf("%d%*c - ", num_par);
            }
        }



    getchar();
    return 0;
}