// 1. Faça um programa que lê 10 notas e exiba quantas são maiores que 7.

#include <stdio.h>
int main(){
    int vetor[10];
    int i;
    
        for(int i = 0; i < 10; i++){
            printf("Digite a nota: \n");
            scanf("%d", &vetor[i]);
        }

        for(int i = 0; i < 10; i++){
            if(i>=7){
                printf("As notas maiores que 7 são: %d\n", i);
            }
        }

        

        getchar();
        return 0;
}