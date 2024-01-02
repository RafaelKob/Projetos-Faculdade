#include <iostream>
using namespace std;

main()
{
    int n1, n2, troca;
    char opcao;
    
    do {
    cout<<"Digite o primeiro número: ";
    cin>>n1;
    cout<<"Digite o segundo número: ";
    cin>>n2;
    
    troca = n1;
   
    n1 = n2;
    cout<<"O primeiro número passa a valer: "<<n1;
    n2 = troca;
    cout<<"\nO segundo número passa a valer: "<<n2;
    
    do {
        cout<<"\nDeseja repetir (S/N)?";
        cin>>opcao;
        if (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N') {
            cout<<"Erro! Digite apenas s/S ou n/N";
        } 
        } while (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');
        
    } while (opcao == 's' || opcao == 'S');
    
}