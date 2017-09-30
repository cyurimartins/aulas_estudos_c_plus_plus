#include <iostream>

using namespace std;

int main(){

    int *p;

    int vetor[10];

    p = vetor; // p recebe o endereço de memória do primeiro vetor OU (p = &vetor[0]) é a mesma coisa.
    *p = 10;

    cout << "Imprimir o endereco da memoria do vetor [0]: "<< p << endl;
    cout << "Imprimir o conteudo do vetor [0]: "<< *p << endl;

    *(p+=1); //Próxima posição do vetor (vetor[1])
    *p = 20; // inserindo 20 na variavel (vetor[1])
    cout << "Imprimir o endereco da memoria do vetor [1]: "<< p << endl;
    cout << "Imprimir o conteudo do vetor [1]: "<< *p << endl;

    *(p+=1); //Próxima posição do vetor
    *p = 30;
    cout << "Imprimir o endereco da memoria do vetor [2]: "<< p << endl;
    cout << "Imprimir o conteudo do vetor [2]: "<< *p << endl;

    return 0;
}
