#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int dado () {
	srand (time(NULL)); 
	
	return rand ()%6 + 1;
}

main () {
	printf ("O numero (1 a 6) escolhido randomicamente foi: %d", dado());
}
