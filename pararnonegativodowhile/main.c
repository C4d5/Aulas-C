
#include <stdio.h>


// Implemente um programa que use um loop do-while para calcular a média de uma série de números digitados 
// pelo usuário até que ele insira um valor negativo para indicar o fim da entrada.

int main()
{
    int  numero, maior = 0, soma = 0, quantidade = 0;

    
    do {
        
        printf("Digite um Numero:\n");
        scanf("%d", &numero);
        
        
            if (numero >= 0){
                soma += numero;
                quantidade++;
            
            if (numero > maior){
                maior = numero;
                
            }
        
        }
    
    }while(numero >= 0);
    
    if(quantidade > 0) {
        double media = (double)soma / quantidade;
        printf("Maior numero: %d\n", maior);
        printf("Media dos numeros inseridos: %.2lf\n", media);
    } else {
        printf("Nenhum numero inserido.\n");
    }

    return 0;
    
    }


        

