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
    float sal_min, sal_mes, sal_bruto, sal_liquido, horas_trab, dependente,valor_dependente, horas_extra, valor_hora_trab;
    printf("\nDigite o valor do salario minimo: \n");
    scanf("%f", &sal_min);
    printf("\nDigite as horas trabalhadas: \n");
    scanf("%f", &horas_trab);
    printf("\nDigite quantos dependentes: \n");
    scanf("%f", &dependente);
    printf("Digite o numero de horas extras: \n");
    scanf("%f", &horas_extra);

    valor_hora_trab = sal_min / 5;
    sal_mes = horas_trab * valor_hora_trab;
    dependente = dependente * 32;
    horas_extra = horas_extra * (valor_hora_trab + valor_hora_trab / 2);
    sal_bruto = sal_mes + dependente + horas_extra;
    sal_liquido = sal_bruto;

    if(sal_bruto >= 200 && sal_bruto<= 500){
        sal_liquido = sal_bruto - (sal_bruto / 10);
    }

    else{
        sal_liquido = sal_bruto - (sal_bruto / 5);
    }


    if(sal_liquido <= 350){
        sal_liquido = sal_liquido + 100;
    }

    else{
        sal_liquido = sal_liquido + 50; 
    }

    printf("\nO salario a receber sera: %.2f \n", sal_liquido);

    getchar();
    return 0;

}



