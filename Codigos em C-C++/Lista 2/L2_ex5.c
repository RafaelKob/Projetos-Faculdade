#include <stdio.h>
#include <conio.h>
#define n 10


int main()
{
    float tempF [n], tempC [n];
    int i;
    
    printf ("Informe as temperaturas em Farenheit a serem transformadas: ");
    for (i=0; i<n; i++) {
        scanf ("%f", &tempF[i]);
    }
    
    printf ("\nO vetor contendo as temperaturas convertidas em Celsius: ");
    for (i=0; i<n; i++) {
        tempC[i] = (tempF[i]-32)/1.8;
        printf ("\t %.1f", tempC[i]);
    }
}
