/* 5.Faça um programa que receba o salário de um funcionário e o percentual 
de aumento, calcule e mostre o valor do aumento e o novo salário.*/

#include <stdio.h>
#include <locale>

int main(){ 
    setlocale( LC_ALL, "Portuguese");
    float sal, perc, aumento, novosal;
    printf("\nDigite o salário do funcionário: R$\n");
    scanf("%f%*c",&sal);
    printf("\nDigite o percentual de aumento: R$\n");
    scanf("%f%*c",&perc);
    
    aumento = sal * perc/100;

    printf("\nAumento = R$ %4.2f \n", aumento);

    novosal = sal + aumento;

    printf("\nNovo salário = R$ %4.2f \n", novosal);

    getchar();
    return 0;
}