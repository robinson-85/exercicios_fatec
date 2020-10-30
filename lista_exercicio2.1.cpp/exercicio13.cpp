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
#int main(){
    int opcao1, opção2, opção3;
    float imposto, novo_salario, classificação;
    printf("Escolha: 1 – Imposto, 2 - Novo salário ou 3 – Classificação.”)
Se opção1 == imposto
	imprima(“Imposto)
Se não se opção2 == novo_salario
	imprima(“Novo salario”)
Se não se opção3 == classificação
	imprima(Classificação”)

// Se opção 1
Imprima (“Digite o seu salario”)
Leia salario
Se salario < 500
	imposto = salario – (5/100);
Se não se salario >=500 && salario <850
	imposto = salario –  (10/100); 
se não
	imposto = salario – (15/100);

// Opção 2
Imprima(“Declare o seu salario”)
Leia salario
Se salario >1500
	sal_novo = salario + 25;
Se não se salario>=750 && salario<=1500
	sal_novo = salario + 50;
Se não se salario>=450 && salario<750
	sal_novo = salario + 75;
Se não se salario <450
	sal_novo = salario + 100; 
// Opção 3

printf(“Declare o seu salario:”)
Se salario <=700
	printf("Mal remunerado”);
se não
	Imprima(“Bem remunerado”)
}