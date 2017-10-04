/*
Author: Yuri Martins
e-mail: cyuri.martins@gmail.com
*/

#include <iostream>
#include <stack>

using namespace std;

int const MAXTAM = 1000;

int Pilha [MAXTAM];
int Topo;

void pilhaConstrutor(){
    Topo = -1;
}

bool pilhaVazia(){
    if (Topo == -1)
        return true;
    else
        return false;
}

bool pilhaCheia(){
    if (Topo == MAXTAM-1)
        return true;
    else
        return false;
}

bool pilhaPush(int valor){  //push = empilhar
    if(pilhaCheia()){
        return false;
    }else{
    Topo++;
    Pilha[Topo] = valor;
    return true;
    }
}

bool pilhaPop(int &valor){    //pop = desempilhar
    if (pilhaVazia()){
        return false;
    }else{
        valor = Pilha[Topo];
        Topo--;
        return true;
    }
}

int pilhaGet(int &valor){ // Consultar topo
    if (pilhaVazia()){
        return false;
    }else{
        valor = Pilha[Topo];
        return true;
    }

}

int pilhaTamanho(){
    return Topo+1;
}

int main(){

    int valor;

    pilhaConstrutor();
    pilhaPush(10);
    pilhaPush(20);
    pilhaPush(30);
    pilhaPush(40);
    pilhaPush(50);
    pilhaPush(60);
    pilhaPush(70);


    cout << "Tamanho total da pilha: " << pilhaTamanho() <<endl;

    while (pilhaPop(valor)){
        cout << "Retirando: "<< valor <<endl;
    }


    return 0;
}
