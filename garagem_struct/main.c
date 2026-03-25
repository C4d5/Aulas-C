#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char modelo[20];
	char placa[10];
	char cor[10];
	int anop;
} Carros;

int main(int argc, char *argv[]) {
	
	Carros Vagas[10];
	int opcao = 99, cont;
	
	for(cont = 0; cont < 10; cont++)
	{
		strcpy(Vagas[cont].placa,"-");
	}
	
	while(opcao != 0)
	{
		printf("Escolha a opcao desejada:\n");
		printf("\t1-Estacionar\n");
		printf("\t2-Remover\n");
		printf("\t3-Listar\n");
		printf("\t0-Sair do Programa\n");
		scanf("%d",&opcao);
		
		switch(opcao)
		{
			case 1:
				Estacionar(Vagas);
				break;
			case 2:
				Remover(Vagas);
				break;
			case 3:
				Listar(Vagas);
				break;
			case 0:
				break;
			default:
				printf("Opcao invalida\n");
		}
	}
	
	return 0;
}

void Estacionar(Carros V[])
{
	int Lotado = 0, cont;
	for(cont = 0; cont < 10; cont++)
	{
		if(strcmp(V[cont].placa,"-") == 0)
		{
			printf("Insira o valor da placa:\n");
			scanf(" %[^\n]s",&V[cont].placa);
			printf("Insira o modelo:\n");
			scanf(" %[^\n]s",&V[cont].modelo);
			printf("Insira a cor:\n");
			scanf(" %[^\n]s",&V[cont].cor);
			printf("Insira o ano de producao:\n");
			scanf(" %d",&V[cont].anop);
			Lotado = 1;
			break;
		}
	}
	if(Lotado == 0) printf("Estacionamento Lotado\n");
}

void Remover(Carros V[])
{
	int Vazio = 0, cont;
	char placaconsulta[10];
	
	printf("Qual a placa a ser retirada?\n");
	scanf(" %[^\n]s",&placaconsulta);
	for(cont = 0; cont < 10; cont++)
	{
		if(strcmp(V[cont].placa,placaconsulta) == 0)
		{
			printf("Veiculo Encontrado e Removido\n");
			strcpy(V[cont].placa,"-");
			strcpy(V[cont].modelo,"-");
			strcpy(V[cont].cor,"-");
			V[cont].anop = 0;
			Vazio = 1;
			break;
		}
		else if(strcmp(V[cont].placa,"-") != 0) Vazio = 2;
	}
	if(Vazio == 0) printf("Estacionamento Vazio\n");
	else if(Vazio == 2) printf("Veiculo nao encontrado\n");
}

void Listar(Carros V[])
{
	int cont, Vazio = 0;
	for(cont = 0; cont < 10; cont++)
	{
		if(strcmp(V[cont].placa,"-") != 0)
		{
			printf("O veiculo %s do modelo %s, ano %d  e cor %s esta na posicao %d\n",V[cont].placa,V[cont].modelo,V[cont].anop,V[cont].cor,cont+1);
			Vazio = 1;
		}
	}
	if(Vazio == 0) printf("Estacionamento Vazio\n");	
}