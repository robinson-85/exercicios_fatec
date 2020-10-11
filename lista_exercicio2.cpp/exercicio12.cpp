// 12. Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

#include<stdio.h>
#include<math.h>
int main(){
    int num1, num2, resultado;
    printf("Digite um numero\n");
    scanf("%d",&num1);
    printf("Digite um numero\n");
    scanf("%d", &num2);
    resultado = pow(num1, num2);
    printf("%d",resultado);
    getchar();
    return 0;
}
