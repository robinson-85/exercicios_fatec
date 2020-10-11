/* 5. Escrever um algoritmo que leia o nome de um aluno e as notas das três 
provas que ele obteve no semestre. No final informar o nome do aluno e a 
sua média (aritmética).*/

#include <stdio.h>
int main(){
    char nome [40];
    float n1, n2, n3, resultado;
    printf("Digite o seu nome \n");
    scanf("%s", &nome);
    printf("Digite as notas do aluno em sequencia: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    resultado = (n1 + n2 + n3) / 3;
    printf("A media final e: %.2f \n", resultado); 
    getchar();
    return 0;

}