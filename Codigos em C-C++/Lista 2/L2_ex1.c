#include <stdio.h>
#include <conio.h>
#include <time.h>
#define n 10

main()
{
    int vetor[n], i;
    
    srand (time(NULL));
    
    printf ("Os valores do vetor encontrado randomicamente sao: ");
    for (i=0; i<n; i++) {
        vetor[i]=rand ()%1000;
        printf("\t %d", vetor[i]);
    }
    
    printf ("\nOs valores impares são: ");
    for (i=0; i<n; i++) {
        if (vetor[i]%2 != 0) {
            printf ("\t %d",vetor[i]);
        }
    }
}

