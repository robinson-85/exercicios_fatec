/* 4. Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo 
e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este 
vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o seu nome, 
o salário fixo e salário no final do mês.*/

#include <stdio.h>

int main(){
    char nome[61];
    float salario, vendas, comissao, salarioFinal;
    printf("Nome do vendedor: \n");
    scanf("%s", &nome);
    printf("O salario e: \n");
    scanf("%f", &salario);
    printf("Vendas do mes: \n");
    scanf("%f", &vendas);

    comissao = vendas * 0.15;
    salarioFinal = salario + comissao;

    printf("O salario final e: %.2f \n", salarioFinal);
    
    getchar();
    return 0;
}