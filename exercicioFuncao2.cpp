#include <iostream>
#include <locale.h>

using namespace std;

int parOuImpar (int v);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    cout << "Vamos verificar se o numero digitado é par ou impar. \n";
    cout << "\nInforme um numero: ";
    cin >> num;

    parOuImpar (num);

    return 0;
}

int parOuImpar (int v) {
    if (v % 2 == 0) {
        cout << "\no numero "<<v<< " é par."<<endl;
    }else {
        cout << "\no numero "<<v<< " é impar."<<endl;

    }
}

