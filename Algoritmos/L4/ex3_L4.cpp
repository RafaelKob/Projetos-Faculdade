#include <iostream>
using namespace std;

main()
{
    int A[10], B[10], troca;
    int i;
    
    cout<<"Digite os elementos do vetor A: ";
    for (i=0; i<10; i++) {
        cin>>A[i];
    }
    
    cout<<"O vetor A escolhido é: ";
    for (i=0; i<10; i++) {
        cout<<A[i]<<" ";
    }
    
    cout<<"\nDigite os elementos do vetor B: ";
    for (i=0; i<10; i++) {
        cin>>B[i];
    }
    
    cout<<"O vetor B escolhido é: ";
    for (i=0; i<10; i++) {
        cout<<B[i]<<" ";
    }
     
    for (i=0; i<10; i++) {
        troca=B[9-i];
		B[9-i]=A[i];
		A[i]=troca;
    }
    
    cout<<"\nO vetor A apos a troca: ";
    for (i=0; i<10; i++) {
        cout<<A[i]<<" ";
    }
    
    cout<<"\nO vetor B apos a troca: ";
    for (i=0; i<10; i++) {
        cout<<B[i]<<" ";
    }
}