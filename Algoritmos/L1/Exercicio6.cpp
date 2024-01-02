#include <iostream>
using namespace std;

main()
{
    float a, b, c;
    char opcao;
    
    do {
        cout<<"Digite um número a: ";
        cin>>a;
        cout<<"Digite um número b: ";
        cin>>b;
        cout<<"Digite um número c: ";
        cin>>c;
        
        cout<<"\na = "<<a;
        cout<<"\nb = "<<b;
        cout<<"\nc = "<<c;
        
        if (a>=b && a>c) {
            if (a != b) {
                cout<<"\na é o maior número";
            } else {
                cout<<"\na e b sao iguais e maiores";
            }
        } else if (b>a && b>=c) {
            if (b != c) {
                cout<<"\nb é o maior número";
            } else {
                cout<<"\nb e c sao iguais e maiores";
            }
        } else if (c>=a && c>b) {
            if (c != a) {
                cout<<"\nc é o maior número";
            } else {
                cout<<"\nc e a sao iguais e maiores";
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
        
    } while (opcao == 's' || opcao == 'S');
}