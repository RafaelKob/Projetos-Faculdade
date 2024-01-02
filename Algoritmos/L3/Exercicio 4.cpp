#include <iostream>
using namespace std;
void coletaDados ();
void mediaSal ();
void mediaNf ();
void maiorSal ();
void qtdSalarioMinimo ();
#define salariominimo 1320

float salario, somas=0.0, maior=0.0; //Nesse caso utilizou inicialmente maior igual 0 porque não há salários negativos
int nfilhos, somaf=0, np=0, cont=0;

main()
{
    coletaDados();
    mediaSal();
    mediaNf();
    maiorSal();
    qtdSalarioMinimo();
}

void coletaDados () {
    char add;
    do {
        do {
            cout<<"Digite o salario da pessoa: ";
            cin>>salario;
            if (salario<0) {
                cout<<"Erro! Não há salario negativo\n";
            }
        } while (salario<0);
        
        do {
            cout<<"Digite o numero de filhos dessa pessoa: ";
            cin>>nfilhos;
            if (nfilhos<0) {
                cout<<"Erro! Não há numero de filhos negativo\n";
            }
        } while (nfilhos<0);
        np=np+1;
        somas=somas+salario;
        somaf=somaf+nfilhos;
        if (salario>maior) {
            maior=salario;
        }
        if (salario>salariominimo){
            cont=cont+1;
        }
        
        do {
            cout<<"\nDeseja adicionar mais dados (S/N)?";
            cin>>add;
            if (add!='s' && add!='S' && add!='n' && add!='N') {
                cout<<"ERRO! Digite apenas S/s ou N/n";
            }
        } while (add!='s' && add!='S' && add!='n' && add!='N');   
    } while (add=='s' || add=='S');
        
}

void mediaSal() {
    float media;
    media=somas/np;
    cout<<"A media de salarios é: "<<media;
}

void mediaNf() {
    int media;
    media=somaf/np;
    cout<<"\nA media do numero de filhos é: "<<media;
}

void maiorSal (){
    cout<<"\nO maior salario é: "<<maior;
}

void qtdSalarioMinimo () {
    float porcent;
    porcent=((float)cont/(float)np)*100.0;
    cout<<"\nA porcentagem de pessoas com salario maior que o mínimo é: "<<porcent;
}