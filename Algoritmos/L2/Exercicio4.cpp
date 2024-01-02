#include <iostream>
#include <math.h>
using namespace std;

main()
{
    float x, funcao;
    char opcao;
    
    do {
    
    
    cout<<"Digite um valor numerico para x: ";
    cin>>x;
   
    if (x<=1) {
        funcao=1;
        cout<<"f(x)= "<<funcao;
    } else if (x>1 && x<=2) {
        funcao=2;
        cout<<"f(x)= "<<funcao;
    } else if (x>2 && x<=3) {
        funcao=pow(x,2);
        cout<<"f(x)= x²\n";
        cout<<"f(x)= "<<funcao;
    } else if (x>3) {
        funcao=pow(x,3);
        cout<<"f(x)= x³\n";
        cout<<"f(x)= "<<funcao;
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