/* 15. Faça um programa que receba o valor do salário mínimo, o número de horas
trabalhadas, o número de dependentes do funcionário e a quantidade de horas extras
trabalhadas. Calcule e mostre o salário a receber do funcionário de acordo com as
regras a seguir:
■ O valor da hora trabalhada é igual a 1/5 do salário mínimo.
■ O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da
hora trabalhada.
■ Para cada dependente, acrescentar R$ 32,00.
■ Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de
50%.
■ O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor
das horas extras.
■ Calcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir:

    IRRF                          Salário bruto  
    Isento                        Inferior a R$ 200,00
    10%                           De R$ 200,00 até R$ 500,00
    20%                           Superior a R$ 500,00

■ O salário líquido é igual ao salário bruto menos IRRF.
■ A gratificação é de acordo com a tabela a seguir:

    Salário Líquido                  Gratificação  
    Até R$ 350,00                      R$ 100,00
    Superior a R$ 350,00               R$ 50,00

O salário a receber do funcionário é igual ao salário líquido mais a gratificação.*/

#include <stdio.h>
int main(){
    float sal_min, sal_mes, sal_bruto, horas_trab, dependente,valor_dependente, horas_extra, valor_hora_trab;
    printf("\nDigite o valor do salario minimo: \n");
    scanf("%f", &sal_min);
    printf("\nDigite as horas trabalhadas: \n");
    scanf("%f", &horas_trab);
    printf("\nDigite quantos dependentes: \n");
    scanf("%f", &dependente);
    printf("Digite o numero de horas extras: \n");
    scanf("%f", &horas_extra);

    valor_hora_trab = sal_min / (1/5);
    sal_mes = horas_trab * valor_hora_trab;
    valor_dependente = dependente + 32; 
    horas_extra = valor_hora_trab + 0.5;
    sal_bruto = sal_mes + valor_dependente + horas_extra;





}


