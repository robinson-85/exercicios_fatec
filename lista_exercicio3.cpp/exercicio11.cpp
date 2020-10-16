/* 11. Faça um algoritmo que receba o preço de custo de um produto e mostre o valor
de venda. Sabe-se que o preço de custo receberá um acréscimo de acordo com um
percentual informado pelo usuário.*/

#include <stdio.h>
int main(){
    float precoCusto, precoVenda, acrescimo;
    printf("Preco do custo: \n");
    scanf("%f", &precoCusto);
    printf("Digite o valor do acrescimo: \n");
    scanf("%f", &acrescimo);

    precoVenda = precoCusto + acrescimo;

    printf("Preco de venda: %.2f \n", precoVenda);
    
    getchar();
    return 0;
    
}
