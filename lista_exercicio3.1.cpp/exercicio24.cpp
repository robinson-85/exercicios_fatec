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
>= R$ 100,00                       Caro */

#include <stdio.h>
int main(){
    float preco, tipo, refrigeracao,


    getchar();
    return 0;
}
