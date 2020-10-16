/* 10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que:
 Área = π * R^2 */

#include <stdio.h>
int main()
{ float area, raio;
// Mostra mensagem antes da leitura do raio
printf("\nDigite o raio: ");
// Recebe o raio
scanf("%f", &raio);
// Calcula a área
area = 3.1415 * raio * raio;
// Mostra a área
printf("\nA área é: %4.3f",area);
// Para o programa a espera de um ENTER
getchar();
return 0;
}