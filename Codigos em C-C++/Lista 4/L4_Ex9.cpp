#include <stdio.h>
#include <conio.h>
#include <windows.h>
void mostrar ();
float calcular (float n);

main () {
	mostrar ();
}

float calcular (float numero) {
	return 10*numero;
}

void mostrar () {
	float n;
	
	printf ("Informe um numero real a ser multiplicado: ");
	scanf ("%f", &n);
	
	printf ("\n\nO resultado obtido pela multiplicacao por 10 eh: %.2f", calcular (n));	
}
