/* 7. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus
 Fahrenheit. A fórmula de conversão é:
 F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

/*A fórmula de conversão é:
F=(9*C+160) / 5, sendo F a temperatura em
Fahrenheit e C a temperatura em Celsius.
*/

 /*  \t = tab
    \n = pular um linha
*/

#include<stdio.h>
int main ()
{
    float celsius ,fahrenheit;
    printf("Digite temperatura em graus Celsius \t");
    scanf("%f%*c",&celsius);
    printf("\n" );
    fahrenheit = ((9*celsius+160)/5);
    printf("A teperatura em  fahrenheit = %.2f",fahrenheit );
    getchar();
    return 0;
}