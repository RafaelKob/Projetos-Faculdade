#include <iostream>
using namespace std;

main()
{
    int A[6]={1,0,5,-2,-5,7}, soma=0, i;
    
    soma=A[0]+A[1]+A[5];
    cout<<"A soma de A[0]+A[1]+A[5] é: "<<soma<<"\n\n";
    
    A[4]=100;
    
    cout<<"O novo vetor é:\n";
    for (i=0; i<6; i++) {
        cout<<A[i]<<"\n";
    }
}