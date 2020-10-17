/* 11. Faça um programa que receba um número positivo e maior que zero, 
calcule e mostre:
a) o número digitado ao quadrado; 
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

#include <stdio.h>
int main(){
    float num, resultado, num2, x, x2;
    printf("Digite um numero positivo e maior que 0:\n");
    scanf("%f",&num);
    num2 = num;
    resultado = num * num2;
    printf("%.2f",resultado);

    printf("\nDigite um numero positivo e maior que 0:\n");
    scanf("%f", &num);
    resultado = num * num * num;
    printf("%.2f", resultado);

    printf("\nDigite um numero positivo e maior que 0:\n");
    scanf("%f", &x);
    x2 = x * x;
    resultado = x2 / x;
    printf("%.2f", resultado);

    printf("\nDigite um numero positivo e maior que 0:\n");
    scanf("%f", &x);
    x2 = x * x;
    resultado = x2 / x;
    printf("%.2f", resultado);

    getchar();
    return 0;

}