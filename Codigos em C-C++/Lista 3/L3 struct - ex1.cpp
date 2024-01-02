#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define n 5

struct livro {
	char titulo[50];
	int anoed;
	int npag;
	float preco;	
};

main () {
	livro lista[n];
	int i, somapag=0;
	float media=0;
	
	for (i=0; i<n; i++) {
		
		printf ("Titulo do livro: ");
		fgets (lista[i].titulo, 50, stdin);
		
		printf ("Ano de edicao: ");
		scanf ("%d", &lista[i].anoed);
		
		printf ("Numero de paginas: ");
		scanf ("%d", &lista[i].npag);
		somapag=somapag + lista[i].npag;
		
		printf ("Preco: ");
		scanf ("%f", &lista[i].preco);
		
		fflush (stdin); //para limpar dados temporarios nas variaveis que atrapalhem o fluxo de entrada de dados em char
		
		system ("cls");
	}
	
	for (i=0; i<n; i++) {
		printf ("Titulo: %sAno de edicao: %d, Numero de paginas: %d, Preco: %.2f \n\n", lista[i].titulo, lista[i].anoed, lista[i].npag, lista[i].preco);
	}
	
	media=(float(somapag)/float(n));
	printf ("\nO numero medio de paginas dos livros escolhidos é: %.2f", media);		
}
