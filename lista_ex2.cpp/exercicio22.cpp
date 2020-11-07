/* 22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. 
Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts
consumida por uma residência. Calcule e mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%. */

#include <stdio.h>

int main(){
    float sal_minimo, consumo_quilowatts, valor_total, quilowatts, valor_pagar;
    printf("Declare o valor do salario mínimo: \n");
    scanf("%f",&sal_minimo);
    printf("Declare a quantidade de quilowatts consumida na residência: \n");
    scanf("%f",&consumo_quilowatts);
    
    quilowatts = sal_minimo/5;

    printf("O valor do quilowatt e: %.2f \n", quilowatts);

    valor_total = consumo_quilowatts * quilowatts;

    printf("O valor de quilowatts a ser pago por essa residencia e: %.2f \n", valor_total);
    
    valor_pagar = valor_total * 0.85;

    printf("O valor a ser pago com desconto de 15%: %.2f \n", valor_pagar);

    getchar();
    return 0;
}