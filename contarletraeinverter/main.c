#include <stdio.h>
#include <stdlib.h>

int num[5];
int maior = -5;
int menor = 1000;

void fmaior();
void fmenor();
void lista();

int main(int argc, char *argv[]) {
	lista();
	fmaior();
	fmenor();
	return 0;
}

void lista()
{
	int cont;
	for(cont = 0; cont < 5; cont++)
	{
		printf("Insira um numero na posicao %d\n", cont+1);
		scanf("%d",&num[cont]);
	}
}

void fmaior()
{
	int cont;
	for(cont = 0; cont < 5; cont++)
	{
		if(num[cont] > maior)
		{
			maior = num[cont];
		}
	}
	printf("O maior numero Ã© %d\n", maior);
}

void fmenor()
{
	int cont;
	for(cont = 0; cont < 5; cont++)
	{
		if(num[cont] < menor)
		{
			menor = num[cont];
		}
	}
	printf("O menor numero Ã© %d\n", menor);
}