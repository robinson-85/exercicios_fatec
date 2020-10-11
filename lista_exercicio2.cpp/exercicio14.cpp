// 14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a) a idade dessa pessoa;
#include<stdio.h>
int main(){
    float anoNascimento, anoAtual, resultado = 0;
    printf("Digite seu ano de nascimento: \n");
    scanf("%f", &anoNascimento);
    printf("Digite o ano atual: \n");
    scanf("%f", &anoAtual);
    resultado = anoAtual - anoNascimento;
    printf("%.2f", "Essa pessoa e velha!\n", resultado);
    getchar();
    return 0; 
}

// b) quantos anos ela terá em 2050.

#include<stdio.h>
int main(){
    float idadeAtual, anoAtual, anoFuturo = 2050, idadeFutura, diferencaAno;
    printf("Digite a idade: \n");
    scanf("%f", &idadeAtual);
    printf("Digite o ano atual: \n");
    scanf("%f",&anoAtual);
    diferencaAno = anoFuturo - anoAtual;
    idadeFutura = diferencaAno + idadeAtual;
    printf("%.2f", idadeFutura );
    getchar();
    return 0; 

}