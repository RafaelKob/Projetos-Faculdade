#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define N 100

int vetor [N];

void preencher () {
	int i;
	for (i=0; i<N; i++) {
		vetor [i] = rand ();
	}
}

void verificar () {
	for (i=0; i<N; i++) {
		if (vetor[i]>80) {
			printf ("%d \t",vetor [i]);
		}
	}
}

main () {
	preencher ();
	verificar ();
}
