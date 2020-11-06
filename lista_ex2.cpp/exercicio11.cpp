/* 11. Faça um programa que receba um número positivo e maior que zero, 
calcule e mostre:
a) o número digitado ao quadrado; 
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

#include <stdio.h>
#include<math.h>

int main(){
    float n1, quadrado, cubo, raiz_quadrada, raiz_cubica;
    printf("Digite um numero positivo e maior que zero: \n");
    scanf("%f",&n1);

    quadrado = pow(n1,2);
    cubo = pow(n1,3);
    raiz_quadrada = sqrt(n1);
    raiz_cubica = cbrt(n1);

    printf("O numero digitado ao quadrado e: %.2f \n",quadrado);
    printf("O numero digitado ao cubo e: %.2f \n",cubo);
    printf("A raiz quadrada do numero digitado e: %.2f \n",raiz_quadrada);
    printf("A raiz cubica do numero digitado e: %.2f \n",raiz_cubica);

    getchar();
    return 0;
}