/* 11. Faça um programa que receba a hora do início de um jogo e a hora do término
(cada hora é composta por duas variáveis inteiras: hora e minuto). Calcule e mostre a
duração do jogo (horas e minutos), sabendo que o tempo máximo de duração do jogo
é de 24 horas e que ele pode começar em um dia e terminar no dia seguinte.*/

#include<stdio.h>

int main(){
    int hora_inicial, minuto_inicial, hora_final, minuto_final, hora_duracao, minuto_duracao;
    printf("Digite o horario inicial: \n");
    scanf("%d", &hora_inicial);
    printf("Digite o minuto inicial: \n");
    scanf("%d", &minuto_inicial);
    printf("Digite o horario final: \n");
    scanf("%d", &hora_final);
    printf("Digite o minuto final: \n");
    scanf("%d", &minuto_final);
    
    if(minuto_inicial > minuto_final){
        printf("Inicio \n");
        minuto_final = minuto_final + 60;
        hora_final = hora_final - 1;
    }

    if(hora_inicial > hora_final){
        hora_final = hora_final + 24;
        minuto_duracao = minuto_final - minuto_inicial;
        hora_duracao = hora_final - hora_inicial;
    }
   
    printf("O jogo durou %d hora", hora_duracao, "e minutos %d", minuto_duracao);
    
    getchar();
    return 0;
}