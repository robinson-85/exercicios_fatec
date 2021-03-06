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
■ o valor total, preço total do produto mais imposto.                    */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é utilizada para definar o idioma do programa.

int main(){
    setlocale(LC_ALL,"Portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int cod_produto,cod_pais;
    float peso,gramas,preco,imposto;

    printf("Cálculo de imposto e valor de cada grama \n\n");

    printf("Digite o código do produto comprado (1 a 10): \n");
    scanf("%d",&cod_produto);
    printf("Digite o peso do produto(em KG): \n");
    scanf("%f",&peso);
    printf("Digite o codigo do país de origem (1 a 3): \n");
    scanf("%d",&cod_pais);

    if ((cod_pais == 1) && (cod_produto>=1 && cod_produto<=4)) {
        gramas = peso * 1000;
        preco = gramas / 10;
        
        printf("\n");
        printf("O peso %.2f em gramas é %.2fg \n",peso,gramas);
        printf("O preço total do produto é R$ %.2f \n",preco);
        printf("Não serão cobrados impostos. \n\n");
    }

    else if ((cod_pais == 2) && (cod_produto>=5 && cod_produto<=7)) {
        gramas = peso * 1000;
        preco = gramas / 25;
        imposto = preco * 0.15;
    
        printf("\n");
        printf("O peso %.2f em gramas é %.2 g \n",peso,gramas);
        printf("O preço toal do produto é R$ %.2f \n",preco);
        printf("Impostos: R$ %.2f \n\n");
    }

    else if ((cod_pais == 3) && (cod_produto>=8 && cod_produto<=10)) {
        gramas = peso * 1000;
        preco = gramas / 35;
        imposto = preco * 0.25;
        
        printf("\n");
        printf("O peso %.2f em gramas é %.2 g \n", peso, gramas);
        printf("O preço toal do produto é R$ %.2f \n", preco);
        printf("Impostos: R$ %.2f \n\n");
    }

    else {
        printf("\n\n");
        printf("Comando inválido");
    }

    getchar ();
    return 0;
}