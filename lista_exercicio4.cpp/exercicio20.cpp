/* 20. Faça um programa que receba:
■ O código de um produto comprado, supondo que a digitação do código do produto
seja sempre válida, isto é, um número inteiro entre 1 e 10.
■ O peso do produto em quilos.
■ O código do país de origem, supondo que a digitação do código seja sempre válida,
isto é, um número inteiro entre 1 e 3.

Tabelas:

Código do País           Imposto        Código do         Preço por grama
 de origem                               produto
    1                      0%             1 a 4                10       
    2                      15%            5 a 7                25
    3                      25%            8 a 10               35


Calcule e mostre:
■ o peso do produto convertido em gramas;
■ o preço total do produto comprado;
■ o valor do imposto, sabendo que ele é cobrado sobre o preço total do produto
comprado e depende do país de origem;
■ o valor total, preço total do produto mais imposto.*/

#include <stdio.h>
int main(){
    int codigoProduto, pesoProduto, codigoOrigem, convertido, precoTotal, valorImposto, valorTotal, imposto;
    printf("\nDigite o codigo do produto: \n");
    scanf("%d", &codigoProduto);
    printf("\nDigite o peso do produto em kg: \n");
    scanf("%d", &pesoProduto);
    printf("\nDigite o codigo do pais: \n");
    scanf("%d", &codigoOrigem);

     convertido = pesoProduto / 1000;
     precoTotal = valorImposto + codigoOrigem;
     valorTotal = precoTotal + imposto;

    printf("\nO valor total do produto e: %d \n", valorTotal);

    getchar();
    return 0;


}