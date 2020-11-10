/* 21. Faça um programa que receba:
■ o código do estado de origem da carga de um caminhão, supondo que a digitação
do código do estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
■ o peso da carga do caminhão em toneladas;
■ o código da carga, supondo que a digitação do código seja sempre válida, isto é, um
número inteiro entre 10 e 40.
Tabelas: 

Código do Estado         Imposto         Código da Carga      Preço por quilo
        1                   35%             10 a 20               100
        2                   25%             21 a 30               250
        3                   15%             31 a 40               340
        4                    5%             
        5                 Isento

Calcule e mostre:
■ o peso da carga do caminhão convertido em quilos;
■ o preço da carga do caminhão;
■ o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do
caminhão e depende do estado de origem;
■ o valor total transportado pelo caminhão, preço da carga mais imposto. */

#include <stdio.h>
int main(){
        float cod_estado,resposta, peso, preco_carga, cod_carga, imposto, valor_imposto, valor_total;
        printf("\nDigite o codigo do Estado de origem:\n1 \n2 \n3 \n4 \n5 \n");
        scanf("%f", &cod_estado);
        printf("\nDigite o peso da carga em toneladas: \n");
        scanf("%f", &peso);
        printf("\nDigite o codigo da carga com um numero inteiro entre 10 a 40: \n");
        scanf("%f",&cod_carga);
        peso = peso * 1000;
        printf("\nO peso da carga convertido em kg e: %.2f\n", peso);
        preco_carga =  



        getchar();
        return 0;
}