#include <iostream>
using namespace std;

int main (){
    char vetorgabarito[10];
    // entrada de gabaritos oficiais e dos alunos
    for (int i=0; i<10; i++){
        cin >> vetorgabarito[i];
    }

    char vetorprova1[10];
    
    for (int i=0; i<10; i++){
        cin >> vetorprova1[i];
    }
    
    char vetorprova2 [10];

    for (int i=0; i<10; i++){
        cin >> vetorprova2[i];
    }

    //verificar acertos
    int nota1=0;
    for (int i=0; i<10; i++){
        if (vetorgabarito[i]==vetorprova1[i]){
        nota1++;
        }
    }

    int nota2=0;
    for (int i=0; i<10; i++){
        if (vetorgabarito[i]==vetorprova2[i]){
            nota2++;
        }
    }

    cout<<nota1<<endl;
    //verificar se nota1 passou
    if (nota1>=6){
        cout<< "APROVADO"<<endl;
    }
    else {
        cout << "REPROVADO"<<endl;
    }

    cout<<nota2<<endl;

    if (nota2>=6){
        cout<< "APROVADO"<<endl;
    }
    else {
        cout << "REPROVADO"<<endl;
    }
return 0;
}