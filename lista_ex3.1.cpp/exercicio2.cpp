/* 2. Faça um programa que receba três notas de um aluno, calcule e mostre a média
aritmética e a mensagem constante na tabela a seguir. Aos alunos que ficaram para
exame, calcule e mostre a nota que deverão tirar para serem aprovados, considerando
que a média exigida é 6,0.

Média Ponderada                                Conceito 
0--------3                                     Reprovado
3--------7                                       Exame
7--------10                                    Aprovado
*/

#include <stdio.h>

int main(){
    float n1, n2, n3, media, exame;
    printf("\nDigite a nota do aluno: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    printf("MÉDIA ARITMÉTICA \n");
        printf("    >=0 e > 3 - Reprovado \n");
        printf("    >=3 e > 7 - Exame \n");
        printf("    >=7 e >= 10 - Aprovado \n\n");
    
    media = (n1 + n2 + n3) / 3;

    if((media >=0 && media < 3)) {
        printf("Sua média é %.2f,portanto está reprovado \n",media);
    }
    else if((media >=3) && (media < 7)) {
        exame = 6 - media;
        printf("Sua média é %.2f,portanto está em exame \n",media);
        printf("Faltam %.2f pontos para você ser aprovado. \n\n",exame);
    }
    else if ((media >= 7) && (media <= 10)) {
        printf("Sua média é %.2f,portanto está aprovado \n",media);
    }

    getchar ();
    return 0;
}