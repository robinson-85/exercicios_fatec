/* 13. Faça um programa que apresente o menu a seguir, permita ao usuário escolher
a opção desejada, receba os dados necessários para executar a operação e mostre
o resultado. Verifique a possibilidade de opção inválida e não se preocupe com
restrições, como salário negativo.
Menu de opções:
1. Imposto
2. Novo salário
3. Classificação
Digite a opção desejada.

Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do
imposto usando as regras a seguir.


    SALÁRIO                                        PERCENTUAL DO IMPOSTO
Menor que R$ 500,00                                         5% 
De R$ 500,00(inclusive) e R$ 850,00(inclusive)              10%
Acima de R$ 850,00                                          15%


Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo 


    SALÁRIO                                               AUMENTO
Menor que R$ 1500,00                                     R$ 25,00 
De R$ 750,00(inclusive) a R$ 1500,00(inclusive)          R$ 50,00
De R$ 450,00(inclusive) a R$ 750,0                       R$ 75,00
Melhor que R$ 450,00                                     R$ 100,00


Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando
a tabela a seguir.


    SALÁRIO                                             AUMENTO
Até R$ 700,00                                        Mal remunerado 
Maiores que R$ 700,00                                Bem remunerado   */

#include <stdio.h>

int main(){
    float salario, valor_imposto, resposta, novo_salario;
    printf("Digite as opcoes: \n 1. Imposto \n 2. Novo salario \n 3. Classificacao \n");
    scanf("%f", &resposta);

    if(resposta == 1){
        printf("Digite o seu salario: \n");
        scanf("%f", &salario);

        if(salario <500){
            valor_imposto = salario /100 * 5;
        }
        else if(salario>=500 && salario <=850){
            valor_imposto = salario /100 * 10;
        }
        else{
            valor_imposto = salario /100 * 15;
        }
        printf("O valor do imposto sera: %.2f\n", valor_imposto);
    }

    if(resposta == 2){
        printf("Digite o seu salario: \n");
        scanf("%f", &salario);

        if(salario>1500){
            novo_salario = salario + 25;
        }
        else if(salario>=750 && salario<=1500){
            novo_salario = salario + 50;
        }
        else if(salario>=450 && salario<=750){
            novo_salario = salario + 75;
        }
        else{
            novo_salario = salario + 100;
        }

        printf("O valor do seu novo salario sera: %.2f \n", novo_salario);
    }


    if(resposta == 3){
        printf("Digite o seu salario: \n");
        scanf("%f", &salario);

        if(salario<=700){
            printf("A sua classificacao e: Mal remunerado. \n");
        }
        else{
            printf("A sua classificacao e: Bem remunerado. \n");
        } 
    }

    getchar();
    return 0;
}