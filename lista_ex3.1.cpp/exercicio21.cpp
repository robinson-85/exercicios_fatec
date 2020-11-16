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
        float peso_tonelada, codigo_estado, codigo_carga, valor_total, imposto, peso_em_quilo, preco_carga, preco_quilo;
        printf("Digite o código do estado de origem (1 a 5): \n");
        scanf("%f", &codigo_estado);
        printf("Digite o peso da carga em toneladas: \n");
        scanf("%f", &peso_tonelada);
        printf("Digite o código da carga de origem (10 a 40): \n");
        scanf("%f", &codigo_carga);
        
        peso_em_quilo= peso_tonelada * 1000;
        printf("O peso em Kg da carga do caminhão são: %.2f Kg \n", peso_em_quilo);

        if(codigo_carga>=10 && codigo_carga<=20){
                preco_carga = peso_em_quilo * 100;
        }
        else if(codigo_carga>=21 && codigo_carga<=30){
                preco_carga = peso_em_quilo * 250;
        }
        else if(codigo_carga>=31 && codigo_carga<=40){
                preco_carga = peso_em_quilo * 340;
        }

        printf("O preço da carga do caminhão é: R$ %.2f \n", preco_carga);

        if(codigo_estado == '1'){
                imposto = preco_carga * 0.35;
        }
        else if(codigo_estado == '2'){
                imposto = preco_carga * 0.25;
        }
        else if(codigo_estado == '3'){
                imposto = preco_carga * 0.15;
        }
        else if(codigo_estado == '4'){
                imposto = preco_carga * 0.5;
        }
        else if(codigo_estado == '5'){
                printf("Isento \n");
        }

        printf("O valor do imposto é: R$ %.2f \n", imposto);

        valor_total = preco_carga + imposto;

        printf("O valor total da carga do caminhão é: R$%.2f \n", valor_total);

        getchar();
        return 0;
}