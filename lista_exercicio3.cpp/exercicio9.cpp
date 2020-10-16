/* 9. Faça um algoritmo que receba um valor que foi depositado e exiba o valor com
rendimento após um mês. Considere fixo o juro da poupança em 0,70% a. m. */

#include <stdio.h>
int main(){
   float valor_dep, val_ren;
   printf("Valor do deposito: \n");
   scanf("%f", &valor_dep);

   val_ren = valor_dep * 0.007;

   printf("Valor do rendimento: %.2f \n", val_ren);

   getchar();
   return 0;

}