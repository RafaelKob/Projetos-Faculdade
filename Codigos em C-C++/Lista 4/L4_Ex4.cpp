#include <stdio.h>
#include <conio.h>
#include <windows.h>
void cadastrar ();
void exibir ();

struct cliente {
	int codigo;
	char nome [50];
	char rg[12];
}c; //c é a variavel global, poderia ser escrito na linha abaixo como "cliente c"

main () {
	int op;
	do {
		system ("cls");
		printf ("0 - sair\n 1 - cadastrar\n 2 - exibir\n\n\n");
		scanf ("%d", &op);
		switch (op) {
			case 1:
				cadastrar ();
				break;
			case 2:
				exibir ();
				break;
		}
	} while (op>0 && op<3);
}

void cadastrar () {
	system ("cls");
	printf ("Codigo do cliente: ");
	scanf ("%d", &c.codigo);
	fflush (stdin);
	printf ("Nome do cliente: ");
	gets(c.nome);
	printf ("RG do cliente: ");
	gets (c.rg);
}

void exibir () {
	system ("cls");
	printf ("Codigo do cliente: %d", c.codigo);
	printf ("\nNome do cliente: %s", c.nome);
	printf ("\nIdade: %s", c.rg);
	getch ();
}
