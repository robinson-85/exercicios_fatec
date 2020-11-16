/* 1. A nota final de um estudante é calculada a partir de três notas atribuídas,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas obedece aos pesos a seguir:

Nota                                  Peso
Trabalho de laboratório                 2
Avaliação semestral                     3
Exame final                             5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e
o conceito que segue a tabela:

Média Ponderada                                Conceito 
8--------10                                       A
7--------8                                        B
6--------7                                        C
5--------6                                        D
0--------5                                        E                 */

#include<stdio.h>

int main(){
    float nota1, nota2, nota3, nota_final, media_ponderada;
    printf("Digite a nota do Trabalho de laboratório: \n");
    scanf("%f", &nota1);
    printf("Digite a nota da Avaliacao semestral: \n");
    scanf("%f", &nota2);
    printf("Digite a nota do Exame Final: \n");
    scanf("%f", &nota3);

    media_ponderada = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("A média do Trabalho de Laboratorio, Avaliação semestral e Exame Final é: %.2f \n\n", media_ponderada);
 
    if(media_ponderada>8 && media_ponderada<10){
        printf("Obteve o conceito: A \n");
    }
    else if(media_ponderada>7 && media_ponderada<8){
        printf("Obteve o conceito: B \n");
    }
    else if(media_ponderada>6 && media_ponderada<7){
        printf("Obteve o conceito: C \n");
    }
    else if(media_ponderada>5 && media_ponderada<6){
        printf("Obteve o conceito: D \n");
    }
    else if(media_ponderada>0 && media_ponderada<5){
        printf("Obteve o conceito: E \n");
    }
    else{
        printf("Nota inválida! \n");
    }

    getchar ();
    return 0;
}