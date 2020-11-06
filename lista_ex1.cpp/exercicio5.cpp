/* 5.Faça um programa que receba o salário de um funcionário e o percentual 
de aumento, calcule e mostre o valor do aumento e o novo salário.*/

#include <stdio.h>
int main(){ 
    float sal, perc, aumento, novosal;
    printf("\nDigite o salário do funcionário: ");
    scanf("%f%*c",&sal);
    printf("\nDigite o percentual de aumento: ");
    scanf("%f%*c",&perc);
    
    aumento = sal * perc/100;

    printf("\nAumento = %4.2f",aumento);

    novosal = sal + aumento;

    printf("\nNovo salário = %4.2f",novosal);

    getchar();
    return 0;

}