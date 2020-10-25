/* 15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com
 o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. 
 Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro 
 do distribuidor e o percentual de impostos, calcule e mostre: 

a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo. */

#include<stdio.h>
int main(){
    float precoFabrica, lucro, imposto, resultado;
    printf("\nPreco de fabrica: \n");
    scanf("%f", &precoFabrica);
    printf("\nPercentual de lucro: \n");
    scanf("%f",&lucro);

    lucro =  precoFabrica / 100 * lucro;

    printf("%.2f", lucro);
    
    printf("\nPercentual de impostos: \n");
    scanf("%f", &imposto);

    resultado = precoFabrica / 100 * imposto;

    printf("%.2f", lucro, resultado);
   
    imposto = precoFabrica / 100 * imposto;
    resultado = precoFabrica + lucro + imposto;

    printf("%.2f", resultado);

    getchar();
    return 0;
}