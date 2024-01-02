#include <iostream>
using namespace std;

main()
{
    float A[10], B[10];
    int i;
    
    cout<<"Digite os elementos do vetor A: ";
    for (i=0; i<10; i++) {
        cin>>A[i];
    }
    
    cout<<"O vetor A escolhido é: ";
    for (i=0; i<10; i++) {
        cout<<A[i]<<" ";
    }
    
    for (i=0; i<10; i++) {
        if (i%2==0) {
            B[i]=5*A[i];
        } else {
            B[i]=A[i]+5;
        }
    }
    
    cout<<"\nO vetor B pedido é: ";
    for (i=0; i<10; i++) {
        cout<<B[i]<<" ";
    }
}