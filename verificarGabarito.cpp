#include <iostream>
#include <stdlib.h>
using namespace std;

/* 

NAO CONCLUIDO - Sistema para cadastrar o gabarito de uma prova e comparar com a prova do aluno, retornar o numero de acertos, pontos obtidos. 

*/

int main(){
    string gab[3], prova[3], aluno[5];
    int notaFinal[2], nota;

    nota = 0;
    notaFinal[2] = 0;


    //PASSO 1 CADASTRAR GABARITO

    cout <<"\nCadastrar o Gabarito"<<endl;
    cout <<"\n-----------------------"<<endl;


    for (int i=0; i<3; i++){

        cout <<"\nQuestao "<<i<<" : ";
        cin >> gab[i];
    }//FIM FOR

//CADASTRAR ALUNOS E PROVAS

    for (int j=0; j<2; j++){
        cout << "\nAluno: "<<j<<endl;
        cout << "\nInforme o primeiro aluno: ";
        cin >>aluno[j];
            for (int z=0; z<3; z++){
                cout <<"\nQuestao "<<z<<" : ";
                cin >> prova[z];

                if (prova[z] == gab[z]){
                    nota = nota + 1;
                }
            }
    }

    return 0;
}
