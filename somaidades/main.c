/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//faça uma função chamada somaidade() que vai somar a idade de duas pessoas

int somaidade(int id1, int id2){
    
    int soma;
    soma = id1 + id2;
    
    
    return soma;
    
}


int main()
{
    
    int ana, cadu, somaid;
    
    printf("Digite a idade da Ana\n");
    scanf("%d", &ana);
   
   
       printf("Digite a idade do Cadu\n");
    scanf("%d", &cadu);
    
    somaid = somaidade(ana, cadu);
    
    printf("A soma das idades é %d \n", somaid);
    return 0;
}

