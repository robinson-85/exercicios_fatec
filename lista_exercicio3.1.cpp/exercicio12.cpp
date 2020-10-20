/* 12. Faça um programa que receba o código correspondente ao cargo de um
funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu novo salário.
Os cargos estão na tabela a seguir.

Código            Cargo                     Percentual 
1              Escriturário                    50% 
2              Secretário                      35% 
3              Caixa                           20%
4              Gerente                         10%
5              Diretor                       Não tem aumento
  
*/

#include <stdio.h>
int main(){
    float salario, aumento, novo_sal, cargo;
    printf("\nDigite o código do seu cargo (1,2,3,4,5) \n");
    scanf("%f", &cargo);
    printf("\nDigite o seu salario: \n");
    scanf("%f", &salario);


    if(cargo == 1 ){
        printf("O cargo e Escriturario");
        aumento = salario * 50 / 100;
    }

    printf("O valor do aumento e: %.2f \n", aumento);
    novo_sal = salario + aumento;
    printf(“O novo salario e: %.2f \n“, novo_sal);

        

        if(cargo == 2){
            printf("Secretario");
            aumento = salario * 35 / 100;
            }
            if(cargo == 3){
                printf("O cargo e Caixa");
                aumento = salario * 20 / 100;
            }
            if(cargo == 4){
                printf("O cargo e Gerente");
                aumento = salario * 10 / 100;
            }
            if(cargo == 5){
                printf("O cargo e Diretor");
                
            }
        
    }

    else{
        printf("Cargo inexistente");
    }

    novo_sal = sal_atual + v_aumento;
    printf("\nMostre o salario atual: %.2f\n", novo_sal);

    getchar();
    return 0;

} // não resolvido

