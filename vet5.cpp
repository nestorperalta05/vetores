#include <iostream>
using namespace std;

int main (){
    float vetor[10];
    for (int i=0; i<10; i++){
        cin >> vetor[i];
    }

    int qtdpositivo=0;

    //verificar numero de positivos
    for (int i=0; i<10; i++){
        if (vetor[i]>0){
            qtdpositivo++;
        }
    }

    float somanegativos=0;
    //somar numeros negativos
    for (int i=0; i<10; i++){
        if (vetor[i]<0){
            somanegativos+=vetor[i];
        }
    }

    cout<<qtdpositivo<<endl;
    cout<<somanegativos<<endl;
return 0;
}