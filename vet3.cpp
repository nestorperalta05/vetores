#include <iostream>
using namespace std;

int main (){
    
    int vetor[10];
    for (int i=0; i<10; i++){
        cin >> vetor[i];
    }

    int vetorpar[10];
    int j=0;

    for (int i=0; i<10; i++){
        if(vetor[i]%2==0){
        vetorpar[j]=vetor[i];
        j++;
        }
    }

    int maiorpar=vetorpar[0];

    for (int i=0; i<j; i++){
        if(vetorpar[i]>maiorpar){
            maiorpar=vetorpar[i];
        }
    }

    int vetormultiplode3[10];
    int k=0;

    for (int i=0; i<10; i++){
        if (vetor[i]%3==0){
            vetormultiplode3[k]=vetor[i];
            k++;
        }
        }

    int maiormultiplode3=vetormultiplode3[0];
    
    for (int i=0; i<k; i++){
        if (vetormultiplode3[i]>maiormultiplode3){
            maiormultiplode3=vetormultiplode3[i];
        }
    }

    //cout << vetorpar;
    for (int i=0; i<j; i++){
        cout << vetorpar[i] << " ";
    }
    cout << endl;

    cout << maiorpar << endl;
    //cout << vetormultiplode3;
    for (int i=0; i<k; i++){
        cout << vetormultiplode3[i] << " ";
    }
    cout << endl;
    
    cout << maiormultiplode3 << endl;
    
    return 0;
}