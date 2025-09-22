#include <iostream>
using namespace std;

int main (){
    float vet[7];
    float somatemperatura=0;
    
    for (int i=0; i<7; i++){
        
        cin>>vet[i];
        somatemperatura+=vet[i];
    }
    
    float mediat=somatemperatura/7;
    int diasacimadamedia=0;

    for (int i=0; i<7; i++){
        if (vet[i]>mediat)
        diasacimadamedia++;
}

    float maiortemperatura=vet[0];
    for (int i=0; i<7; i++){
        if (vet[i]>maiortemperatura)
        maiortemperatura=vet[i];        
}    

cout<<mediat<<endl;
cout<<diasacimadamedia<<endl;
cout<<maiortemperatura<<endl;

return 0;
}