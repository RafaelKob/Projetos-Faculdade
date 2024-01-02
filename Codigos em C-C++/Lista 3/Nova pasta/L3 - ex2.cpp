#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define n 5

struct aluno {
	char matricula [15];
	char nome [40];
	float n1;
	float n2;
};

main () {
	aluno lista[n];
	int i, imaiorn1;
	float maiorn1=0, maiorMedia=0, menorMedia=0;
	
	for (i=0; i<n; i++) {
		printf ("Matricula do aluno: ");
		gets (lista[i].matricula);
		
		printf ("Nome do aluno: ");
		gets (lista[i].nome);
		
		printf ("Nota n1 do aluno: ");
		scanf ("%.2f", &lista[i].n1);
		if (maiorn1<lista[i].n1) {
			maiorn1 = lista[i].n1;
			imaiorn1 = i;
		}
		
		printf ("Nota n2 do aluno: ");
		scanf ("%.2f", &lista[i].n2);
	}
	
	printf ("O aluno com maior nota na primeira prova foi: %s", lista[imaiorn1].nome);
}