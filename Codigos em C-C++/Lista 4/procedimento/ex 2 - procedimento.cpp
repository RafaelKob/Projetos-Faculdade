#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#define PI 3.14

void volumeEsfera (float x) {
	float volume;
	volume = 1.33*PI*pow(x,3);
	printf ("\nO volume da esfera com o raio dado eh %.2f", volume);
}

main () {
	float r;
	
	printf ("Digite o valor do raio: ");
	scanf ("%f", &r);
	
	volumeEsfera (r);
}
