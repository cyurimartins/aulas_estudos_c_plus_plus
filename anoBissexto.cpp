#include <iostream>
using namespace std;

/** Programa para verificar se um ano é bissexto **/


int anoBissexto (int ano){
    return ((ano % 4 == 0)&&((ano % 100 != 0) || (ano % 400 == 0)));
}

int main(){

    int xAno;
    string resp;

    while (resp != "n"){
        cout << "\nInforme um ano: ";
        cin >> xAno;


        if (anoBissexto(xAno) ){
            cout << "\n Ano bissexto!\n";
        } else {
            cout << "\nNao eh bissexto.\n";
        }

        cout << "\nDeseja continuar? (s/n)";
        cin >> resp;

    }

    return 0;
}
