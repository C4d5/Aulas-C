#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int somaquadrado(int n1, int n2){

  int pot1, pot2;

  pot1 = n1 * n1;

  pot2 = n2 * n2;

  return pot1 + pot2;

}

int main(void) {

  int num1, num2;

  printf("Qual a placa \n");
  scanf("%d", &num1);
  printf("Qual o ano?\n");
  scanf("%d", &num2);

  printf(" a soma é: %d", somaquadrado(num1, num2));

  return 0;
}