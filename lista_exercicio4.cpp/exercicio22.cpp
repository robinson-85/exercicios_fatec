/* 22. Faça um programa que receba o salário base e o tempo de serviço de um
funcionário. Calcule e mostre:
■ O imposto, conforme a tabela a seguir.

Salário Base                                        % Sobre o salário base
<R$ 200,00                                                  Isento 
Entre R$ 200,00(inclusive) e R$ 450,00(inclusive)              3%
Entre R$ 450,00 e R$ 700,00                                    8%
>= R$ 700,00                                                   12%


■ A gratificação, de acordo com a tabela a seguir.

Salário Base                     Tempo de serviço              Gratificação
Superior a R$ 500,00             Até 3 anos                        20
Superior a R$ 500,00             Mais de 3 anos                    30
Até R$ 500,00                    Até 3 anos                        23
Até R$ 500,00                    Entre 3 e 6 anos                  35
Até R$ 500,00                    De 6 anos para cima               33


■ O salário líquido, ou seja, salário base menos imposto mais gratificação.
■ A categoria, que está na tabela a seguir.

Salário líquido                          Classificação
Até R$ 350,00                               A
Entre R$ 350,00 e R$ 600,00                 B
De R$ 600,00 para cima                      C 

*/

#include <stdio.h>
int main(){
    float sal_base, sal_liq, tempo_servico, imposto = 0, gratificacao, clas;
    printf("\nDigite o salario base: \n");
    scanf("%f", &sal_base);
    printf("\nDigite o seu tempo de servico: \n");
    scanf("%f", &tempo_servico);

    if(sal_base >= 200 && sal_base <= 450){
        imposto = 0.03;
        if(sal_base > 450 && sal_base < 700){
            imposto = 0.08;
        if(sal_base >= 700) {
            imposto = 0.12;
        else{
            printf("Isento");
            }
          }  
        }

    }

    if(sal_base >= 500 && tempo_servico <= 3){
        printf("Gratificacao: 20");
        if(sal_base ){
        if(sal_base > 500 && tempo_servico >3)
        printf("Gratificacao: 30");
        if (sal_base < 500 && tempo_servico <= 3){
        printf("Gratificacao: 23");
        if (sal_base < 500 && tempo_servico >= 3 || < 6){
        printf("Gratificacao: 35");
        if(sal_base < 500 && tempo_servico > 6){
            printf("Gratificacao: 33");
                    }   
                }
            }
        }

    }


    if(sal_liquido < 350 == clas A ){
        if(sal_liquido > 350 || < 600 == clas B){
        if (sal_liq > 600 == clas C){

            }
        }

    }

// ■ O salário líquido, ou seja, salário base menos imposto mais gratificação.

sal_liq = (sal_base - imposto) + gratificacao; 

printf("\nDigite o salario final: %.2f \n", sal_liq);

getchar ();
return 0;

} // não resolvido