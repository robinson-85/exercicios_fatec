/* 17. Um trabalhador recebeu seu salário e o depositou em sua conta bancária.
 Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. 
 Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo 
 inicial da conta está zerado.*/

#include<stdio.h>

int main(){
    float salario, saldoAtual, cpmf;
    printf("Coloque o valor do salario: \n");
    scanf("%f",&salario);

    cpmf = (salario * 0.38/100) * 2;
    saldoAtual = salario - cpmf; 

    printf("\nSeu saldo atual e: %.2f \n", saldoAtual);
    
    getchar();
    return 0;
} 