#include <iostream>

using namespace std;

int main(){

    int vetor [5];

    for (int i=0; i<5; i++){
        cout << "\nInforme o "<<i<<" valor: ";
        cin >> vetor[i];
    }

    for (int i=0; i<5; i++){
        cout <<"\n{ "<<vetor[i]<<" } ";
    }


    return 0;
}
