// 6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar. 

#include <stdio.h>
int main(){
    int num;
    printf("\nDigite um numero inteiro: \n");
    scanf("%d",&num);
    
    if(num%2==0){
        printf("\nPar \n");
    }
    else {
    printf("\nÍmpar \n");
    }
    
    getchar();
    return 0;
}   