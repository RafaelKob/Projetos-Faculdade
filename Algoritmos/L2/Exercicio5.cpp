#include <iostream>
using namespace std;

main()
{
    float freq, nota;
    char opcao;
    
    do {
    
    do {
    cout<<"Digite a frequencia do aluno (%): ";
    cin>>freq;
    if (freq<=0 || freq>100) {
        cout<<"Erro! Digite uma frequencia valida! Intervalo de 0 a 100%\n";
    }
    } while (freq<=0 || freq>100);
    
    do {
    cout<<"Digite a nota do aluno: ";
    cin>>nota;
    if (nota<=0 || nota>10) {
        cout<<"Erro! Digite uma nota valida! Intervalo de 0 a 10\n";
    }
    } while (nota<=0 || nota>10);
   
    if (freq<75) {
        cout<<"Reprovado";
    } else if (freq>=75 && nota<3) {
        cout<<"Reprovado";
    } else if (freq>=75 && nota>=3 && nota<7) {
        cout<<"Exame";
    } else if (freq>=75 && nota>=7) {
        cout<<"Aprovado";
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
