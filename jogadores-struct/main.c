#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct jogador{
	char nome[100];
	float idade;
};

int main(int argc, char *argv[]) {
	
	struct jogador Pele[5];
	char nomemaior[100], nomemenor[100];
	int cont;
	float  maior = 0, menor = 100, media = 0;
	
	for(cont = 0, cont < 5; cont ++;)
	{
		printf("Qual o nome do Jogador?%d, cont+");
		scanf("%[^\n]s", &Pele[cont].nome);
		printf("Qual a idade do jogador %d, cont+1");
		scanf("%d", &Pele[cont].idade);
		
		if(Pele[cont].idade > maior)
		{
			maior = Pele[cont].idade;
			strcopy(nomemenor,Pele[cont].nome);
		}
		media = media + Pele[cont].idade/5;
	}
	
	printf("O mais velho jogador e %s");
	
	
	return 0;
}