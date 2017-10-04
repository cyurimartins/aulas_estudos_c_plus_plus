#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <string> materia;

    /*
    push();     Inserindo elemento
    pop();      Excluindo elemento
    top();      Topo da pilha
    size();     Tamanho da pilha
    empty();    Pilha vazia
    */

    materia.push ("Engenharia de Sistemas");
    if (materia.size()==0){
        cout<<"Pilha sem elementos\n";
    }else {
        cout<<"Pilha com elementos\n";
    }
    materia.push ("Redes");
    materia.push ("Algoritmo");
    materia.push ("Sistema Operacional");
    materia.push ("Estrutura de Dados");



    cout <<"Tamanho da pilha: "<<materia.size()<<"\n";
    cout <<"Materia do topo da pilha: "<<materia.top()<<"\n";

    materia.pop(); //Retirando o primeiro elemento da pilha

    cout <<"Materia do topo da pilha atual: "<<materia.top()<<"\n";




    return 0;
}
