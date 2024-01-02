#include <iostream>
using namespace std;

main()
{
    int a, b, c;
    char opcao;
    
    do {
        cout<<"Digite um número a: ";
        cin>>a;
        cout<<"Digite um número b: ";
        cin>>b;
        cout<<"Digite um número c: ";
        cin>>c;
        
        if (a<=b && a<c) {
            if (a != b) {
                cout<<"\na é o menor número";
            } else {
                cout<<"\na e b sao iguais e menores";
            }
        } else if (b<a && b<=c) {
            if (b != c) {
                cout<<"\nb é o menor número";
            } else {
                cout<<"\nb e c sao iguais e menores";
            }
        } else if (c<=a && c<b) {
            if (c != a) {
                cout<<"\nc é o menor número";
            } else {
                cout<<"\nc e a sao iguais e menores";
            }
        } else {
            cout<<"\na, b e c sao iguais";
        }
        
    
        do {
            cout<<"\nDeseja repetir (S/N)?";
            cin>>opcao;
            if (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N') {
                cout<<"Erro! Digite apenas S/s ou N/n";
            }
        }while (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');
        
    }while (opcao == 's' || opcao == 'S');
}