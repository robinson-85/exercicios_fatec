/* 25. Faça um programa que receba o custo de um espetáculo teatral e o preço do 
convite desse espetáculo. Esse programa deverá calcular e mostrar a quantidade de 
convites que devem ser vendidos para que ,pelo menos, o custo do espetáculo seja
 alcançado.*/

 #include <stdio.h>
 int main(){
     float custo, convite, quantidade, quantidade_arredondada;
     printf("\nDigite o valor do custo do espetaculo teatral: \n");
     scanf("%f", &custo);
     printf("\nDigite o valor do convite: \n");
     scanf("%f", &convite);

     quantidade = custo/convite;
     
     
     printf("\nA quantidade sera de: %.2f convites \n", quantidade);

     getchar();
     return 0;
 }
 