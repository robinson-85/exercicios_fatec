/* 14. Faça um programa que receba o salário inicial de um funcionário, calcule
e mostre o novo salário,acrescido de bonificação e de auxílio escola.
salário                           bonificação           salário           auxílio-escola
até R$ 500,00                     5% do salário         até R$ 600,00     R$ 150,00
entre R$ 500,00 e R$ 1.200,00     12% do salário        Acima de R$ 600   R$ 100,00
Acima de R$ 1.200,00              Sem bonificação */

#include <stdio.h>

int main(){
float salario, novo_sal, bonificacao, auxilio_escola;
printf("\nDigite o seu salario: \n");
scanf("%f", &sal_inicial);

if(salario >= 500){
    bonificacao = salario * 0.05;
    else(salario <= 1200)
        bonificacao = salario * 0.12;
    else(salario > 1200)
         salario = sem bonificacao;
}

if(salario <= 600){
    auxilio_escola = 150;
    else(salario > 600)
        auxilio_escola = 100;
novo_sal = salario + bonificacao + auxilio_escola;
}

printf("O seu salario total e: %.2f \n", novo_sal);
getchar();
return 0;

}
