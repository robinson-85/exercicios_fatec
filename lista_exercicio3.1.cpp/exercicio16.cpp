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
    float venda_media, preco_atual, aumento, diminuicao, novo_preco;
    printf("\nDigite o preco do produto \n");
    scanf("%f", &preco_atual);

    if(venda_media <500 && preco_atual <30){
        aumento = 0.1;
        if(venda_media >= 500 && venda_media < 1200 && preco_atual > 30 && preco_atual > 80){
            aumento = 0.15;
            if(venda_media >= 1200 && preco_atual >= 80){
                diminuicao = 0.2;
            }
        }
        
    }

    novo_preco = preco_atual + venda_media;

    printf("\nMostre o novo preco do produto: %.2f\n", novo_preco);

    getchar();
    return 0;

} // nao resolvido