/* 19. Cada degrau de uma escada tem X de altura. Faça um programa que receba 
essa altura e a altura que o usuário deseja alcançar subindo a escada, calcule 
e mostre quantos degraus ele deverá subir para atingir seu objetivo, sem se 
preocupar com a altura do usuário. Todas as medidas fornecidas devem estar em metros. */

#include<stdio.h>
int main(){
    float degrau, escada, pessoa, resultado;
    printf("Qual a medida do degrau?: \n");
    scanf("%f",&degrau);
    printf("Quanto a pessoa quer subir? \n");
    scanf("%f",&pessoa);

    resultado = pessoa / degrau;

    printf("\nVoce devera subir essa quantidade de degraus: %.2f\n", resultado);
    
    getchar();
    return 0;

}