#include <iostream>
using namespace std;

int main (){
    int vetor[10];
                                             // int vidainimigos;
    for (int i=0; i<10; i++){
        cin>>vetor[i];
    }


    int inimigosderrotados=0;
    bool algummorreu=true;

    while (algummorreu==true){
        algummorreu=false;
    

    for (int i=0; i<10; i++){
        if (vetor[i]>=0){
        vetor[i]--;
        }

        if (vetor[i]==0){
            inimigosderrotados++;
            algummorreu=true;
        }
        }
    }

    cout <<inimigosderrotados;
    return 0;
}