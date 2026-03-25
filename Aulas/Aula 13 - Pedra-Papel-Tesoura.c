#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int computador, jogador;
	
	while(1)
	{
		srand(time(NULL));
		computador = rand() % 3 + 1;
	
		printf("Escolha uma opcao: \n");
		printf("\t1 - Pedra\n");
		printf("\t2 - Papel\n");
		printf("\t3 - Tesoura\n");
		printf("\t0 - Sair do programa\n");
		scanf(" %d",&jogador);
	
		if(jogador == 0) break;
		else if(jogador >= 1 && jogador <= 3)
		{
			switch (computador)
			{
				case 1:
					if(jogador == 1) printf("Empate\n");
					else if(jogador == 2) printf("O computador jogou pedra, voce jogou papel. Voce venceu\n");
					else printf("O computador jogou pedra, voce jogou tesoura. Voce perdeu\n");
					break;
				case 2:
					if(jogador == 2) printf("Empate\n");
					else if(jogador == 1) printf("O computador jogou papel, voce jogou pedra. Voce perdeu\n");
					else printf("O computador jogou papel, voce jogou tesoura. Voce ganhou\n");
					break;
				case 3:
					if(jogador == 3) printf("Empate\n");
					else if(jogador == 1) printf("O computador jogou tesoura, voce jogou pedra. Voce ganhou\n");
					else printf("O computador jogou tesoura, voce jogou papel. Voce perdeu\n");
					break;
				default:
					printf("Computador bugou\n");
			}
		}
	 	else 
	 	{
	 		printf("Jogador selecionou numero invalido \n");
	 	}
	}
}