/* 9.Faça um programa que calcule e mostre a área de um triângulo. 
Sabe-se que: Área = (base * altura)/2.*/

#include <stdio.h>
int main (){
    float area, base, altura;
    scanf("%f", &base); 
    scanf("%f", &altura);
    area = (base * altura) / 2;
    
    printf("Resposta: %.2f \n", area);
    
    getchar();
    return 0;
}