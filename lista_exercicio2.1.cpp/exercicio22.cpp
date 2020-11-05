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
De R$ 600,00 para cima                      C                                        */

#include <stdio.h>
int main(){
    float sal_base, tempo_de_servico, novo_sal, imposto, sal_liquido, gratificacao;
    printf("\nDigite o seu salario: \n");
    scanf("%f", &sal_base);
    printf("\nDigite o tempo de servico: \n");
    scanf("%f", &tempo_de_servico);

    if(sal_base < 200){ 
	    printf("Isento");
        if(sal_base >= 200 && sal_base <= 450){
            novo_sal = sal_base - 3/100;
        }
        if(sal_base > 450 && sal_base < 700){
            novo_sal= sal_base - 8/100;
        }
        if(sal_base >= 700){
            novo_sal = sal_base - 12/100;
        }
    }

    if(sal_base > 500 && tempo_de_servico > 3){
        novo_sal = sal_base + 20;
        if(sal_base > 500 && tempo_de_servico < 3){
            novo_sal = sal_base + 30;
        }
        if(sal_base < 500 && tempo_de_servico < 3){
            novo_sal = sal_base + 23;
        }
        if(sal_base < 500 && tempo_de_servico > 3 && tempo_de_servico < 6){
            novo_sal = sal_base + 35;
        }
        if(sal_base < 500 && tempo_de_servico > 6){
            novo_sal = sal_base + 33;
        }
    }
   
    // O salário líquido, ou seja, salário base menos imposto mais gratificação.

    sal_liquido = (sal_base - imposto) + gratificacao;

    printf("\nEsse e o seu novo salario: %.2f \n", sal_liquido);

    if(sal_liquido < 350){
        printf("Classificacao A");
        if(sal_liquido > 350 && sal_liquido < 600){
             printf("Classificacao B");
        }
        if(sal_liquido >= 600){
             printf("Classificacao C");
        }
    }
	
    getchar();
    return 0;

}

