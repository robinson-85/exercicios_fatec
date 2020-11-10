/* 16. Um supermercado deseja reajustar os preços de seus produtos usando o seguinte
critério: o produto poderá ter seu preço aumentado ou diminuído. Para o preço ser
alterado, o produto deve preencher pelo menos um dos requisitos a seguir:

VENDA MÉDIA MENSAL      PREÇO ATUAL         % DE AUMENTO    % DE DIMINUIÇÃO
    <500                <R$ 30,00                 10             ------
    >= 500 e < 1200     R$ 30.00 e R$80.00        15             ------
    >= 1200             >= R$80.00             -------             20


Faça um programa que receba o preço atual e a venda média mensal do produto,
calcule e mostre o novo preço. */

#include <stdio.h>

int main(){
    float venda_media, preco_atual, novo_preco, diminuicao;
    printf("Declare a venda media mensal: \n");
    scanf("%f", &venda_media);
    printf("Declare o preco atual do produto: \n");
    scanf("%f", &preco_atual);

    if(venda_media<500 || preco_atual<30)
    {   
        printf("Será aumentado 10%% no preço atual. \n");
        novo_preco = preco_atual * 1.10;
        printf("O preço reajustado será de %.2f reais", preco_atual);
        printf("\n\n");
    }
    else if((venda_media>=500 && venda_media<1200) || (preco_atual<30 && preco_atual>80))
    {
        printf("Será aumentado 15%% no preço atual. \n");
        preco_atual = preco_atual * 1.15;
        printf("O preço reajustado será de %.2f reais",preco_atual);
        printf("\n\n");
    }
    else{
        printf("Será diminuido em 20%% no preço atual. \n");
        diminuicao = preco_atual * 0.2;
        preco_atual = preco_atual - diminuicao;
        printf("O preço reajustado será de %.2f reais",preco_atual);
        printf("\n\n");
    }
    
    getchar();
    return 0;
}