#include <stdio.h>
#include <stdlib.h>

void main() {
	// Duas constantes fornecidas ao usuario
	const float diaria = 70, km = 0.15;
	
	//declaração da variaveis
	int diasaluguel, kmrodado;
	
	//solicitação ao usuario do valor dos seus dados
	printf("Favor, inserir quantidade de dias alugados \n");
	scanf("%d",&diasaluguel); 
	
	printf("Favor, Inserir o KM rodado- \n");
	scanf("%d",&kmrodado); 

	printf("O valor total de pafar é R$ %.2f", diasaluguel*diaria + km*kmrodado );
}