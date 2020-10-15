/* ■ O salário a receber do funcionário é igual ao salário líquido mais a gratificação.

Salario líquido                             Gratificação
Até R$ 350,00                               R$ 100,00
Superior a R$ 350,00                        R$ 50,00  

*/

#include <stdio.h>
int main(){
    float sal_receber, sal_liquido, gratificacao;
    printf("\nDigite o salario liquido: \n");
    printf("%f", &sal_liquido);
    if(sal_liquido >350){
        gratificacao = 100;
    }
    else{
        gratificacao = 50;
    }
    sal_receber = sal_liquido + gratificacao;
    printf("\nSeu salario a receber sera: %.2f\n", sal_receber);
    getchar();
    return 0;
}

// não resolvido
