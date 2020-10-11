// 13.Sabe-se que: pé = 12 polegadas; 1 jarda = 3 pés; 1 milha = 1,760 jarda
// Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
// a) polegadas;
#include<stdio.h>
int main(){
    float pol, pes, resultado;
    printf("Informe o numero de pes\n");
    scanf("%f", &pes);
    pol = 12;
    resultado = pes * pol;
    printf("%.2f", "O numero de polegadas e: ", resultado);
    getchar();
    return 0;

}

// b) jardas;
#include<stdio.h>
int main(){
    float jardas, pes;
    printf("Informe o numero de pes\n");
    scanf("%f", &pes);
    jardas = pes * 3 ;
    printf("%.2f", "O numero de jardas e: ", jardas);
    getchar();
    return 0;

}

// c) milhas.
#include<stdio.h>
int main(){
    float jardas, milhas;
    printf("Informe o numero de jardas\n");
    scanf("%f", &jardas);
    milhas = jardas / 1760;
    printf("%.2f", "O numero de milhas e: ", milhas);
    getchar();
    return 0;

}