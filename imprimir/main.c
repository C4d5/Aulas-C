#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//protótipo
void imprimanome(int opc);
  
int main(void) {
  
  //comandos main

  int num;
  
  printf("Ana = 1 e Cadu = 2\n");
  printf("Digite um numero: \n");
  scanf("%d", &num);

  imprimanome(num);
  
  return 0;
}

void imprimanome(int opc){
    
  if(opc ==1){
    printf("Ana");
  }
  else {
  printf("Cadu");
  }

  //comandos função
  
  
  
  
}