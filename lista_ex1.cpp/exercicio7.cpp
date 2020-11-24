/* 7.Faça um programa que receba o salário base de um funcionário, calcule 
e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação 
de R$ 50 e paga imposto de 10% sobre o salário base. */

#include <stdio.h>

int main (){
    float sal_base, sal_receber, gratificacao = 50, imposto = 0.10, resultado; 
    printf("Digite o seu salario: R$ \n");
    scanf("%f", &sal_base);
    
    resultado = (sal_base + gratificacao) - (sal_base * imposto);
    sal_receber = resultado;
    
    printf("Salario a receber: R$ %.2f \n", sal_receber);
    
    getchar();
    return 0;
}