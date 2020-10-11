/*17. Faça um programa para resolver equações do 2o grau.
ax2 + bx + c = 0
A variável a deve ser diferente de zero.
Δ = (b*b) -4 * a * c
Δ < 0 → não existe raiz real
Δ = 0 → existe uma raiz real
x = (-b) / (2 * a)
Δ > 0 → existem duas raízes reais
x1 = (-b + raiz(delta))/ (2 * a)
x2 = (-b - raiz(delta))/ (2 * a)*/

 

#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,delta,x,x1,x2;
    printf("Digite valor para a \t");
    scanf("%f%*c",& a);
    printf("Digite valor para b \t");
    scanf("%f%*c",& b);
    printf("Digite valor para c \t");
    scanf("%f%*c",& c);
    if(a==0)
    {
        printf("Não é equacao de 2 grau");
    }
    else
    {
        delta= (b*b)-4 *a*c;
        if(delta < 0 )
        {
            printf("não existe raiz real");
        }
        if(delta == 0)
        {
            printf("existe uma raiz real \n");
            x = (-b) / (2 * a);
            printf("%f",x);
        }
        if(delta > 0)
        {
            printf("existem duas raízes reais \n");
            x1 = (-b + sqrt(delta))/ (2 * a);
            x2 = (-b - sqrt(delta))/ (2 * a);
            printf("%f \t",x1);
            printf("%f",x2);
        }
    }
    getchar();
    return 0;
}