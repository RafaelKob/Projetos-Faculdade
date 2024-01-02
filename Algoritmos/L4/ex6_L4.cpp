#include <iostream>
using namespace std;
#define maxlinhas 10
#define maxcolunas 10

main()
{
    float matriz[maxlinhas][maxcolunas], maior, lMaior=0, cMaior=0;
    int i, j;
    
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
    
    maior=matriz[0][0];
    for (i=0; i<maxlinhas; i++) {
        for (j=0; j<maxcolunas; j++) {
            if (matriz[i][j]>maior) {
                maior=matriz[i][j];
                lMaior=i;
                cMaior=j;
            }
        }
    }
    cout<<"\nO maior valor da matriz é: "<<maior<<" e encontra-se primeiramente na linha: "<<lMaior<<" e na coluna: "<<cMaior;
}
