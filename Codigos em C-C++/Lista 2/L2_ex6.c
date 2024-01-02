#include <stdio.h>
#include <conio.h>
#define n 10

main () {
    float vetor[n], soma=0;
    int i;
    
    printf ("Informe os valores do vetor desejado: ");
    for (i=0;i<n;i++) {
        scanf ("%f", &vetor[i]);
    }
    
    printf ("O vetor escolhido foi: ");
    for (i=0;i<n;i++) {
        printf ("\t %.2f", vetor[i]);
        if (vetor[i]>0 && i%2==0) {
            soma=soma+vetor[i];
        }
    }
    
    printf ("\nA soma dos valores positivos que ocupam a posição par no vetor escolhido resulta em: %.2f", soma);
}