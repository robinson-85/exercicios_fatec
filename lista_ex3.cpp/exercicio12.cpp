/* 12. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o
custo de fábrica, e depois a percentagem do distribuidor sobre o resultado). Supondo
que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um
algoritmo que leia o custo de fábrica de um carro e informe o custo ao consumidor.*/

#include <stdio.h>
int main(){
    float c_fabrica, p_distr = 28, p_impostos = 0.45, custo_consumidor, valor_imposto, valor_distribuidor;
    printf("Informe o valor do custo de fabrica: R$");
    scanf("%f", &c_fabrica);

    valor_distribuidor = c_fabrica +(c_fabrica * p_distr / 100) ;
    valor_imposto = c_fabrica +(c_fabrica * p_impostos / 100) ;
    custo_consumidor = c_fabrica + valor_distribuidor + valor_imposto;

    printf("O custo ao consumidor e: R$ %.2f \n", custo_consumidor);

    getchar();
    return 0;
}