#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num[10], cont; // vetor com 10 espaÃ§os para os numero, e cont para controle da estrutura de repetiÃ§Ã£o
	
	for(cont = 0; cont < 10; cont++ ) // leitura de cada item de num[10]
	{
		printf("Insira um numero\n");
		scanf("%d",&num[cont]); // notem qua a leitura Ã© feita na posiÃ§Ã£o onde cont se encontrar em cada sequencia do loop
	}
	
	for(cont = 0; cont < 10; cont++ )
	{
		printf("%d\n",2*num[cont]); // impressÃ£o do dobro de cada item na sequencia adicionada anteriormente
	}
	
	return 0;
}