/* 19. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com
a tabela a seguir, verifique e mostre a classificação dessa pessoa.

                                       Peso
Altura             Até 60         Entre 60 e 90(inclusive)      Acima de 90
Menores que 1.20       A                   D                          G
De 1.20 a 1.70         B                   E                          H
Maiores que 1.70       C                   F                          I                */

#include <stdio.h>

int main(){
    float peso, altura;
    printf("Digite a sua altura (em m): \n");
    scanf("%f", &altura);
    printf("Digite o peso (em kg): \n");
    scanf("%f", &peso);

    if(altura<1.20){
        if(peso<=60){
            printf("Classificacao: A \n");
        }
        else if(peso<=90){
            printf("Classificacao: B \n");
        }
        else{
            printf("Classificacao: C \n");
        }
    }else if(altura<=1.70){
        if(peso<=60){
            printf("Classificacao: D \n");
        }
        else if(peso<=90){
            printf("Classificacao: E \n");
        }
        else {
            printf("Classificacao: F \n");
        }
    }else{
        if(peso <= 60){
            printf("Classificacao: G \n");
        }
        else if(peso <= 90){
            printf("Classificacao: H \n");
        }
        else{
            printf("Classificacao: I \n");
        }
    }

    getchar();
    return 0;
}