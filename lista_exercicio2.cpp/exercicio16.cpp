// 16. Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras:
// a) a hora trabalhada vale a metade do salário mínimo.
#include<stdio.h>
int main(){
    float horaTrabalhada, salMinimo, salReceber;
    printf("Digite horas trabalhadas: \n");
    scanf("%f",&horaTrabalhada);
    printf("Digite valor do salario minimo: \n");
    scanf("%f",&salMinimo);
    horaTrabalhada = horaTrabalhada * salMinimo / 2; 
    salReceber = horaTrabalhada * salMinimo;
    printf("%.2f", salReceber);
    getchar();
    return 0;

}

// b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
#include<stdio.h>
int main(){
    float salBruto, valor, horaTrabalhada, resultado;
    printf("Digite horas trabalhadas: \n");
    scanf("%f",&horaTrabalhada);
    printf("Defina o valor da hora: \n");
    scanf("%f",&valor);
    salBruto = horaTrabalhada * valor;
    printf("%.2f", salBruto);
    getchar();
    return 0;
}

// c) o imposto equivale a 3% do salário bruto.
#include<stdio.h>
int main(){
    float salBruto, imposto;
    printf("Digite o valor do salario bruto: \n");
    scanf("%f",&salBruto);
    imposto = salBruto / 100 * 3;
    printf("%.2f", imposto);
    getchar();
    return 0;

}

// d) o salário a receber equivale ao salário bruto menos o imposto.
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