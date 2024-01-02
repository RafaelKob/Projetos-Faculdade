#include <stdio.h>
#include <conio.h>
#include <time.h>
#define n 6

main()
{
    float vetor[n], maior, menor, soma=0, media;
    int i;
    
    srand (time(NULL));
    
    for (i=0; i<n; i++) {
        vetor[i]= rand()%1000;
    }
    
    maior = vetor[0];
    menor = vetor[0];
    printf ("Os valores escolhidos aleatoriamente para o vetor foram: ");
    for (i=0; i<n; i++) {
        printf ("\t %.1f", vetor[i]);
        soma=soma+vetor[i];
        if (menor>vetor[i]) {
            menor = vetor[i];
        }
        if (maior<vetor[i]) {
            maior = vetor [i];
        }    
    }
    
    media=soma/n;
    
    printf ("\nA media dos valores do vetor escolhido: %.2f, o maior valor do vetor escolhido: %.1f e o menor valor do vetor escolhido: %.1f", media, maior, menor);
}
