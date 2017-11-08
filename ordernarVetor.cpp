#include <iostream>
using namespace std;

/* 
Ordenar uma sequencia de vetores em ordem crescente
*/

int main(){
    int vet [4], i, j, aux;

    for (i=0; i<4; i++){
        cout << "Digite um valor: ";
        cin >> vet[i];
    }
    for (i=0; i<3; i++) {
        for (j=i+1; j<4; j++){
            if (vet[i] > vet[j]){
               aux = vet[i];
               vet[i] = vet[j];
               vet[j] = aux;
            }
        }
    }
    for (i=0; i<4; i++){
        cout << "\{ "<<vet[i]<< " } ";
    }
    return 0;
}
