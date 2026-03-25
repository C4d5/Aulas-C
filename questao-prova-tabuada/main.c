#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero, i, j = 0;
	
	printf("Digite um Numero\n");
	scanf("%d", &numero);
	
	for(j = 1; j  10 ; j++) { // AQUI NAO TEM ; NAO TEM ; NAO TEM ;
	
	printf("%d x %d = %d\n", numero, j, numero*j);
	
    }   
    
        return 0;
}