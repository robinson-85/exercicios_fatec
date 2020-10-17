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
    float codigoProduto, pesoProduto, codigoOrigem, precoTotal, valorImposto = 0, valorTotal;
    printf("\nDigite o codigo do produto: \n");
    scanf("%f", &codigoProduto);
    printf("\nDigite o peso do produto em kg: \n");
    scanf("%f", &pesoProduto);
    printf("\nDigite o codigo do pais: \n");
    scanf("%f", &codigoOrigem);


    if(codigoProduto >=1  && codigoProduto <=10){
        if(codigoOrigem >=1 && codigoOrigem <= 3){
            pesoProduto = pesoProduto * 1000;
        }
            
        if(codigoProduto >= 1 && codigoProduto <=4){
            precoTotal = pesoProduto * 10;
        }
            
        if(codigoProduto >= 5 && codigoProduto <= 7){
            precoTotal = pesoProduto * 25;
        }
            
        if(codigoProduto >= 8 && codigoProduto <= 10){
            precoTotal = pesoProduto * 35;
        }
            
        if(codigoOrigem == 2){
            valorImposto = precoTotal / 100 * 15; 
        }
            
        if(codigoOrigem == 3){
            valorImposto = precoTotal /100 * 25; 
        }
    }

    valorTotal = precoTotal + valorImposto;

    printf("\nO valor total do produto e: %.2f \n", valorTotal);

    getchar();
    return 0;

}