#include <iostream>
using namespace std;

main()
{
    float salario, aumentoSalario;
    char opcao, cat;
    
    do {
        cout<<"\nDigite o valor do salario do funcionario: ";
        cin>>salario;
        
        do {
        cout<<"\nDigite a categoria do funcionario (A, B, C, D, E, F, H, I, J, K, R, T): ";
        cin>>cat;
        if (cat != 'a' && cat !='A' && cat != 'b' && cat !='B' &&
            cat != 'c' && cat !='C' && cat != 'd' && cat !='D' &&
            cat != 'e' && cat !='E' && cat != 'f' && cat !='F' &&
            cat != 'h' && cat !='H' && cat != 'i' && cat !='I' &&
            cat != 'j' && cat !='J' && cat != 'k' && cat !='K' &&
            cat != 'r' && cat !='R' && cat != 't' && cat !='T') {
                cout<<"Erro! Digite uma categoria valida";  
                }
        } while (cat != 'a' && cat !='A' && cat != 'b' && cat !='B' &&
                cat != 'c' && cat !='C' && cat != 'd' && cat !='D' &&
                cat != 'e' && cat !='E' && cat != 'f' && cat !='F' &&
                cat != 'h' && cat !='H' && cat != 'i' && cat !='I' &&
                cat != 'j' && cat !='J' && cat != 'k' && cat !='K' &&
                cat != 'r' && cat !='R' && cat != 't' && cat !='T');
        
        if (cat == 'a' || cat == 'A' || cat == 'c' || cat == 'C' || cat == 'f' || cat == 'F' || cat == 'h' || cat == 'H') {
            cout<<"O aumento salarial para a categoria A, C, F e H é de 10 porcento sobre o salario";
            aumentoSalario=1.10*salario;
            cout<<"\nO novo salario do funcionario sera de: "<<aumentoSalario;
        } else if (cat == 'b' || cat == 'B' || cat == 'd' || cat == 'D' || cat == 'e' || cat == 'E' || cat == 'i' || cat == 'I' || cat == 'j' || cat == 'J' || cat == 't' || cat == 'T') {
            cout<<"O aumento salarial para a categoria B, D, E, I, J e T é de 15 porcento sobre o salario";
            aumentoSalario=1.15*salario;
            cout<<"\nO novo salario do funcionario sera de: "<<aumentoSalario;
        } else if (cat == 'k' || cat == 'K' || cat == 'r' || cat == 'R') {
            cout<<"O aumento salarial para a categoria K e R é de 25 porcento sobre o salario";
            aumentoSalario=1.25*salario;
            cout<<"\nO novo salario do funcionario sera de: "<<aumentoSalario;
        }
    
    
    do {
            cout<<"\nDeseja continuar (S/N)?";
            cin>>opcao;
            if (opcao != 's' && opcao !='S' && opcao != 'n' && opcao !='N'){
                cout<<"Erro! Digite apenas s/S ou n/N";
            } 
        } while (opcao != 's' && opcao !='S'&& opcao != 'n' && opcao !='N');
        
    } while (opcao == 's' || opcao == 'S');
}