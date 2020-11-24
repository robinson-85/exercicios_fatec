/* 3.Faça um programa que receba três notas e seus respectivos pesos, calcule 
e mostre a média ponderada.*/

#include <stdio.h>

int main(){
    int n1, p1, n2, p2, n3, p3, somar, resultado;
        printf("Coloque todas as notas primeiro, e depois coloque os pesos \n");
        scanf("%d", &n1);// input
        scanf("%d", &n2);
        scanf("%d", &n3);
        scanf("%d", &p1);
        scanf("%d", &p2);
        scanf("%d", &p3);
        
        somar = (p1 + p2 + p3); // procesing
        
        resultado = (n1 * p1) + (n2 * p2) + (n3 * p3) / somar;
        
        printf("Se o resultado foi: %d", resultado); // output
        
        getchar();
        return 0;

}