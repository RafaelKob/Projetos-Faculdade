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
	int i, imaiorn1=0, imaiormedia, imenormedia;
	float maiorn1=0, media[n], maiorMedia, menorMedia; //como não existe nota negativa, maior pode ser igual a 0 inicialmente
	
	for (i=0; i<n; i++) {
		printf ("Matricula do aluno: ");
		fgets (lista[i].matricula, 15, stdin);
		fflush (stdin);
		
		printf ("Nome do aluno: ");
		fgets (lista[i].nome, 40, stdin);
		fflush (stdin);
		
		do {
		printf ("Nota n1 do aluno: ");
		scanf ("%f", &lista[i].n1);
		} while (lista[i].n1<0.0 || lista[i].n1>10.0);
		fflush (stdin);
		
		if (lista[i].n1>maiorn1) {
			imaiorn1 = i;
			maiorn1 = lista[i].n1;
		}	
		
		do {
		printf ("Nota n2 do aluno: ");
		scanf ("%f", &lista[i].n2);
		} while (lista[i].n2<0.0 || lista[i].n2>10.0);
		fflush (stdin);
		
		media[i] = (lista[i].n1 + lista[i].n2)/2;
		
		system ("cls");
	}
	
	maiorMedia = media[0];
	imaiormedia = 0;
	menorMedia = media[0];
	imenormedia = 0;
	for (i=0; i<n; i++) {
		if (media[i]>maiorMedia) {
			imaiormedia = i;
			maiorMedia = media[i];
		}
		
		if (media[i]<menorMedia) {
			imenormedia = i;
			menorMedia = media[i];
		}
	}	

	printf ("A maior nota na primeira prova foi: %.2f. E o aluno com maior nota na primeira prova foi: %s", maiorn1, lista[imaiorn1].nome);
	printf ("\nA maior media geral foi: %.2f. E o aluno com maior media geral foi: %s", maiorMedia, lista[imaiormedia].nome);
	printf ("\nA menor media geral foi: %.2f. E o aluno com menor media geral foi: %s", menorMedia, lista[imenormedia].nome);
	
	printf ("\nA seguir a lista de alunos aprovados e reprovados: \n");
	for (i=0; i<n; i++) {
		if (media[i]<6.0) {
			printf ("Reprovado - Aluno/a %s", lista[i].nome);
		} else {
			printf ("Aprovado - Aluno/a %s", lista[i].nome);
		}
	}
}
