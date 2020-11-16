/* 10. Faça um programa que determine a data cronologicamente maior entre duas datas
fornecidas pelo usuário. Cada data deve ser composta por três valores inteiros, em
que o primeiro representa o dia, o segundo, o mês e o terceiro, o ano.*/

#include <stdio.h>

int main(){
    int maior, menor, dia1, dia2, mes1, mes2, ano1, ano2;
    printf("Declare o dia: \n");
    scanf("%d", &dia1);
    printf("Declare um mês: \n");
    scanf("%d", &mes1);
    printf("Declare um ano: \n");
    scanf("%d", &ano1);
    printf("Declare o dia: \n");
    scanf("%d", &dia2);
    printf("Declare um mes: \n");
    scanf("%d", &mes2);
    printf("Declare um ano: \n");
    scanf("%d", &ano2);
    
    printf("A primeira data é: %d/%d/%d \n", dia1, mes1, ano1);
    printf("A segunda data é: %d/%d/%d \n", dia2, mes2, ano2);
    
    if(ano1>ano2){
    printf("A maior data é: %d/%d/%d \n", dia1, mes1, ano1);
    }
    else if(ano2>ano1){
    printf("A maior data é: %d/%d/%d \n", dia2, mes2, ano2);
    }
    else if(mes1>mes2){
    printf("A maior data é: %d/%d/%d \n", dia1, mes1, ano1);
    }
    else if(mes2>mes1){
    printf("A maior data é: %d/%d/%d \n", dia2, mes2, ano2);
    }
    else if(dia1>dia2){
    printf("A maior data é: %d/%d/%d \n", dia1, mes1, ano1);
    }
    else if(dia2>dia1){
    printf("A maior data é: %d/%d/%d \n", dia2, mes2, ano2);
    }
    else{
        printf("As datas são iguais! \n");
    }

    getchar();
    return 0;
}

