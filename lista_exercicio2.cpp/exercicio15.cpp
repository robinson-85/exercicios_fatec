/* 15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com
 o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. 
 Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro 
 do distribuidor e o percentual de impostos, calcule e mostre: 

a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo. */

#include<stdio.h>
int main(){
    float precoFabrica, lucro, imposto, preco_final;
    printf("\nDeclare o preco de fabrica: \n");
    scanf("%f", &precoFabrica);
    printf("\nDeclare o percentual de lucro: \n");
    scanf("%f",&lucro);

    lucro =  precoFabrica / 100 * lucro;

    printf("\nO lucro do distribuidor e: %.2f \n", lucro);
    
    printf("\nDeclare o valor do imposto: \n");
    scanf("%f", &imposto);

    imposto = precoFabrica / 100 * imposto;

    printf("\nO valor do imposto e: %.2f \n", imposto);
   
    preco_final = precoFabrica + lucro + imposto;

    printf("\nO preco final do veiculo e: %.2f \n", preco_final);

    getchar();
    return 0;
}