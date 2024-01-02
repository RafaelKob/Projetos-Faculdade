#include <iostream>
using namespace std;
#define maxlinhas 3
#define maxcolunas 3

main()
{
    int matriz[maxlinhas][maxcolunas], vetorS[3]={0,0,0}, i, j, k;
    
    cout<<"Digite os elementos da matriz desejada: ";
    for (i=0; i<maxlinhas; i++) {
        for (j=0; j<maxcolunas; j++) {
            cin>>matriz[i][j];
        }
    }
    
    cout<<"\nA matriz escolhida é: ";
    for (i=0; i<maxlinhas; i++) {
        cout<<"\n";
        for (j=0; j<maxcolunas; j++) {
            cout<<matriz[i][j]<<" | ";
        }
    }
    
    for (k=0; k<3; k++) {
        for (i=0; i<maxlinhas; i++) {
            vetorS[k]=vetorS[k]+matriz[i][k];
            }
    }
    
    cout<<"\nO vetor formado pela soma de cada coluna é: { ";
    for (k=0; k<3; k++) {
        cout<<vetorS[k]<<" ";
    }
    cout<<"}";
}