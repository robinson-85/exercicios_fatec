/* 8.Faça um programa que receba o valor de um depósito e o valor da taxa 
de juros, calcule e mostre o valor do rendimento e o valor total depois 
do rendimento.*/

#include <stdio.h>

int main (){
    float valor_deposito, valor_juros, valor_rendimento, resultado;
    printf("Escreva o valor do depósito: R$ \n");
    scanf("%f", &valor_deposito);
    printf("Coloque o valor da taxa de juros: \n");
    scanf("%f", &valor_juros);
    
    valor_rendimento = valor_deposito * (valor_juros / 100);
    printf("Rendimento:R$ %.2f \n", valor_rendimento);
    
    resultado = valor_deposito + valor_rendimento;
    printf("Valor a receber: R$ %.2f \n", resultado);
    
    getchar();
    return 0;
}