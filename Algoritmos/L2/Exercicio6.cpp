#include <iostream>
using namespace std;

main()
{
    float n1, n2, l1, l2, media;
    char tipoAluno, opcao;
    
    do {
    
    do {
    cout<<"Digite a primeira nota do aluno: ";
    cin>>n1;
    cout<<"Digite a segunda nota do aluno: ";
    cin>>n2;
    if (n1<=0 || n1>10 || n2<=0 || n2>10) {
        cout<<"Erro! Digite notas validas! Intervalo de 0 a 10\n";
    }
    } while (n1<=0 || n1>10 || n2<=0 || n2>10);
    
    
    do {
    cout<<"Digite se o aluno é regular ou especial (R/E): ";
    cin>>tipoAluno;
    if (tipoAluno != 'R' && tipoAluno != 'r' && tipoAluno != 'E' && tipoAluno != 'e') {
        cout<<"Erro! Digite apenas R para regular e E para especial\n";
    }
    } while (tipoAluno != 'R' && tipoAluno != 'r' && tipoAluno != 'E' && tipoAluno != 'e');
    
    switch (tipoAluno)
    {
        case 'R': case 'r':
            do {
            cout<<"Digite a primeira nota de lista do aluno: ";
            cin>>l1;
            cout<<"Digite a segunda nota de lista do aluno: ";
            cin>>l2;
            if (l1<=0 || l1>10 || l2<=0 || l2>10) {
                cout<<"Erro! Digite notas validas! Intervalo de 0 a 10\n";
            }
            } while (l1<=0 || l1>10 || l2<=0 || l2>10);
            media=((n1+n2)/2)*0.7 + ((l1+l2)/2)*0.3;
            cout<<"A media do aluno é: "<<media;
            if (media>=6) {
                cout<<"\nAprovado!";
            } else {
                cout<<"\nReprovado!";
            } break;
        
        case 'E': case 'e':
            media=(n1+n2)/2;
            cout<<"A media do aluno é: "<<media;
            if (media>=6) {
                cout<<"\nAprovado!";
            } else {
                cout<<"\nReprovado!";
            } break;
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