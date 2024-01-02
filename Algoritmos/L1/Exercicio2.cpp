#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float n, r;
    char opcao;
    
    do {
        cout<<"Digite um número qualquer: ";
        cin>>n;
        
        if (n>=0) {
            r=sqrt(n);
            cout<<"A raiz quadrada do número é: "<<r;
        }else {
            cout<<"Não existe raiz quadrada de numero negativo no conjunto dos reais";
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