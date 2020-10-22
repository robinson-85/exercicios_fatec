/* 25. Faça um programa que receba o custo de um espetáculo teatral e o preço do 
convite desse espetáculo. Esse programa deverá calcular e mostrar a quantidade de 
convites que devem ser vendidos para que ,pelo menos, o custo do espetáculo seja
 alcançado.*/

 #include <stdio.h>
 int main(){
     float custo, convite, quantidade;
     printf("Digite o custo do espetaculo: ");
     scanf("%f", &custo);
     printf("Digite o valor do convite: ");
     scanf("%f", &convite);
     quantidade = custo/convite;
     printf("\nA quantidade sera de: %.2f" " convites \n", quantidade);

     getchar();
     return 0;
 }