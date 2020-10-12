/* Faça um programa que receba o valor de um depósito e o valor da taxa 
de juros, calcule e mostre o valor do rendimento e o valor total depois 
do rendimento.*/

#include <stdio.h>
int main (){
    float vd, vj, vr, resultado;
    printf("Escreva o valor do depósito: \n");
    scanf("%f", &vd);
    printf("Coloque o valor da taxa de juros: \n");
    scanf("%f", &vj);
    vr = vd * (vj / 100);
    printf("Rendimento:%.2f \n", vr);
    resultado = vd + vr;
    printf("Valor a receber:%.2f \n", resultado);
    getchar();
    return 0;

}