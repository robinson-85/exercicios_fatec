/* 18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, 
para os quais fornece a quantidade de ração em gramas. A quantidade diária de ração 
fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso do 
saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre 
quanto restará de ração no saco após cinco dias. */

#include<stdio.h>
int main(){
    float gato1, gato2, racao, consumoGatoDiario, sacoRacao = 1000;
    printf("Quantidade de racao que come o gato1: \n");
    scanf("%f",&gato1);
    printf("Quantidade de racao que come o gato2: \n");
    scanf("%f",&gato2);
    consumoGatoDiario = gato1 + gato2;
    sacoRacao = sacoRacao - consumoGatoDiario * 5;
    printf("%.2f",sacoRacao);
    getchar();
    return 0; 
}