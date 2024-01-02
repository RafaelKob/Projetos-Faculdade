#include <iostream>
using namespace std;

main()
{
    int n, r;
    char opcao;
    do {
        cout<<"Insira um numero: ";
        cin>>n;
         
        r=n%2;
        if(n>0 && r == 0){
            cout<<"O numero é par e positivo\n\n";
        }else if (n>0 && r != 0){
            cout<<"O numero é impar e positivo\n\n";
        }else if (n<0 && r == 0){
            cout<<"O numero é par e negativo\n\n";
        }else if (n<0 && r != 0){
            cout<<"O numero é impar e negativo\n\n";
        }else{
            cout<<"Seu numero e zero, um numero neutro\n\n";
        }
    
        do{
            cout<<"Deseja repetir (S/N)?";
            cin>> opcao;
            if (opcao !='S' && opcao !='s' && opcao !='N' && opcao != 'n'){
            	cout <<"Erro! Apenas N ou S\n\n";}
        }while (opcao != 'S' && opcao != 's' && opcao != 'N' && opcao!='n');
     
    }while (opcao == 's' || opcao=='S');
}