#include <iostream>
using namespace std;

main()
{
    float n, r;
    char opcao;
        
    do {
        cout<<"Digite um número: ";
        cin>>n;
        
        if (n>0) {
            r=2*n;
            cout<<"Como n é positivo, obtem-se como resultado (2n):"<<r;
        }else if (n<0) {
            r=3*n;
            cout<<"Como n é negativo, obtem-se como resultado (3n):"<<r;
        }else {
            cout<<"O valor digitado foi 0, este não é classificado como positivo nem negativo";
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