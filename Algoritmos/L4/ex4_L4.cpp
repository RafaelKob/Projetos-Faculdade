#include <iostream>
using namespace std;

main()
{
    int vetor[10], troca;
    int i;
    
    cout<<"Digite os elementos do vetor A: ";
    for (i=0; i<10; i++) {
        cin>>vetor[i];
    }
    
    cout<<"O vetor escolhido é: ";
    for (i=0; i<10; i++) {
        cout<<vetor[i]<<" ";
    }
      
    for (i=0; i<5; i++) {
        troca=vetor[9-i];
        vetor[9-i]=vetor[i];
        vetor[i]=troca;
    }
    
    cout<<"\nO vetor apos a troca: ";
    for (i=0; i<10; i++) {
        cout<<vetor[i]<<" ";
    } 
}