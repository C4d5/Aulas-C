#inclide <stdio.h>
#inclide <string.h>
#inclide <locate.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome [TAM];
};
 typedef struct tipo_pessoa tipo_pessoa;

intf main(){
	setlocate(LC_ALL, "Portuguese");

	tipo_pessoa pes = {0, 0.0, "Teste"};

	printf("Inicio: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);

	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto");

	
	printf("\nAlterando os campos via codigo:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);


	printf("\nInsira um numero inteiro:\n");
	scanf("%d", &pes.idade);
	printf("\nInsira um numero real:\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("\nInsira uma palavra:\n");
	scanf("%s", &pes.nome);

	printf("\nAlterando com dados do usuario:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);

}


