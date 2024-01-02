#include <iostream>
using namespace std;
int transformacao (int a, int m, int d);

int a, m, d, meses, restod, ano, restom;
char tipomed;

main()
{
    do {
        cout<<"\nDigite os dias da idade da pessoa: ";
        cin>>d;
        if (d<0 || d>=30) {
            cout<<"Erro! Apenas valores de dias entre 0 e 30";
            if (d>=30) {
                meses=d/30;
                restod=d-30;
                cout<<"\nComo utilizou mais que 30 dias, é necessario adicionar em meses a quantidade de: "<<meses;
                cout<<"\nO valor de dias que deve ser colocado é: "<<restod;
            }
        }
    } while (d<0 || d>=30);
    
    do {
        cout<<"\nDigite os meses da idade da pessoa: ";
        cin>>m;
        if (m<0 || m>=12) {
            cout<<"Erro! Apenas valores de meses entre 0 e 12";
            if (m>=12) {
                ano=m/12;
                restom=m-12;
                cout<<"\nComo utilizou mais que 12 meses, é necessario adicionar em anos a quantidade de: "<<ano;
                cout<<"\nO valor de meses que deve ser colocado é: "<<restom;
            }
        }
    } while (m<0 || m>=12);
    
    do {
        cout<<"\nDigite os anos da idade da pessoa: ";
        cin>>a;
        if (a<0) {
            cout<<"Erro! Digite idade em anos valida";
        }
    } while (a<0);
    
    cout<<"A idade equivalente da pessoa em dias é: "<<transformacao(a,m,d);
}

int transformacao (int a, int m, int d) {
    int idadeDias;
    idadeDias=365*a+30*m+d;
    return idadeDias;
}

