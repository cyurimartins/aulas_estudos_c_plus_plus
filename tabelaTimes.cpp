#include <iostream>
using namespace std;

/*

tabela para realizar o cruzamento entre equipes dentro de uma competicao, sem repeticao de times

*/

int main(){
    int i, j;
    string nomeTime[3];

    for (i=0; i<3; i++){
        cout <<"\nNome do "<<i<<" time: ";
        cin >> nomeTime[i];
    }

    cout <<"\n**************** "<<endl;
    cout <<"\nTabela de jogos: "<<endl;
    cout <<"\n**************** "<<endl;

    for (i=0; i<3; i++){
        for (j=0;j<3;j++){
                if (nomeTime[i] != nomeTime[j]){

                        cout <<"\n "<<nomeTime[i]<<" [ ] x [ ] "<<nomeTime[j]<<endl;
                }
        }
    }

    return 0;
}
