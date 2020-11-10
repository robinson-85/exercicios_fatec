/* 25. Faça um programa que receba a medida de um ângulo em graus. Calcule e mostre
o quadrante em que se localiza esse ângulo. Considere os quadrantes da trigonometria e, 
para ângulos maiores que 360o ou menores que −360o, reduzi-los,mostrando também o número
de voltas e o sentido da volta (horário ou anti-horário).*/

#include <stdio.h>
#include <math.h>

int main()
{
    float angulo;
    int voltas,resto;

    printf("Digite o valor do ângulo(em graus) e aperte Enter: \n");
    scanf("%f",&angulo);
    
    if(angulo > 360 || angulo < -360){
        voltas = angulo / 360;
        resto = angulo / 360;
    }
    else {
        voltas = 0;
    }
    if(angulo == 0 || angulo == 180 || angulo == 270 || angulo == 360 || angulo == -90 || angulo == -180 || angulo == -270 || angulo == -360){
        printf("Esta sobre um desse eixos:\n");
    }

    if(angulo > 0 && angulo < 90 || angulo < -270 && angulo > -360){
        printf("Primeiro Quadrante\n");

    } else if(angulo > 90 && angulo < 180 || angulo < -180 && angulo > -270){
        printf("Segundo Quadrante\n");

    } else if(angulo > 180 && angulo < 270 || angulo < -90 && angulo > -180){
        printf("Terceiro Quadrante\n");

    } else if(angulo > 270 && angulo < 360 || angulo < 0 && angulo > -90){
        printf("Quarto Quadrante\n");
    }
    printf("Foram dadas %d voltas no sentido \n",voltas);

    if(angulo < 0){
        printf("horário \n");

    } else if(angulo > 0){
        printf("anti-horário \n");

    } else {
        printf("Não foram dadas voltas \n");
    }

    getchar();
    return 0;
}
