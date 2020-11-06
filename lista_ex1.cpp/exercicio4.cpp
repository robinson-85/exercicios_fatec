/* 4.Faça um programa que receba o salário de um funcionário, calcule
 e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.*/

#include<stdio.h>

int main(){
    float sal,sal_novo;
    printf("Digite o salário do funcionario \n");
    scanf("%f",&sal); // input 

    sal_novo= sal* 1.25; // processing

    printf("O salario novo e igual a %.2f", sal_novo); // output
    
    getchar();
    return 0;
}

