/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Crie um programa que use um loop do-while para imprimir a tabela de multiplicação de um número inserido pelo usuário, de 1 a 10.

int main()
{
   
    int numero, i;
    
    printf("Escreva um Numero para fazer uma tabela de Multiplicacao\n");
    scanf("%d", &numero);
    
    do {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
        i++;
    } while (i <= 10);

    return 0;
}