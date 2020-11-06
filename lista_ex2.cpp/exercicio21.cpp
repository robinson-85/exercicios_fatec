/* 21. Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para 
calcular e mostrar a que distância a escada deve estar da parede. A pessoa deve 
fornecer o tamanho da escada e a altura em que deseja pregar o quadro. Lembre-se 
de que o tamanho da escada deve ser maior que a altura que se deseja alcançar. */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float distancia, parede, tamanho_escada, altura;
    printf("Qual o tamanho da escada? \n");
    scanf("%f", &tamanho_escada);
    printf("Qual a altura que você deseja pregar o quadro? \n");
    scanf("%f", &altura);
    
    distancia = tamanho_escada - altura;
    
    printf("A distância que a escada deve estar da parede é: %.2f \n", distancia);
    
    getchar();
    return 0;
}