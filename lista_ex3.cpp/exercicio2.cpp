/* 2. Faça um algoritmo que receba dois números e ao final mostre a soma, subtração,
multiplicação e a divisão dos números lidos.*/

#include <stdio.h>

int main(){
    float n1, n2, soma, sub, mult, div, resultado;
    printf("Digite um numero: \n");
    scanf("%f", &n1);
    printf("Digite outro numero: \n");
    scanf("%f", &n2);

    resultado = (soma = n1 + n2) + (sub = n1 -n2) + (mult = n1 * n2) + (sub = n1 / n2);

    printf("O resultado sera: %.2f \n", resultado);
    
    getchar();
    return 0;
}