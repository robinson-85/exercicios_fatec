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
    float n1, n2, n3, media;
    printf("\nDigite a nota do aluno: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    if(media >= 6) {
        printf("\nAprovado \n");
    }
    else{
        printf("\nReprovado \n");
    }

getchar ();
return 0;
}