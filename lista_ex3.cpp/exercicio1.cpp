// 1. Faça um algoritmo que receba dois números e exiba o resultado da sua soma.

#include <stdio.h>

int main(){
    int n1, n2, soma;
    printf("Digite um número: \t");
    scanf("%d", &n1);
    printf("Digite outro numero: \t");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma dos numeros e: %d \t", soma);
    
    getchar ();
    return 0;
}