#include <iostream>
using namespace std;

/**
Insere um inteiro e retorna o fatorial
**/

int fatorial (int x);


int main(){

    int num, f;

    cout << "\nInforme um numero: ";
    cin >> num;

    f = fatorial (num);

    cout <<"o fatorial de: "<<num<< " e igual: "<< f;


    return 0;
}

int fatorial (int x) {
    int r = 1;
    for (int i = 1; i<=x; i++) {
        r = r * i;
    }

    return r;
}
