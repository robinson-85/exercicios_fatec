/* 24. Faça um programa que receba o preço, o tipo (A — alimentação; L — limpeza; e
V — vestuário) e a refrigeração (S — produto que necessita de refrigeração; e N —
produto que não necessita de refrigeração) de um produto. Suponha que haverá
apenas a digitação de dados válidos e, quando houver digitação de letras, utilize
maiúsculas. Calcule e mostre: 
■ O valor adicional, de acordo com a tabela a seguir:

Refrigeração       Tipo            Preço              Valor adicional
N                   A            <R$ 15,00             R$ 2,00 
                                 >=R$ 15,00             R$ 5,00

N                   L           <R$ 10,00             R$ 1,50
                                >=R$ 10,00            R$ 2,50

N                   v           <R$ 30,00             R$ 3,00
                                >=R$ 30,00            R$ 2,50   


S                   A                                 R$ 8,00         
S                   L                                 R$ 0,00  
S                   V                                 R$ 0,00  

O valor do imposto, de acordo com a regra a seguir.

    Preço                Percentual sobre o preço
< R$ 25,00 R$                       5%
> = R$ 25,00                        8%

■ O preço de custo, ou seja, preço mais imposto.
■ O desconto, de acordo com a regra a seguir.
O produto que não preencher nenhum dos requisitos a seguir terá desconto de 3%,
caso contrário, 0 (zero).
Os requisitos são:
Tipo: A
Refrigeração: S
■ O novo preço, ou seja, preço de custo mais adicional menos desconto.
■ A classificação, de acordo com a regra a seguir.

Novo preço                      Classificação
< = R$ 50,00                      Barato
Entre R$ 50,00 e R$ 100,00        Normal
>= R$ 100,00                       Caro                                */

#include <stdio.h>

int main(){
    float  preco, valor_adicional, novo_preco, imposto, preco_desconto, preco_de_custo;
    char refrigeracao, tipo;
    printf("\nDeclare o preco: R$");
    scanf("%f", &preco);
    printf("\nDeclare o tipo: A - alimentacao, L - limpeza ou V - vestuario: \n");
    scanf("%s", &tipo);
    printf("\nNecessita de refrigeracao? Sim (S) ou Nao (N): \n");
    scanf("%s", &refrigeracao);

    if(refrigeracao == 'N' && tipo == 'A' && preco < 15){
	    valor_adicional = preco + 2;
    }
    else if (refrigeracao == 'N' && tipo == 'A' && preco >= 15){
	    valor_adicional = preco + 5;
    }
    else if (refrigeracao == 'N' && tipo == 'L' && preco < 10){
	    valor_adicional = preco + 1.50;
    }
    else if (refrigeracao == 'N' && tipo == 'L' && preco >= 10){
	    valor_adicional = preco + 2.50;
    }
    else if (refrigeracao == 'N' && tipo == 'V' && preco < 30){
	    valor_adicional = preco + 3.00;
    }
    else if (refrigeracao == 'N' && tipo == 'V' && preco >= 30){
	    valor_adicional = preco + 2.50;
    }
    else if (refrigeracao == 'S' && tipo == 'A'){
	    valor_adicional = preco + 8;
    }
    else if (refrigeracao == 'S' && tipo == 'L' || tipo == 'V'){       // ou
	    printf("Sem valor adicional \n");
    }

    printf("O preço do produto com o valor adicional é: R$ %.2f \n", valor_adicional);
    
    if(preco < 25){ 
	    imposto = preco * 0.05;
    }
    else{
	    imposto = preco * 0.08;
    }

    printf("O valor do imposto é: R$ %.2f \n", imposto);

    preco_de_custo = preco + imposto;
    printf("O preço de custo é: R$ %.2f \n", preco_de_custo); 

    if(tipo == 'A' && refrigeracao == 'S'){
	    preco_desconto = 0.03;
    }
    else{
        printf("\nSem desconto \n");
    }

    novo_preco = preco_de_custo + valor_adicional - preco_desconto;
    printf("\nO valor final sera: R$%.2f \n", novo_preco);

    if(novo_preco <= 50){ 
	    printf("\nBarato \n");
    }
    else if(novo_preco > 50 && novo_preco < 100){
        printf("\nNormal \n");
    }
	else{
        printf("\nCaro \n");
    }
    getchar();
    return 0;
}








