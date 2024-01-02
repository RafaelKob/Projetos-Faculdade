#include <iostream>
using namespace std;
#define a 1.33 //é a parte do "4/3" da expressão do volume
#define pi 3.14
float Vesf (float r);

float r;

main()
{
    float resultado;
    
    do {
        cout<<"\nDigite o valor do raio desejado (m): ";
        cin>>r;
        if (r<=0) {
            cout<<"Erro! Digite valores positivos";
        }
    } while (r<=0);
    
    resultado=Vesf(r);
    cout<<"O volume é igual a: "<<resultado<<" m³";
}

float Vesf (float r) {
    float volume;
    volume = a*pi*r*r*r;
    return volume;
}