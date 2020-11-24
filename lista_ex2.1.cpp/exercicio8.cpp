/* 8. Faça um programa que mostre o menu de opções a seguir, receba a opção do
usuário e os dados necessários para executar cada operação.
Menu de opções:
1. Somar dois números.
2. Raiz quadrada de um número.
Digite a opção desejada: */

#include <stdio.h>
#include<math.h>

int main(){
    float n1, n2, n, soma, raiz_quadrada, resposta;
    printf("Digite a opcao desejada: \n1. Somar dois numeros \n2. Raiz quadrada de um numero \n");
    scanf("%f", &resposta);

    if(resposta == 1){
	    printf("Digite dois numeros: \n");
        scanf("%f", &n1);
        scanf("%f", &n2); 
        soma = n1 + n2;
	    printf("A soma dos dois numeros e: %.2f\n", soma);
    }
    else if(resposta == 2){
        printf("Digite um numero para saber a sua raiz quadrada: \n");
        scanf("%f", &n);
	    raiz_quadrada = sqrt(n);  // raiz quadrada de um número
	    printf("A raiz quadrada do numero sera: %.2f \n", raiz_quadrada);
    }
    
    else{
	    printf("Opcao invalida \n");
    }

    getchar();
    return 0;
}


    

    



