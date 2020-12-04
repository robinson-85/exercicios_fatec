/* 6. Faça um programa que carregue um vetor de dez números. Calcule e mostre um vetor
resultante ordenado de maneira crescente. */

#include <stdio.h>
int main(){
    int vetor[10];
    int crescente;

    for(int i=0; i<10; i++){
        printf("Digite os valores: \n");
        scanf("%d",&vetor[i]);
    }

    for(int i=0; i<10; i++){
        printf("Digite os valores: \n");
            if(vetor[i]<vetor[i]==vetor[i]){
                printf("Esses são os valores crescentes: %d\n",vetor[i]);
            }
    }


    getchar();
    return 0;
}