/* 12. Faça um programa que receba dois números maiores que zero, calcule 
e mostre um elevado ao outro.*/

#include<stdio.h>
#include<math.h>

int main(){
    int n1, n2, resultado;
    printf("Digite um numero: \n");
    scanf("%d",&n1);
    printf("Digite um numero: \n");
    scanf("%d", &n2);

    resultado = pow(n1, n2);

    printf("%d \n",resultado);

    getchar();
    return 0;
}
