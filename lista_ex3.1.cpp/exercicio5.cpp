/* 5. Faça um programa que receba três números obrigatoriamente em ordem crescente
e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números
em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.*/

#include <stdio.h>
#include <locale.h> 

int main()
{
    setlocale(LC_ALL,"portuguese"); 
    int n1,n2,n3,n4;

    printf("Números em ordem decresente \n \n");
    printf("Digite três números em ordem crescente. \n");
    printf("Digite um número: ");
    scanf("%d",&n1); // Menor numero
    printf("Digite um n�mero: ");
    scanf("%d",&n2);
    printf("Digite um número: ");
    scanf("%d",&n3); //Maior numero

    printf(" \n");
    printf("Digite um número fora da ordem: ");
    scanf("%d",&n4);
    printf("\n\n");

    //Condições
    if ( n4 > n3){
        printf("A ordem decresente dos números é: %d,%d,%d,%d. \n",n4,n3,n2,n1);
    }
    else if  (n4 > n2){
        printf("A ordem decresente dos números é: %d,%d,%d,%d. \n",n3,n2,n4,n1);
    }
    else if  (n4 > n1){
        printf("A ordem decresente dos números é: %d,%d,%d,%d. \n",n3,n4,n2,n1);
    }
     else if  (n4 < n1){
        printf("A ordem decresente dos números é: %d,%d,%d,%d. \n",n4,n3,n2,n1);
    }

    getchar();
    return 0;

}
