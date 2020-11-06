#include<stdio.h>
int main(){
    float salBruto, imposto, salReceber;
    printf("Digite o valor do salario bruto: \n");
    scanf("%f",&salBruto);
    imposto = salBruto / 100 * 3;
    salReceber = salBruto - imposto;
    printf("%.2f", salReceber);
    getchar();
    return 0;

}