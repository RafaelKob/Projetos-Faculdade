#include <stdio.h>
#include <conio.h>
#include <windows.h>

void subtrair (float x, float y) {
	float r;
	r = x - y;
	printf ("\nO valor da subtracao do primeiro valor pelo segundo valor eh: %.2f", r);
}

main () {
	float n1, n2;
	
	printf ("Digite o primeiro numero: ");
	scanf ("%f", &n1);
	printf ("Digite o segundo numero: ");
	scanf ("%f", &n2);
	
	subtrair (n1, n2);
}
