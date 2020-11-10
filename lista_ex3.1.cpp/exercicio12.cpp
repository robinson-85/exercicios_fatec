/* 12. Faça um programa que receba o código correspondente ao cargo de um
funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu novo salário.
Os cargos estão na tabela a seguir.

Código            Cargo                     Percentual 
1              Escriturário                    50% 
2              Secretário                      35% 
3              Caixa                           20%
4              Gerente                         10%
5              Diretor                       Não tem aumento           */

#include <stdio.h>

int main(){
    float salario, aumento, novo_sal, valor_aumento, cargo;
    printf("\nDigite o código do seu cargo (1,2,3,4,5) \n");
    scanf("%f", &cargo);
    printf("\nDigite o seu salario:R$ \n");
    scanf("%f", &salario);


    if(cargo == 1){
        printf("O cargo e Escriturario \n");
        valor_aumento = salario * 0.50; //VALOR DO AUMENTO
        novo_sal= salario * 1.50;  //VALOR NOVO SALARIO
        printf("Valor do Aumento em 50 Porcento:R$ %.2f\n", valor_aumento);
        printf("Valor do Novo Salario:R$ %.2f\n", novo_sal); 
    }
    else if(cargo == 2){
        printf("Secretario \n");
        valor_aumento = salario * 0.35; //VALOR DO AUMENTO
        novo_sal= salario * 1.35;  //VALOR NOVO SALARIO
        printf("Valor do Aumento em 35 Porcento:R$ %.2f\n", valor_aumento);
        printf("Valor do Novo Salario:R$ %.2f \n", novo_sal); 
    }
    else if(cargo == 3){
        printf("O cargo e de Caixa \n");
        valor_aumento = salario * 0.20; //VALOR DO AUMENTO
        novo_sal= salario * 1.20;  //VALOR NOVO SALARIO
        printf("Valor do Aumento em 20 Porcento:R$ %.2f \n", valor_aumento);
        printf("Valor do Novo Salario:R$ %.2f\n", novo_sal); 
    }
    else if(cargo == 4){
        printf("O cargo e de Gerente \n");
        valor_aumento = salario * 0.10; //VALOR DO AUMENTO
        novo_sal= salario * 1.10;  //VALOR NOVO SALARIO
        printf("Valor do Aumento em 10 Porcento:R$ %.2f \n", valor_aumento);
        printf("Valor do Novo Salario:R$ %.2f \n", novo_sal); 
    }
    else if(cargo == 5){
        printf("O cargo e de Diretor \n");
        printf("Nao tem aumento salarial! \n");
    }
    else{
        printf("Cargo inexistente \n");
    }
    
    getchar();
    return 0;
} 

