#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	
	// comando para habilitar acento
	setlocale(LC_ALL,"Portuguese_Brazil");
		
	char opcao = '1';
	
	while(opcao != '0')
	{
		printf("Escolha um país pela letra:\n");
		printf("\t A - Alemanha\n");
		printf("\t B - Brasil\n");
		printf("\t C - Chile\n");
		printf("\t D - Dinamarca\n");
		printf("\t E - Espanha\n");
		printf("\t 0 - Sair do Programa\n");
		scanf(" %c",&opcao);
		
		if(opcao == '0') break;
		switch(opcao)
		{
			case 'A':
			case 'a':
				printf("Você escolheu a Alemanha\n");
				break;
			case 'B':
			case 'b':
				printf("Você escolheu a Brasil\n");
				break;
			case 'C':
			case 'c':
				printf("Você escolheu a Chile\n");
				break;
			case 'D':
			case 'd':
				printf("Você escolheu a Dinamarca\n");
				break;
			case 'E':
			case 'e':
				printf("Você escolheu a Espanha\n");
				break;
			default:
				printf("Item invalido\n");
				break;
		}
	}
}
