/*8. Elaborar um algoritmo que efetue a apresentação do valor da conversão em real
(R$) de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação
do dólar e também a quantidade de dólares disponíveis com o usuário.*/

#include <stdio.h>
int main(){
    float real, dolares, cot;
    printf("Digite quantos dolares: \n");
    scanf("%f", &dolares);
    printf("Digite a cotacao: \n");
    scanf("%f", &cot);
    real =  dolares * cot;
    printf("Valor em reais: %.2f", (dolares*cot));
    getchar();
    return 0;

}