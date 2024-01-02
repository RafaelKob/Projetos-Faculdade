#include <iostream>
using namespace std;

main()
{
    float alt, peso, imc;
    char opcao;
    
    do {
    
    do {
    cout<<"Digite a sua altura (cm): ";
    cin>>alt;
    if (alt<0 || alt>250) {
        cout<<"Erro! Digite uma altura valida em centimetro\n";
    }
    } while (alt<0 || alt>250);
    
    do {
    cout<<"Digite o seu peso (kg): ";
    cin>>peso;
    if (peso<0) {
        cout<<"Erro! Digite um peso valido em kilograma\n";
    }
    } while (peso<0);
    
    alt=alt/100;
    imc=peso/(alt*alt);
   
    
    if (imc<20) {
        cout<<"O IMC vale: "<<imc;
        cout<<"\nEncontra-se abaixo do peso";
    } else if (imc>=20 && imc<25) {
        cout<<"O IMC vale: "<<imc;
        cout<<"\nEncontra-se em peso normal";
    } else if (imc>=25 && imc<30) {
        cout<<"O IMC vale: "<<imc;
        cout<<"\nEncontra-se sobrepeso";
    } else if (imc>=30 && imc<40) {
        cout<<"O IMC vale: "<<imc;
        cout<<"\nEncontra-se obeso";
    } else {
        cout<<"O IMC vale: "<<imc;
        cout<<"\nEncontra-se obeso mórbido";
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