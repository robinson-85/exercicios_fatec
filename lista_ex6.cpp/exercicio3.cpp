/* 3. Criar 3 vetores com 10 posições, preencha com números os 2 primeiros, a seguir,
some os valores nas respectivas posições e armazene no 3o vetor. */

#include <stdio.h>
int main(){
    int vetor1[10] = {10, 50, 30, 40, 90, 100, 400, 900, 1200, 1300};
;   int vetor2[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int vetor3[10];
    int i;

    for(int i=0; i<10; i++){
        printf("%d", &vetor1[i]);
    }

    for(int i=0; i<10;i++){
        printf("%d", &vetor2[i]);
    }
    

    for(int i=0; i<10; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    printf("A soma dos dois vetores será: %d\n", vetor3[i]);

    getchar();
    return 0;
}