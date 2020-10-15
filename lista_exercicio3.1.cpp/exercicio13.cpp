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
imposto usando as regras a seguir 

Salario                                        Percentual de imposto
Menor que R$ 500,00                                      5%
De R$ 500,00(inclusive) a R$ 850,00                      10%
Acima de R$ 850,00                                       15%


Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo
salário, usando as regras a seguir.


    Salario                                               Aumento
Maior que R$ 1500,00                                     R$ 25,00
De R$ 750,00(inclusive) a R$ 1500,00(inclusive)          R$ 50,00
Acima de R$ 450,00 (inclusive) a R$ 750,00               R$ 75,00
Menor que R$ 450,00                                      R$ 100,00                


Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando
a tabela a seguir.

Salario                                     Classificação
Até R$ 700,00                               Mal Remunerado
Maiores que R$ 700,00                       Bem Remunerado

*/
#include <stdio.h>
int main(){
    float imposto, novo_sal, classificacao;
    puts("\nImposto \n")

    getchar();
    return 0;
}