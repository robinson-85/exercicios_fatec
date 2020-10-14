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
    float n1, n2, n3, media_arit, media_pond;
    printf("\nDigite a nota do aluno: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    media_arit = (n1 + n2 + n3) / 3;
    media_pond = (n1 * 1) + (n2 * 2) + (n3 * 3);

    if(media_arit < 6){
        printf("\nExame \n");
    }
    else{
        printf("\nAprovado \n");
    }


    if(media_pond > 0 && media_pond <= 3) {
        printf("\nReprovado \n");
        if(media_pond > 3 && media_pond <= 7){
            printf("\nExame \n");
            if(media_pond > 7 && media_pond <= 10){
                printf("\nAprovado \n");
            }
                
        }
    }
    
    

getchar ();
return 0;
} // não resolvido