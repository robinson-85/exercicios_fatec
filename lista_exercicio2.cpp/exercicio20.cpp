/* 20. Faça um programa que receba a medida do ângulo (em graus) formado por 
uma escada apoiada no chão e encostada na parede e a altura da parede onde 
está a ponta da escada. Calcule e mostre a medida dessa escada. Observação: 
as funções trigonométricas implementadas nas linguagens de programação trabalham 
com medidas de ângulos em radianos. */

#include <stdio.h>
int main(){
    float angulo,distancia,escada,radiano, altura;
    printf("CALCULO DA ALTURA DA PAREDE \n \n");
    printf("Digite a distancia: \n");
    scanf("%f",&distancia);
    printf("Digite o angulo em que a escada está apoiada: \n");
    scanf("%f",&angulo);

    radiano = angulo * (3.14 / 180);
    escada = altura/radiano;

    printf("\nA altura da escada e de %.2f metros \n", radiano);

    getchar();
    return 0;
}