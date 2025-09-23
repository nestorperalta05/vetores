#include <iostream>
using namespace std;
 
int main (){
    float vetor[16];
    int n;
    float somatorio;

    //ler vetor
    for (int i=0; i<16; i++){
        cin>>vetor[i];
    }   

    //ler n
    cin >> n;

    //calcular somatorio de vetor[n]
    for (int i=0; i<n; i++){
        somatorio+=vetor[i];
    }

    cout<<somatorio;
   return 0; 
}