/* 16. Faça um programa que receba o número de horas trabalhadas e o valor do 
salário mínimo, calcule e mostre o salário a receber, seguindo estas regras: 

a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor 
da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto. */

#include<stdio.h>
int main(){
    float horaTrabalhada, salMinimo, salReceber, valorHoraTrabalhada, salBruto, imposto;
    printf("Digite horas trabalhadas: \n");
    scanf("%f",&horaTrabalhada);
    printf("Digite valor do salario minimo: \n");
    scanf("%f",&salMinimo);

    valorHoraTrabalhada = horaTrabalhada * (salMinimo / 2); 
    
    printf("\nEsse e o valor da hora trabalhada: %.2f \n", horaTrabalhada);
    
    salBruto = horaTrabalhada * valorHoraTrabalhada;

    printf("\nIsso corresponde ao seu salario bruto: %.2f \n", salBruto);
    
    imposto = salBruto * 0.03;

    printf("\nO valor do imposto e: %.2f \n", imposto);
    
    salReceber = salBruto - imposto;

    printf("\nO salario a receber e: %.2f \n", salReceber);
    
    getchar();
    return 0;
}