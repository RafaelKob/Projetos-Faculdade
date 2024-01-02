#include <stdio.h>
#include <conio.h>
#include <time.h>
#define n 12

main()
{
    int vetor [n], i, x, y, soma;
    
    srand (time(NULL));
    
    printf ("Os numeros do vetor escolhidos de forma aleatoria foram: ");
    for (i=0; i<n; i++) {
        vetor[i] = rand ()%1000; 
        printf ("\t %d", vetor[i]);
    }
    
    x = rand ()%12; //posição aleatoria de 0 a 11;
    y = rand ()%12;
    soma = vetor[x] + vetor[y];
    printf ("\nA soma de dois valores de posiçoes aleatorias (%d e %d) do vetor é: %d", x, y, soma);
    
}

