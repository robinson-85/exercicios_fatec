//Programa que altera numeros inteiros para palavras de acordo 
//com a tabela ascII
#include<stdio.h>
int main ()
{
	int num=65 ;//variavel inteira 
	printf("%c",num);//A variavel é do tipo inteira, mas o %c espera um 
	//caracter por este motivo o valor 65 é convertido para "A" conforme tabela ASCII
	getchar();
	return 0;
}
