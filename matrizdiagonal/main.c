/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[5][5];
    
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            matriz [i][j] = i * 5 + j;
            printf("%d, ", matriz[i][j]);
          
        }
        
        printf("\n");
      
    }
    
    printf("\n\n");
    
    for (int i = 0; i < 5; i++) {
    
        for (int j = 0; j < 5; j++) {
            
            if(i == j)
            printf("%d, ", matriz[i][j]);
      
        }
    
  
    }  
    

    return 0;
}
