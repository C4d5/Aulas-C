#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int somaidade(int id1, int id2){

  //comandos função
  int soma;

  soma = id1 + id2;

  return soma;

}

int main(void) {

  //comandos main
  int ana, cadu;

  printf("Digite a idade da ana: \n");
  scanf("%d", &ana);

  printf("Digite a idade do cadu: \n");
  scanf("%d", &cadu);

  printf("a soma das idades é %d \n", somaidade(ana, cadu));

  return 0;
}