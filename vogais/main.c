/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


//Escreva um programa em C que peça ao usuário para digitar uma frase e conte o número de vogais (A, E, I, O, U) na frase.

int main()
{
    
    char frase[1000];
    int vogal = 0;
    
    printf("Escreva uma Frase\n");
    fgets(frase, sizeof(frase), stdin); //
    
    for (int i = 0; frase[i] != '\0'; i++) {
        char letra = frase[i];
        // Verifique se a letra é uma vogal minúscula ou maiúscula
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            vogal++;
        }
    }

    printf("Você escreveu um total de %d vogais na frase.\n", vogal);

    return 0;
}
