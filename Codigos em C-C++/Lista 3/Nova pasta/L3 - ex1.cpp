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
		gets (lista[i].titulo);
		
		printf ("\nAno de edicao: ");
		scanf ("%d", &lista[i].anoed);
		
		printf ("\nNumero de paginas: ");
		scanf ("%d", &lista[i].npag);
		somapag=somapag + lista[i].npag;
		
		printf ("\nPreco: ");
		scanf ("%f", &lista[i].preco);
		
		fflush (stdin); //para limpar os dados
		
		system ("cls");
	}
	
	for (i=0; i<n; i++) {
		printf ("Titulo: %s, Ano de edicao: %d, Numero de paginas: %d, Preco: %.2f \n\n", lista[i].titulo, lista[i].anoed, lista[i].npag, lista[i].preco);
	}
	
	media=somapag/n;
	printf ("O numero medio de paginas dos livros escolhidos é: %.2f", media);		
}