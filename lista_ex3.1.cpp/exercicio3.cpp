// 3. Faça um programa que receba dois números e mostre o maior.

#include <stdio.h>

int main(){
    int n1, n2;
    printf("Descubra qual numero e maior! \n \n");
    printf("\nDigite um numero: \n");
    scanf("%d", &n1);
    printf("\nDigite outro numero: \n");
    scanf("%d", &n2);

    if(n1 < n2){
        printf("\n%d é o menor e %d o maior \n", n1, n2);
    }
    else if(n2 < n1){
        printf("\n%d é o menor e %d o maior \n",n2,n1);
    }
    else{
        printf("\nNumeros invalidos: Refazer a operacao! \n");
    }

    getchar();
    return 0;    
}
