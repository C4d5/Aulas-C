/*Escreva uma função chamada calculaMedia que recebe três números como parâmetros e retorna a
média desses números. No programa principal, solicite ao usuário que insira três números e chame a função para calcular e imprimir a média.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int calcularmedia(int num1, int num2, int num3) {

      int resultado;
    
      resultado = (num1 + num2 + num3) / 3.0;
    
      return resultado;

}

int main(void) {

  int n1, n2, n3;

  printf("Digite um número: \n");
  scanf("%d", &n1);

  printf("Digite um número: \n");
  scanf("%d", &n2);
  
  printf("Digite um número: \n");
  scanf("%d", &n3);

  printf("A média dos numero é %.2d \n", calcularmedia(n1, n2, n3));

  return 0;
}
