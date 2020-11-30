/* 6. Faça um programa que carregue uma matriz M 4x6 e uma segunda matriz N 6x4, calcule
e imprima a soma das linhas M com as colunas de N.*/

#include <stdio.h>
int main(){
    int soma = 0;
    int M[4][6], N[6][4];
    int iM, jM, iN, jN;

    for (iM = 0; iM <4; iM++){
        for (jM = 0; jM <6; jM++){
            printf("O valor da coluna e %d e o valor da linha e %d \n", iM, jM);
        }
    }

    for(iN = 0; iN < 6; iN++){
        for (jN = 0; jN <6; jN++){
            printf("O valor da coluna e %d e o valor da linha e %d \n", iN, jN);

        }
    }

    soma = iM + jN;

    printf("A soma da linha M e coluna N é: %d \n", soma);

    getchar();
    return 0;
}