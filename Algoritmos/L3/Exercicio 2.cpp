#include <iostream>
using namespace std;
void medArit (float n1, float n2, float n3);
void medPond (float n1, float n2, float n3);
void medHarm (float n1, float n2, float n3);

float n1, n2, n3;
char tipomed;

main()
{
    do {
        cout<<"\nDigite a nota 1 do aluno: ";
        cin>>n1;
        cout<<"Digite a nota 2 do aluno: ";
        cin>>n2;
        cout<<"Digite a nota 3 do aluno: ";
        cin>>n3;
        if ((n1<0 || n1>10) || (n2<0 || n2>10) || (n3<0 || n3>10)) {
            cout<<"Erro! Digite notas validas entre 0 e 10";
        }
    } while ((n1<0 || n1>10) || (n2<0 || n2>10) || (n3<0 || n3>10));
    
    do {
        cout<<"\nDigite o tipo de media a ser calculada (A, P e H): ";
        cin>>tipomed;
        if (tipomed != 'a' && tipomed != 'A' && tipomed != 'p' && tipomed != 'P' && tipomed != 'h' && tipomed != 'H') {
            cout<<"ERRO! Digite uma opcao valida (A, P, H)";
        }
    } while (tipomed != 'a' && tipomed != 'A' && tipomed != 'p' && tipomed != 'P' && tipomed != 'h' && tipomed != 'H');
    
    switch (tipomed) {
        case 'a': case 'A':
        medArit(n1,n2,n3);
        break;
        
        case 'p': case 'P':
        medPond(n1,n2,n3);
        break;
        
        case 'h': case 'H':
        medHarm(n1,n2,n3);
        break;
    }
    
}

void medArit (float n1, float n2, float n3) {
    float medAr;
    medAr=(n1+n2+n3)/3;
    cout<<"O resultado da media aritmetica é igual a: "<<medAr;
}

void medPond (float n1, float n2, float n3) {
    float medP;
    medP=(5*n1+3*n2+2*n3)/8;
    cout<<"O resultado da media aritmetica é igual a: "<<medP;
}

void medHarm (float n1, float n2, float n3) {
    float medH;
    medH=3/((1/n1)+(1/n2)+(1/n3));
    cout<<"O resultado da media aritmetica é igual a: "<<medH;
}
