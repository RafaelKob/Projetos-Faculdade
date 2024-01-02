#include <stdio.h>
#include <conio.h>
#include <windows.h>


void verificarCat (int x) {
	if (x>=5 && x<=7) {
		printf ("O nadador pertence a categoria infantil A");
	} else if (x>=8 && x<=10) {
		printf ("O nadador pertence a categoria infantil B");
	} else if (x>=11 && x<=13) {
		printf ("O nadador pertence a categoria juvenil A");
	} else if (x>=14 && x<=17) {
		printf ("O nadador pertence a categoria juvenil B");
	} else if (x>=18) {
		printf ("O nadador pertence a categoria adulto");
	} else {
		printf ("Muito novo, nao pertence a nenhuma categoria");
	}
}

main () {
	int idade;
	
	printf ("Digite a idade do nadador: ");
	scanf ("%d", &idade);
	
	verificarCat (idade);
}
