/* 18. Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos
lados de um triângulo e, se forem, verifique se é um triângulo equilátero, isósceles ou
escaleno. Se eles não formarem um triângulo, escreva uma mensagem. Considere
que:
■ o comprimento de cada lado de um triângulo é menor que a soma dos outros dois
lados;
■ chama-se equilátero o triângulo que tem três lados iguais;
■ denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
■ recebe o nome de escaleno o triângulo que tem os três lados diferentes. */

#include <stdio.h>
int main(){
    float x, y, z;
    printf("\nInforme x\n");
    scanf("%f", &x);
    printf("\nInforme y\n");
    scanf("%f", &y);
    printf("\nInforme z\n");
    scanf("%f", &z);
    
    if(x < y + z && y < z + x && z < x + y){
       if(x == y && x == z){
           printf("Equilatero\n");
       }
       
       else if(x == y || y == z || z == x){
           printf("Isoceles\n");
        }
       
        else{
            printf("Escaleno\n");
        }
    }
    
    else{
        printf("Esse nao e um triangulo\n");
    }

    getchar();
    return 0;

}