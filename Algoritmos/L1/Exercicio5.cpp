#include <iostream>
#include <string>
using namespace std;
#define X 1
#define A 3 
#define B 5
#define C 8 
#define D 7

main()
{
    string resposta;
    
    if (A>B || C>B) {
        resposta = "Verdadeiro";
        cout<<"a)A>B ou C>B --> ";
        cout<<"Resposta: "<<resposta<<"\n";
    } else {
        resposta = "Falso";
        cout<<"a)A>B ou C>B --> ";
        cout<<"Resposta: "<<resposta<<"\n";
    }
    
    if (X>=2) {
        resposta = "Verdadeiro";
        cout<<"b)X>=2 --> ";
        cout<<"Resposta: "<<resposta<<"\n";
    } else {
        resposta = "Falso";
        cout<<"b)X>=2 --> ";
        cout<<"Resposta: "<<resposta<<"\n";
    }
    
    if (X<1 && B>=D) {
        resposta = "Verdadeiro";
        cout<<"c) X<1 e B>=D --> ";
        cout<<"Resposta: "<<resposta<<"\n";
    } else {
        resposta = "Falso";
        cout<<"c)X<1 e B>=D --> ";
        cout<<"Resposta: "<<resposta<<"\n";
    }
    
    if (D<0 || C>5) {
        resposta = "Verdadeiro";
        cout<<"d)D<0 ou C>5 --> ";
        cout<<"Resposta: "<<resposta<<"\n";
    } else {
        resposta = "Falso";
        cout<<"d)D<0 ou C>5 --> ";
        cout<<"Resposta: "<<resposta<<"\n";
    }
}