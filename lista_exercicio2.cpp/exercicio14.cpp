/* 14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, 
calcule e mostre: */

// a) a idade dessa pessoa;
// b) quantos anos ela terá em 2050.

#include <stdio.h>
int main(){
    int ano_nascimento, ano_atual, idade_atual, idade_2050;
    printf("Digite o ano de nascimento? \t");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: \t");
    scanf("%d", &ano_atual);

    idade_atual = ano_atual - ano_nascimento;
    idade_2050 = 2050 - ano_nascimento; 

    printf("A sua idade atual e: %d \n", idade_atual);
    printf("A sua idade em 2050 sera: %d \n", idade_2050);
 

    getchar();
    return 0;

}






