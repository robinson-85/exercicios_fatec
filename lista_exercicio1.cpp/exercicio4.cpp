// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

#include<stdio.h>
int main(){
    float sal,salnovo;
    printf("Digite o salário do funcionario \n");
    scanf("%f",&sal);

    salnovo= sal*1.25;

    printf("O salario novo e igual a %.2f", salnovo);
    getchar();
    return 0;
}

