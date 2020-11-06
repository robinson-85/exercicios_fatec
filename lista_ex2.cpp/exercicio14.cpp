/* 14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, 
calcule e mostre: */

// a) a idade dessa pessoa;
// b) quantos anos ela terá em 2050.

#include <stdio.h>
int main(){
    int ano_nascimento, ano_atual, idade, idade_2050, diferenca_2050;
    printf("Digite o ano do seu nascimento: \n");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: \n");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;
    diferenca_2050= 2050 - ano_atual;
    idade_2050 = idade + diferenca_2050; 

    printf("A sua idade atual e: %d \n", idade);
    printf("A sua idade em 2050 sera: %d \n", idade_2050);
 
    getchar();
    return 0;

}









