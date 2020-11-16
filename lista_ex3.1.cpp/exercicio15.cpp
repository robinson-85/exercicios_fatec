/* 15 ■ O salário a receber do funcionário é igual ao salário líquido mais a 
gratificação.

Salario líquido                             Gratificação
Até R$ 350,00                               R$ 100,00
Superior a R$ 350,00                        R$ 50,00                            */

#include <stdio.h>
#include <locale>

int main(){
    setlocale( LC_ALL, "Portuguese");
    float sal_receber, sal_liquido, gratificacao;
    printf("\nDigite o salário liquido: \n");
    scanf("%f", &sal_liquido);

    sal_receber = sal_liquido + gratificacao;
    
    if(sal_liquido <= 350){
        sal_receber = sal_liquido + 100;
    }
    else{
        sal_receber = sal_liquido + 50;
    }
    
    printf("\nSeu salário a receber sera: %.2f\n", sal_receber);
    
    getchar();
    return 0;
}


