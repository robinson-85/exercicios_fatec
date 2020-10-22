/* 4.1. Faça um programa que receba três números e mostre-os em ordem crescente.
Suponha que o usuário digitará três números diferentes. 

Esse exercício corresponde ao exercício número 4, porém, realizado de outra forma */


#include <stdio.h>
#include <stdlib.h>
int main(){
 int number1, number2, number3, maior, meio, menor;
 scanf("%d%d%d", &number1, &number2, &number3);


 if (number1 > number2 && number1 > number3){
    maior = number1;
    if (number2 > number3){
        meio = number2;
        menor = number3;}
    if (number2 < number3){
        meio = number3;
        menor = number2;}
 }
 if (number2 > number1 && number2 > number3){
    maior = number2;
    if (number1 > number3){
        meio = number1;
        menor = number3;}
    if (number3 > number1){
        meio = number3;
        menor = number1;}
 }
 if (number3 > number1 && number3 > number2){
    maior = number3;
    if (number1 > number2){
        meio = number1;
        menor = number2;}
    if (number2 > number1){
        meio = number2;
        menor = number1;}
 }
 if (number1 == number2 && number2 == number3)
 {
     maior = number1;
     meio = number2;
     menor = number3;
 }
 if (number1 == number2 && number2 > number3)
 {
     maior = number1;
     meio = number2;
     menor = number3;
 }
 if (number1 == number2 && number2 < number3)
 {
     maior = number3;
     meio = number2;
     menor = number1;
 }
 if (number1 == number3 && number2 > number1)
 {
     maior = number2;
     meio = number1;
     menor = number3;
 }
 if (number1 == number3 && number2 < number3)
 {
     maior = number3;
     meio = number1;
     menor = number2;
 }
 if (number3 == number2 && number2 > number1)
 {
     maior = number2;
     meio = number3;
     menor = number1;
 }
 if (number3 == number2 && number2 < number1)
 {
     maior = number1;
     meio = number2;
     menor = number3;
 }

 printf("%d\n%d\n%d\n", maior, meio, menor);
 return 0;

}