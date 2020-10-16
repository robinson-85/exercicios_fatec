/* 10. A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações
sem juros. Faça um algoritmo que receba um valor de uma compra e mostre o valor das 
prestações.*/

#include <stdio.h>
int main(){
    float valorProduto, prestacao, valorPrestacao = 5;
    printf("Valor do produto: \n");
    scanf("%f", &valorProduto);

    prestacao = valorProduto / valorPrestacao;

    printf("O valor da prestacao mensal e: %.2f \n", prestacao);
    
    getchar();
    return 0;
    
}