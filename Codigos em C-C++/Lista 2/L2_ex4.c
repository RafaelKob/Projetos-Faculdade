#include <stdio.h>
#include <conio.h>
#include <time.h>
#define n 10

int main()
{
    int vetor1 [n], vetor2 [n], i;
    
    srand (time(NULL));
    
    printf ("Os valores do vetor escolhidos aleatoriamente: ");
    for (i=0; i<n; i++) {
        vetor1[i] = rand ()%1000;
        printf ("\t %d", vetor1[i]);
    }
    
    printf ("\nO novo vetor escrito de tras para frente: ");
    for (i=0; i<n; i++) {
        vetor2[i]=vetor1[n-1-i];
        printf ("\t %d", vetor2[i]);
    }
}

