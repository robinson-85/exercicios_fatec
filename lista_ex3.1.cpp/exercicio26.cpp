/* 5. Faça um programa que receba três números obrigatoriamente em ordem crescente
e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números
em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.*/

#include <stdio.h>
#include <locale.h> 

int main()
{
    setlocale(LC_ALL,"portuguese"); 
    int num1, num2, num3, num4;
    printf("Digite o primeiro número em ordem crescente: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    printf("Digite um número (fora de ordem): \n");
    scanf("%d",&num4);

    if(num4 > num3){
        printf("A ordem decrescente é: %d, %d, %d, %d \n", num4, num3, num2, num1);
    }
    else if(num4 > num2 && num4 < num3){
        printf("A ordem decrescente é: %d, %d, %d, %d \n", num3, num4, num2, num1);
    }
	else if(num4 > num1 && num4 < num2){
        printf("A ordem decrescente é: %d, %d, %d, %d \n", num3, num2, num4, num1);
    }
    else if(num4 < num1){
        printf("A ordem decrescente é: %d, %d, %d, %d \n", num3, num2, num1, num4);
    }

    getchar ();
    return 0;
}