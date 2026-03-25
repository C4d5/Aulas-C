/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int aux, maior, menor, negativo = 0, i;
    float media = 0.0;
 
    
    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero\n");
        scanf("%d", &aux);
        if(i == 0){
            maior = aux;
            menor = aux; 
        }
        if(aux > maior){
            maior = aux;
        }
        if(aux < menor){
            menor = aux;
        }
        if(aux < 0){
            negativo++;
        }
        media = media + aux/5.0;
    }
    
    printf("O maior numero digitado foi %d\n", maior);
    printf("O menor numero digitado foi %d\n", menor);
    printf("A quantidade de negativos é %d\n", negativo);
    printf("A media é %.2f\n", media);

    
    return 0;
}

