/* Faça um programa que receba o salário base de um funcionário, calcule 
e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação 
de R$ 50 e paga imposto de 10% sobre o salário base. */

#include <stdio.h>
int main (){
    float sal_base, sal_rec, grat = 50, imposto = 0.10, resultado; 
    printf("Digite o seu salario: \n");
    scanf("%f", &sal_base);
    resultado = (sal_base + grat) - (sal_base * imposto);
    sal_rec = resultado;
    printf("Salario a receber:%.2f \n", sal_rec);
    getchar();
    return 0;

}