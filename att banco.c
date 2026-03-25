
                                    /* 999 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct conta{
  char nome[50];	
  int cpf;
  int saldo;
};

void fconsulta(int id, struct conta acc[]){

int cont;
  for(cont=0; cont<3; cont++){
  if(id == acc[cont].cpf) 
    {
    printf("o nome do dono é %s e o saldo dessa pessoa é %d \n                                  Obrigado por utilizar nossos serviços!\n---------------------------------------------------------------------------------------------", acc[cont].nome, acc[cont].saldo);


      
    }
  }
}

int main(void) {

  struct conta c[3];
  int ident, cont;


  for(cont = 0; cont < 3; cont++){
  printf("Qual seu nome? \n");
  scanf(" %[^\n]s", c[cont].nome);
	 printf("Nome Salvo: %s\n", c[cont].nome);

  printf("Qual seu cpf \n");
  scanf("%d", &c[cont].cpf);
  printf("Qual seu saldo?\n");
  scanf("%d", &c[cont].saldo);
}

  printf("Digite sua senha: \n");
  scanf("%d", &ident);

fconsulta(ident, c);
  
  return 0;
}





			TYPEDEF


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct conta{
  char nome[50];	
  int cpf;
  int saldo;
}conta;

void fconsulta(int id, struct conta acc[]){

int cont;
  for(cont=0; cont<3; cont++){
  if(id == acc[cont].cpf) 
    {
    printf("o nome do dono é %s e o saldo dessa pessoa é %d \n                                  Obrigado por utilizar nossos serviços!\n---------------------------------------------------------------------------------------------", acc[cont].nome, acc[cont].saldo);


      
    }
  }
}

int main(void) {

  conta c[3];
  int ident, cont;


  for(cont = 0; cont < 3; cont++){
  printf("Qual seu nome? \n");
  scanf(" %[^\n]s", c[cont].nome);
  printf("Qual seu cpf \n");
  scanf("%d", &c[cont].cpf);
  printf("Qual seu saldo?\n");
  scanf("%d", &c[cont].saldo);
}

  printf("Digite sua senha: \n");
  scanf("%d", &ident);

fconsulta(ident, c);
  
  return 0;
}











