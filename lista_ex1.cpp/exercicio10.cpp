/* 10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que:
 Área = π * R^2 */

#include <stdio.h>

int main(){ 
    float area, raio;
    printf("\nDigite o raio: ");
    scanf("%f", &raio);

    area = 3.1415 * raio * raio;

    printf("\nA área é: %4.3f \n",area);

    getchar();
    return 0;
}