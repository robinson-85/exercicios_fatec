/* 6. Faça um programa que carregue uma matriz M 4x6 e uma segunda matriz N 6x4, calcule
e imprima a soma das linhas M com as colunas de N.*/

#include <stdio.h>
int main(){
    int m[4][6], n[6][4];
    int i, j, soma;

    for (i = 0; i <4; i++){
        for (j = 0; j <6; j++){
            printf("Digite valor para M: \n");
            scanf("%d%*c", &m[i][j]);
        }
    }

    for(i = 0; i < 6; i++){
        for (j = 0; j <6; j++){
            printf("Digite valor para N: \n");
            scanf("%d%*c", &n[i][j]);
        }
    }

    for (i = 0; i < 4; i++){
        for(j = 0; j <6; j++){
            soma = m[i][j] + n[j][i];
        }
    }

    printf("A soma da linha M e coluna N é: %d \n", soma);

    getchar();
    return 0;
}