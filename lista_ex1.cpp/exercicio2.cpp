// 2. Faça um programa que receba três notas, calcule e mostre a média aritmética.

#include <stdio.h>

int main(){

    int n1, n2, n3, resultado;
        printf("Coloque as notas\n");
        scanf("%d",&n1);// input
        scanf("%d",&n2);
        scanf("%d",&n3);


        resultado = (n1 + n2 + n3) / 3; // processing
        
        printf("Sua nota final e: %d", resultado); // output
        
        getchar();
        return 0;
}

