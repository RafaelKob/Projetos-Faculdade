#include <stdio.h>
#include <conio.h>
#include <windows.h>

void verificar (int x) {
	if ((x%4 == 0 && x%100 != 0) || x%400 == 0) {
		printf ("O ano escolhido eh bissexto");
	} else {
		printf ("O ano escolhido nao eh bissexto");
	}
}

main () {
	int ano;
	
	do {
		printf ("Escolha um ano: ");
		scanf ("%d", &ano);
	} while (ano<=0 || ano>2023);
	
	verificar (ano);
}
