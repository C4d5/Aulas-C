/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    
    char nome[20];
    char nome2[20];
    int cont;

    printf("Digite um Nome\n");
    scanf(" %s", nome);
    
    cont = strlen(nome);
    
    for (int i = 0; i < cont; i++) {
        
        nome2[cont-i-1] = nome[i];
        
    }
    
    printf("%s", nome2);
    
    return 0;
}
