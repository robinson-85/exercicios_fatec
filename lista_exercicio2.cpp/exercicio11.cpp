// 11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
// a) o número digitado ao quadrado;
#include <stdio.h>
int main(){
    float num, resultado,num2;
    printf("Digite um numero positivo e maior que 0:\n");
    scanf("%f",&num);
    num2 = num;
    resultado = num * num2;
    printf("%.2f",resultado);
    getchar();
    return 0;
}

// b) o número digitado ao cubo;
#include <stdio.h>
int main(){
    float num, resultado;
    printf("Digite um numero positivo e maior que 0:\n");
    scanf("%f", &num);
    resultado = num * num * num;
    printf("%.2f", resultado);
    getchar();
    return 0;
}

// c) a raiz quadrada do número digitado;
#include <stdio.h>
int main(){
    float x, x2, resultado;
    printf("Digite um numero positivo e maior que 0:\n");
    scanf("%f", &x);
    x2 = x * x;
    resultado = x2 / x;
    printf("%.2f", resultado);
    getchar();
    return 0;

}

// d) a raiz cúbica do número digitado.
#include <stdio.h>
int main(){
    float x, x2, resultado;
    printf("Digite um numero positivo e maior que 0:\n");
    scanf("%f", &x);
    x2 = x * x;
    resultado = x2 / x;
    printf("%.2f", resultado);
    getchar();
    return 0;

}