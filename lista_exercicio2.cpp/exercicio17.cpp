/* 17. Um trabalhador recebeu seu salário e o depositou em sua conta bancária.
 Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. 
 Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo 
 inicial da conta está zerado.*/

#include<stdio.h>
int main(){
    float salario, saldoAtual, cpmf = 0.38;
    printf("Coloque o valor do salario: \n");
    scanf("%f",&salario);

    cpmf = 2 * 0.38;
    saldoAtual = salario - salario / 100 * cpmf; 

    printf("%.2f", saldoAtual);
    
    getchar();
    return 0;
}