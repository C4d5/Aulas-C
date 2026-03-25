/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    
    //Crie um programa em C que use um loop do-while para pedir ao usuário que adivinhe um número secreto (por exemplo, 42) até que ele acerte.
    
    char numero_correto[30] = "30", tentativa[30];
    int cont = 1;
    
    while(cont <=3)
    {
        printf("Tente adivinhar o Numero\n");
        scanf("%s", tentativa);
        if(strcmp(numero_correto,tentativa)==0)
        {
            printf("Numero Correto\n");
           break;
        }
        else
        {
            printf("Numero Errado\n");
            cont++;
        
        }
    	if(cont == 4)
    	{
    		printf("Acesso Negado");
    	}
}
        


    
    
    
    
    
    

    return 0;
}
