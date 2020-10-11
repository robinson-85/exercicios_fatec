// 15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
// a) o valor correspondente ao lucro do distribuidor;
#include<stdio.h>
int main(){
    float precoFabrica, lucro, imposto;
    printf("Preco de fabrica: \n");
    scanf("%f", &precoFabrica);
    printf("Percentual de lucro: \n");
    scanf("%f",&lucro);
    lucro =  precoFabrica / 100 * lucro;
    printf("%.2f", lucro);
    getchar();
    return 0;
}

// b) o valor correspondente aos impostos;
#include<stdio.h>
int main(){
    float precoFabrica, imposto, resultado;
    printf("Preco de fabrica: \n");
    scanf("%f", &precoFabrica);
    printf("Percentual de impostos: \n");
    scanf("%f", &imposto);
    resultado = precoFabrica / 100 * imposto;
    printf("%.2f", resultado);
    getchar();
    return 0;
}


// c) o preço final do veículo.
#include<stdio.h>
int main(){
    float precoFabrica, lucro, imposto, resultado;
    printf("Preco de fabrica: \n");
    scanf("%f", &precoFabrica);
    printf("Percentual de lucro: \n");
    scanf("%f", &lucro);
    printf("Percentual de impostos: \n");
    scanf("%f", &imposto);
    lucro =  precoFabrica / 100 * lucro;
    imposto = precoFabrica / 100 * imposto;
    resultado = precoFabrica + lucro + imposto;
    printf("%.2f", resultado);
    getchar();
    return 0;
}