#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, num3, cont = 1;
	
	printf("Insira o primeiro numero\n");
	scanf("%d",&num1);
	
	printf("Insira o segundo numero\n");
	scanf("%d",&num2);
	
	printf("Insira o terceiro numero\n");
	scanf("%d",&num3);
	
	if(num1 > 0 && num2 > 0 && num3 > 0)
	{
		while(1) // condiÃ§Ã£o de loop infinito
		{
			if(cont%num1 == 0 && cont%num2 == 0 && cont%num3 == 0 ) break;
			cont++;
		}
		printf("%d", cont);
	}
	else printf("Um ou mais numeros invalidos\n");
}