#include <iostream>
using namespace std;

main()
{
    float A, B, C, D;
    char opcao;
    
    do {
    cout<<"Digite um valor numérico para A: ";
    cin>>A;
    cout<<"Digite um valor numérico para B: ";
    cin>>B;
    cout<<"Digite um valor numérico para C: ";
    cin>>C;
    cout<<"Digite um valor numérico para D: ";
    cin>>D;
    
    if (A>=B && A>=C && A>=D) {
        cout<<"O maior valor é: "<<A;
    } else if (B>=A && B>=C && B>=D) {
        cout<<"O maior valor é: "<<B;
    } else if (C>=A && C>=B && C>=D) {
        cout<<"O maior valor é: "<<C;
    } else if(D>=A && D>=B && D>=C) {
        cout<<"O maior valor é: "<<D;
    }
   
    if (A<=B && A<=C && A<=D) {
        cout<<"\nO menor valor é: "<<A;
    } else if (B<=A && B<=C && B<=D) {
        cout<<"\nO menor valor é: "<<B;
    } else if (C<=A && C<=B && C<=D) {
        cout<<"\nO menor valor é: "<<C;
    } else if(D<=A && D<=B && D<=C) {
        cout<<"\nO menor valor é: "<<D;
    }
    
    do {
        cout<<"\nDeseja repetir (S/N)?";
        cin>>opcao;
        if (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N') {
            cout<<"Erro! Digite apenas s/S ou n/N";
        } 
        } while (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');
        
    } while (opcao == 's' || opcao == 'S');
    
}