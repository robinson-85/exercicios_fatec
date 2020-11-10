/* 5. Faça um programa que receba três números obrigatoriamente em ordem crescente
e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números
em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    int n1,n2,n3,n4;

    printf("N�meros em ordem decresente \n \n");
    printf("Digite tr�s num�ros em ordem CRESENTE. \n");

    printf("    Digite um n�mero: ");
        scanf("%d",&n1); // Menor numero
    printf("    Digite um n�mero: ");
        scanf("%d",&n2);
    printf("    Digite um n�mero: ");
        scanf("%d",&n3); //Maior numero

    printf(" \n");
    printf("Digite um n�mero fora da ordem: ");
        scanf("%d",&n4);
    printf("\n\n");

    //Condi�oes
    if ( n4 > n3){
        printf("A ordem decresente dos n�meros �: %d,%d,%d,%d.",n4,n3,n2,n1);
    }
    else if  (n4 > n2){
        printf(" ordem decresente dos n�meros �: %d,%d,%d,%d.",n3,n2,n4,n1);
    }
    else if  (n4 > n1){
        printf(" ordem decresente dos n�meros �: %d,%d,%d,%d.",n3,n4,n2,n1);
    }
     else if  (n4 < n1){
        printf(" ordem decresente dos n�meros �: %d,%d,%d,%d.",n4,n3,n2,n1);
    }

}
