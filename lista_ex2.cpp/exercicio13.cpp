/* 13.Sabe-se que: pé = 12 polegadas; 1 jarda = 3 pés; 1 milha = 1,760 jarda.
Faça um programa que receba uma medida em pés, faça as conversões a seguir e 
mostre os resultados.

 a) polegadas;
 b) pes;
 c) jardas; */

#include<stdio.h>
int main(){
    float polegadas, pes, resultado, jardas, milhas = 1;
    printf("Informe o numero de pes: \n");
    scanf("%f", &pes);
    polegadas = 12;
    polegadas = pes * polegadas;

    printf("\nO numero de polegadas e: %.2f", polegadas);

    printf("\nInforme o numero de pes: \n");
    scanf("%f", &pes);

    jardas = pes * 3;

    printf("O numero de jardas e: %.2f \n", jardas);

    printf("\nInforme o numero de jardas: \n");
    scanf("%f", &jardas);

    milhas = milhas * 1760;
    
    printf("\nO numero de milhas e: %.2f\n", milhas);
    
    getchar();
    return 0;
}


    

