#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#define N 100

int vetor [N], i;

void preencher () {
	srand (time(NULL));
	for (i=0; i<N; i++) {
		vetor [i] = rand ()%501;
	}
}

void verificar () {
	for (i=0; i<N; i++) {
		if (vetor[i]>80) {
			printf ("%d \n",vetor [i]);
		}
	}
}

main () {
	preencher ();
	verificar ();
}

