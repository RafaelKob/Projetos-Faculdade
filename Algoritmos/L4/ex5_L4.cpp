#include <iostream>
using namespace std;
#define maxlinhas 5
#define maxcolunas 5

main()
{
    int X[maxlinhas][maxcolunas], A, cont=0, i, j;
    
    cout<<"Digite um numero para A: ";
    cin>>A;
    
    cout<<"Digite valores para a matriz X: ";
    for (i=0; i<maxlinhas; i++) {
        for (j=0; j<maxcolunas; j++) {
            cin>>X[i][j];
            if (X[i][j]==A) {
                cont=cont+1;
            }
        }
    }
    
    for (i=0; i<maxlinhas; i++) {
        cout<<"\n";
        for (j=0; j<maxcolunas; j++) {
            cout<<X[i][j]<<" | ";
        }
    }
    
    cout<<"\nO numero de vezes que o valor de A ("<<A<<") aparece na matriz é: "<<cont;
}