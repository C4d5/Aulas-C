#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char teste[10]; // criação de uma string com 20 caracteres no maximo
	int cont, soma = 0; // cont para controle do for, e soma para identificar total de letras 'A'
	
	printf("Insira uma palavra\n");
	scanf("%s",&teste);
	
	for(cont = 0; cont < 20; cont++) // um for em todas as 20 caracteres possíveis na string
	{
		//printf("%c\n",teste[cont]);
		if(teste[cont] == 'a' || teste[cont] == 'A') soma++; // caso tenha 'a' ou 'A', incrementa a soma
	}
	
	printf("%d", soma);
	
	return 0;
}