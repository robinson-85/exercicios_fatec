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

 Salário líquido                    Mensagem
Menor que R$ 350,00               Mal remunerado 
Entre R$ 350,00 e R$ 600,00         Normal
Maior que R$ 600,00               Bem remunerado     */

#include <stdio.h>
 

int main(){
    float sal_minimo, M, V, N, O, G, turno_trabalho, categoria, horas_trabalhadas, coeficiente_sal, sal_bruto, imposto, gratificacao, auxilio_alimentacao, sal_liquido;
    printf("Digite o valor do salario minimo: \n");
    scanf("%f", &sal_minimo);
    printf("Declare seu turno de trabalho: \nM — matutino, \nV — vespertino, \nN — noturno \n");
    scanf("%f", &turno_trabalho);
    printf("Declare a sua categoria: \nO — operario; \nG — gerente \n");
    scanf("%f", &categoria);
    scanf("%f", &O);
    scanf("%f", &G);
    printf("Declare o numero de horas trabalhadas durante o mes: \n");
    scanf("%f", &horas_trabalhadas);

    // coeficiente do salário e sobre o turno.
   
    if(turno_trabalho == M){
	    coeficiente_sal = sal_minimo + (10/100);
    }
    else if(turno_trabalho == V){
	    coeficiente_sal = sal_minimo + (15/100);
    }
    else if(turno_trabalho == N){
	    coeficiente_sal = sal_minimo + (12/100);
    }

    printf("O coeficiente do salário é: R$ %.2f \n", coeficiente_sal);

    sal_bruto = horas_trabalhadas * coeficiente_sal;

    printf("O valor do salario bruto e: R$ %.2f\n", sal_bruto);

    // imposto sobre o salário e a categoria.
    
    if(categoria == O && sal_bruto >=300){
	    imposto = sal_bruto - (5/100);
    }
    else if(categoria == O && sal_bruto <300){
	    imposto = sal_bruto - (3/100);
    }
    else if(categoria == G && sal_bruto >=400){
	    imposto = sal_bruto - (6/100);
    }
    else if(categoria == G && sal_bruto <400){
	    imposto = sal_bruto - (4/100);
    }
    
    printf("O imposto sobre o salário bruto será: R$ %.2f \n", imposto);

    // gratificação

    if(turno_trabalho == N && horas_trabalhadas>80){
	    gratificacao = sal_bruto + 50;
    }
    else{
        gratificacao = sal_bruto + 30;
    }
    printf("O valor de sua gratificacao sera: R$ %.2f \n", gratificacao);

    // auxílio-alimentação
    
    if(categoria == O && coeficiente_sal<=25){
        auxilio_alimentacao =  sal_bruto/3;
    }
    else{
        auxilio_alimentacao =  sal_bruto/2;
    }
   
    printf("O valor do seu auxilio alimentacao sera: R$ %.2f \n", auxilio_alimentacao);
    
    // salário líquido

    sal_liquido = sal_bruto - imposto + gratificacao + auxilio_alimentacao; 
    
    printf("O valor do seu salario liquido e:R$ %.2f \n", sal_liquido);

    // Finalização.

    if(sal_liquido<350){
        printf("Mal remunerado \n");
    }
    else if(sal_liquido>=350 && sal_liquido<=600){
        printf("Normal \n");
    }
    else{
        printf("Bem remunerado \n");
    }

    getchar();
    return 0;
}
