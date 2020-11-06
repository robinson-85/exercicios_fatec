/* 18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, 
para os quais fornece a quantidade de ração em gramas. A quantidade diária de ração 
fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso do 
saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre 
quanto restará de ração no saco após cinco dias. */

#include <stdio.h>

int main(){
    float saco = 0,q_racao,quantidade,resto;
    printf("Calculo de racao \n \n");
    printf("Digite o peso do saco de racao em Kg: \n");
    scanf("%f",&saco);
    printf("Digite a quantidade de ração em gramas: \n");
    scanf("%f",&q_racao);

    saco = saco * 1000;
    quantidade = (q_racao * 5);
    resto = saco - quantidade;

    printf("\nApos 5 dias sobrara %.2f kg de racao \n \n",resto);

    getchar();
    return 0;
}