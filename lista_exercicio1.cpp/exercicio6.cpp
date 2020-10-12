/* Faça um programa que receba o salário base de um funcionário, calcule 
e mostre o salário a receber, sabendo-se que o funcionário tem gratificação 
de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.*/

#include <stdio.h>
int main (){
    float sal_base, sal_rec, grat = 1.05, imposto = 0.07, resultado;
    printf("Digite o seu salario base: \n");
    scanf("%f",&sal_base);
    resultado = (sal_base * grat) - (sal_base * imposto);
    sal_rec = resultado;
    printf("Salario a receber:%.2f \n", sal_rec);
    getchar();
    return 0;

}