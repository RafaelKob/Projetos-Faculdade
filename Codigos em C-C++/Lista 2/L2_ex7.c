#include <stdio.h>
#include <conio.h>
#include <time.h>
#define n 10

main () {
    float notas[n], soma=0, mturma;
    int i, cont=0;
    
    srand (time(NULL));
    
    printf ("As notas dos alunos informadas foram: ");
    for (i=0;i<n;i++) {
        notas[i] = rand ()%11;
        printf ("\t %.2f", notas[i]);
        soma=soma+notas[i];
    }
    
    mturma=soma/n;

    for (i=0;i<n;i++) {
        if (notas[i]>mturma) {
            cont=cont+1;
        }
    }
    
    printf ("\nA media da turma obtida foi %.2f, e a quantidade de alunos aprovados foram %d", mturma, cont);
}

