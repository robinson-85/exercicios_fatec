/* 9.Faça um programa que calcule e mostre a área de um triângulo. 
Sabe-se que: Área = (base * altura)/2.*/

#include <stdio.h>

int main (){
    float area, base, altura;
    printf("Digite o valor da base: \n");
    scanf("%f", &base);
    printf("Digite o valor da altura: \n");
    scanf("%f", &altura);

    area = (base * altura) / 2;
    
    printf("Resposta: %.2f \n", area);
    
    getchar();
    return 0;
}