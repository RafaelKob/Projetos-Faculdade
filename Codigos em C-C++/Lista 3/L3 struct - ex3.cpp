#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define n 50

struct endereco {
	char rua[30], complemento [50], bairro[30], cep [15], cidade [30], estado [30], pais [30];
	int num;
};

struct telefone {
	int ddd;
	char numero[10];
};

struct dataAniv {
	int dia, mes, ano;
};

struct agenda {
	int codigo;
	char nome[30];
	char email[30];
	endereco end;
	telefone tel;
	dataAniv aniver;
	char obs[80];
};

main () {
	agenda lista[n];
	int i;
	
	for (i=0; i<n; i++) {
		printf ("Codigo: ");
		scanf ("%d", &lista[i].codigo);
		fflush (stdin);
		
		printf ("Nome: ");
		fgets (lista[i].nome, 30, stdin);
		fflush (stdin);
		
		printf ("Email: ");
		fgets (lista[i].email, 30, stdin);
		fflush (stdin);
		
		printf ("Endereco: (rua, bairro, cidade, estado, pais, cep, complemento, numero)");
		gets (lista[i].end.rua);
		gets (lista[i].end.bairro); 
		gets (lista[i].end.cidade);
		gets (lista[i].end.estado);
		gets (lista[i].end.pais);
		gets (lista[i].end.cep);
		gets (lista[i].end.complemento);
		scanf ("%d", &lista[i].end.num);
		fflush (stdin);
		
		printf ("Telefone: (ddd - numero)");
		scanf ("%d", &lista[i].tel.ddd);
		fflush (stdin);
		fgets (lista[i].tel.numero, 10, stdin);
		fflush (stdin);
		
		printf ("Data de aniversario: (dia, mes, ano)");
		scanf ("%d%d%d", &lista[i].aniver.dia, &lista[i].aniver.mes, &lista[i].aniver.ano);
		fflush (stdin);
		
		printf ("Observacao: ");
		fgets (lista[i].obs, 80, stdin);
		fflush (stdin);
		
		system ("cls");
	}
	
	printf ("A lista de todos os contatos da agenda: \n");
	for (i=0; i<n; i++) {
		printf ("Codigo: %d | Nome: %s", lista[i].codigo, lista[i].nome);
		printf ("Email: %s", lista[i].email);
		printf ("Endereco: %s, %d - %s; %s/%s - %s | %s \nComplemento: %s", lista[i].end.rua, lista[i].end.num, lista[i].end.bairro, lista[i].end.cidade, lista[i].end.estado, lista[i].end.pais, lista[i].end.cep, lista[i].end.complemento);
		printf ("\nTelefone: (%d) %s | Data de aniversario: %d/%d/%d", lista[i].tel.ddd,lista[i].tel.numero, lista[i].aniver.dia, lista[i].aniver.mes, lista[i].aniver.ano);
		printf ("\nOBS: %s \n\n", lista[i].obs);
	}		
}