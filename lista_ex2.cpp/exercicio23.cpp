/* 23. Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número. */

#include <stdio.h>
#include <math.h>
int main(){
    float numero,inteira,fracao,arred;
    printf("Digite um numero real: \n");
    scanf("%f",&numero);

 	printf("Parte Inteira : %d \n",(int) numero);
   	printf("Parte Decimal : %f \n", numero - ((int)numero));
    printf("Parte Arredondamento: %f\n", numero + 1);

    getchar();
    return 0;
}