/* 9. Faça um programa que mostre a data e a hora do sistema nos seguintes formatos:
DD/MM/AAAA – mês por extenso e hora:minuto. */

#include <stdio.h>

int main(){
    int dia, mes, ano, mes_por_extenso, inteira_hs;
    float horas, minutos;
    printf("Informe o dia da seguinte forma: DD \n");
    scanf("%d", &dia);
    printf("Informe o mês da seguinte forma: MM \n");
    scanf("%d", &mes);
    printf("Informe o ano da seguinte forma: AAAA \n");
    scanf("%d", &ano);
    printf("Informe a hora no formato: HORA,MINUTOS.\n");
    scanf("%f",&horas);

    printf("A data informada é: %d/%d/%d \n", dia, mes, ano);

    if(mes == 1){
	    printf("Janeiro \n");
    }
    else if(mes == 2){
	    printf("Fevereiro \n");
    }
    else if(mes == 3){
	    printf("Março \n");
    }
    else if(mes == 4){
	    printf("Abril \n");
    }
    else if(mes == 5){
	    printf("Maio \n");
    }
    else if(mes == 6){
	    printf("Junho \n");
    }
    else if(mes == 7){
	    printf("Julho \n");
    }
    if(mes == 8){
	    printf("Agosto \n");
    }
    else if(mes == 9){
	    printf("Setembro \n");
    }
    else if(mes == 10){
	    printf("Outubro \n");
    }
    else if(mes == 11){
	    printf("Novembro \n");
    }
    else if(mes == 12){
	    printf("Dezembro\n");
    }

    inteira_hs = (int)horas;
    minutos = (horas - inteira_hs)*100;

    printf("O horário informado é %.2d:%.0f.\n", inteira_hs, minutos);

    getchar();
    return 0;
}








