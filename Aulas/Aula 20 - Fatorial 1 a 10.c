#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Fatorial(int*);

int main(int argc, char *argv[]) {
	
	int resultado[10], cont;
	Fatorial(resultado);
	
	for(cont = 0; cont < 10; cont++)
	{
		printf("O fatorial de %d é %d\n", cont+1, resultado[cont]);
	}
}

void Fatorial (int res[])
{
	int cont = 1, cont2;
	for(cont = 0; cont < 10; cont++)
	{
		res[cont] = 1;
		cont2= cont + 1;
		while(cont2 >= 1)
		{
			res[cont] = res[cont] * cont2;
			cont2--;
		}
	}
}