#include <iostream>
using namespace std;
float tipoTriang (float x, float y, float z);

float x, y, z;
int tipo;

main()
{
    do {
        cout<<"\nDigite o valor do primeiro lado do triangulo:";
        cin>>x;
        cout<<"Digite o valor do segundo lado do triangulo:";
        cin>>y;
        cout<<"Digite o valor do terceiro lado do triangulo:";
        cin>>z;
        if (x<=0 || y<=0 || z<=0) {
            cout<<"Erro!! Digite valores positivos\n";
        }
        if (x+y<z || x+z<y || y+z<x) {
            cout<<"Erro!! A soma de dois lados não pode ser maior que o terceiro lado";
        }
    } while (x<=0 || y<=0 || z<=0 || x+y<z || x+z<y || y+z<x);
    
    tipoTriang(x,y,z);
    
    switch (tipo) {
        case 1:
        cout<<"É um triangulo equilatero";
        break;
        
        case 2:
        cout<<"É um triangulo isocelis";
        break;
        
        case 3:
        cout<<"É um triangulo escaleno";
        break;
    }
}

float tipoTriang (float x, float y, float z) {
    if(x==y && y==z && x==z) {
        tipo=1;
        return tipo;
    } else if ((x==y && x!=z) || (x==z && x!=y) || (y==z && y!=x)) {
        tipo=2;
        return tipo;
    } else {
        tipo=3;
        return tipo;
    }
}