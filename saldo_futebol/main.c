/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	char nome[20];
	int feitos;
	int sofridos;
	int saldo;
}Time;


int main()
{
    Time a[5];
	int cont;
	
	for(cont = 0; cont < 5; cont++)
	{
		printf("Qual o nome do time:\n");
		scanf(" %[^\n]s",&a[cont].nome);
		printf("Quantos gols o time %s marcou:\n",a[cont].nome);
		scanf("%d",&a[cont].feitos);
		printf("Quantos gols o time %s sofreu:\n",a[cont].nome);
		scanf("%d",&a[cont].sofridos);
		a[cont].saldo = a[cont].feitos - a[cont].sofridos;
	}
	
	for(cont = 0; cont < 5; cont++)
	{
		printf("O time %s teve %d gols de saldo\n",a[cont].nome,a[cont].saldo);
	}
	return 0;
}