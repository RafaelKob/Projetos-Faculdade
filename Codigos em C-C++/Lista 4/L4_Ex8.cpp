#include <stdio.h>
#include <conio.h>
#include <windows.h>

char conceito (float media) {
	if (media >= 0.0 && media <= 4.9) {
		return 'D';
	} else if (media > 4.9 && media < 5.0) {
		if (media <= 4.946) {
			printf ("A media final foi aproximada para 4.9\n");
			return 'D';	
		} else {
			printf ("A media final foi aproximada para 5.0\n");
			return 'C';	
		}	
	} else if (media >= 5.0 && media <= 6.9) {
		return 'C';
	} else if (media > 6.9 && media < 7.0) {
		if (media<=6.946) {
			printf ("A media final foi aproximada para 6.9\n");
			return 'C';	
		} else {
			printf ("A media final foi aproximada para 7.0\n");
			return 'B';	
		}	
	} else if (media >= 7.0 && media <= 8.9) {
		return 'B';
	} else if (media > 8.9 && media < 9.0) {
		if (media<=8.946) {
			printf ("A media final foi aproximada para 8.9\n");
			return 'B';	
		} else {
			printf ("A media final foi aproximada para 9.0\n");
			return 'A';	
		}	
	} else if (media >= 9.0 && media <= 10.0) {
		return 'A';
	}
}

main () {
	float media;
	
	do {
		printf ("Informe a media final do aluno: ");
		scanf ("%f", &media);
	} while (media<0.0 || media>10.0);
	
	printf ("O conceito do aluno informado eh %c", conceito (media));
}
