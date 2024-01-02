#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#define N 100
void preencher ();
void verificar ();

int vetor [N], i;

main () {
	preencher ();
	verificar ();
}

void preencher () {
	srand (time(NULL));
	for (i=0; i<N; i++) {
		vetor [i] = rand ()%501; //para ter um intervalo que não gere apenas valores acima de 80 e muito grandes
	}
}

void verificar () {
	printf ("Os numeros maiores que 80 obtidos randomicamente: \n");
	for (i=0; i<N; i++) {
		if (vetor[i]>80) {
			printf ("%d \n",vetor [i]);
		}
	}
}
