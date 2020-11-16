/* Escreva uma expressão que será utilizada para decidir se um aluno foi ou não 
aprovado. Para ser aprovado todas as médias do aluno devem ser maiores que 7.
Considere que o aluno cursa apenas três matérias, e que a nota de cada uma está
armazenada nas seguintes variáveis: materia1, materia2 e materia3. */

#include <stdio.h>

int main(){
    float materia1, materia2, materia3, resultado;
    
    printf("\nDigite a primeira nota: \n");
    scanf("%f", &materia1);
    printf("\nDigite a segunda nota: \n");
    scanf("%f", &materia2);
    printf("\nDigite a terceira nota: \n");
    scanf("%f", &materia3);

    if(resultado >= 7){
        printf("\nAprovado \n");
    }
    else{
        printf("\nReprovado \n");
    }
   
    resultado = (materia1 + materia2 + materia3) / 3;
   
    printf("\nA media do aluno e: %.2f \n", resultado);

    getchar();
    return 0;
}