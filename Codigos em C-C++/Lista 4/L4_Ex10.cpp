#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define N 8
void cadastrar ();
void mostrar ();
float calcularMediaPreco();
float calcularMaisLeve();

int i;
struct produto {
	char nome[50];
	float peso;
	float preco;
}p[N];

main () {
	int op;
	do {
		printf ("Digite o servico a ser realizado: \n0 - sair \n1 - Cadastrar produtos \n2 - Mostrar produtos \n3 - Medias dos preços \n4 - Produto mais leve\n");
		scanf ("%d", &op);
		
		switch (op) {
			case 0:
				break;
			case 1:
				cadastrar ();
				system ("cls");
				break;
			case 2:
				mostrar ();
				getch ();
				system ("cls");
				break;
			case 3:
				printf ("A media dos precos dos produtos eh: R$ %.2f \n", calcularMediaPreco());
				getch ();
				system ("cls");
				break;
			case 4:
				printf ("O produto mais leve eh: %.1f kg \n", calcularMaisLeve());
				getch ();
				system ("cls");
				break;
		}
	} while (op > 0 && op < 5);
}


void cadastrar () {
	for (i=0;i<N;i++) {
		system ("cls");
		fflush (stdin);
		printf ("Informe o nome do produto: ");
		fgets (p[i].nome, 50, stdin);
		printf ("Informe o peso do produto (kg): ");
		scanf ("%f", &p[i].peso);
		printf ("Informe o preco do produto (R$): ");
		scanf ("%f", &p[i].preco);
		fflush (stdin);
	}
}

void mostrar () {
	for (i=0;i<N;i++) {
		printf ("Produto %d: %s, %.1f kg, R$ %.2f\n", i, p[i].nome, p[i].peso, p[i].preco);
	}
}

float calcularMediaPreco () {
	float soma=0, media=0;
	
	for (i=0;i<N;i++) {
		soma = soma + p[i].preco;
	}
	media = soma / N;
	
	return media;
}

float calcularMaisLeve() {
	float menor;
	
	menor = p[0].peso;
	for (i=0;i<N;i++) {
		if (p[i].peso<menor) {
			menor = p[i].peso;
		}
	}

	return menor;
}
