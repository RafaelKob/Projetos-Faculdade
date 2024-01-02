#include <iostream>

using namespace std;

main()
{
    int A, B, C;
    char opcao;
    
    do {
        cout<<"Digite um numero inteiro para A: ";
        cin>>A;
        cout<<"Digite um numero inteiro para B: ";
        cin>>B;
        
        if (A == B) {
            C=A+B;
            cout<<"Como A é igual a B, atribui-se o valor da soma a variavel C. Então, C vale: "<<C;
        }else {
            C=A*B;
            cout<<"Como A é diferente de B, atribui-se o valor da multiplicação a variavel C. Então, C vale: "<<C;
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
