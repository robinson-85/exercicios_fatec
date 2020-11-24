/*Escreva uma expressão para determinar se uma pessoa deve ou não pagar imposto. 
Considera que pagam imposto pessoas cujo salário é maior que R$ 1.200,00. */

#include<stdio.h>

int main(){
    float imposto, sal;
    printf("\nDigite o salario: R$");
    scanf("%f", &sal);

    if(sal > 1200){
        printf("\nPaga imposto \n");
    }
    else{
        printf("\nNao paga imposto \n");
    }

    getchar();
    return 0;
}
