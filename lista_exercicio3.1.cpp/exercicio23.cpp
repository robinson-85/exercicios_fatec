/* 23. Faça um programa que receba o valor do salário mínimo, o turno de trabalho (M
— matutino; V — vespertino; ou N — noturno), a categoria (O — operário; G —
gerente) e o número de horas trabalhadas no mês de um funcionário. Suponha a
digitação apenas de dados válidos e, quando houver digitação de letras, utilize
maiúsculas. Calcule e mostre:
■ O coeficiente do salário, de acordo com a tabela a seguir. 

Turno de trabalho                       Valor do coeficiente 
M - matutino                            10% do salário mínimo 
V - Vespertino                          15% do salário mínimo
N - Noturno                             12% do salário mínimo

■ O valor do salário bruto, ou seja, o número de horas trabalhadas multiplicado pelo
valor do coeficiente do salário.
■ O imposto, de acordo com a tabela a seguir.

Categoria                 Salário Bruto          Imposto sobre o salário bruto 
O - Operário              >= R$ 300,00                       5% 
O - Operário               < R$ 300,00                       3%
G - Gerente               >= R$ 400,00                       6%
G - Gerente                < R$ 400,00                       4%

■ A gratificação, de acordo com as regras a seguir.
Se o funcionário preencher todos os requisitos a seguir, sua gratificação será de
R$ 50,00; caso contrário, será de R$ 30,00. Os requisitos são:
Turno: Noturno
Número de horas trabalhadas: Superior a 80 horas
■ O auxílio alimentação, de acordo com as seguintes regras.
Se o funcionário preencher algum dos requisitos a seguir, seu auxílio alimentação será
de um terço do seu salário bruto; caso contrário, será de metade do seu salário bruto.
Os requisitos são:
Categoria: Operário
Coeficiente do salário: < = 25
■ O salário líquido, ou seja, salário bruto menos imposto mais gratificação mais auxílio
alimentação.
■ A classificação, de acordo com a tabela a seguir:

 Salário líquido                   Mensagem
Menor que R$ 350,00             Mal remunerado 
Entre R$ 350,00 e R$ 600,00       Normal
Maior que R$ 600,00             Bem remunerado

*/

#include <stdio.h>
int main(){
    float sal_min, turno, categoria;
    printf("\nDigite o valor do salario minimo: \n");
    scanf("%f", &sal_min);
    printf("\nDigite o turno de trabalho: \n");
    scanf("%f", &turno);









    getchar ();
    return 0;
}