#include <iostream>
using namespace std;
#define maxlinhas 10
#define maxcolunas 10

main()
{
    int A[maxlinhas][maxcolunas], i, j;
    
    //zerando matriz
    for (i=0; i<maxlinhas; i++) {
        for (j=0; j<maxcolunas; j++) {
            A[i][j]=0;
        }
    }
    
    for (i=0; i<maxlinhas; i++) {
        for (j=0; j<maxcolunas; j++) {
            if (i<j) {
                A[i][j]=2*i+7*j-2;
            } else if (i==j) {
                A[i][j]=3*i*i-1;
            } else if (i>j) {
                A[i][j]=4*i*i*i-5*j*j+1;
            }
        }
    }
    
    cout<<"A matriz de acordo com as funcao é: ";
    for (i=0; i<maxlinhas; i++) {
        cout<<"\n";
        for (j=0; j<maxcolunas; j++) {
            cout<<A[i][j]<<" | ";
        }
    }
}

