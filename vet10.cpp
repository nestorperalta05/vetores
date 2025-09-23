#include <iostream>
using namespace std;

int main (){
    
    // ler numeros inteiros
    int vetor[15];

    for (int i=0; i<15; i++){
        cin>>vetor[i];
    }

    //descobrir maior numero inteiro do vetor
    int maior=vetor[0];
    for (int i=0; i<15; i++){
        if (maior<vetor[i]){
            maior=vetor[i];
        }
    }

    //dividir todos os valores pelo maior numero
    int vetordividido[15];
    for (int i=0; i<15; i++){
        vetordividido[i]=vetor[i]/maior;
    }

    //escrever valores de vetordividido
    for (int i=0; i<15; i++){
        cout << vetordividido[i] << " ";
    }
}