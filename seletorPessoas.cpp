#include <iostream>
using namespace std;

int main(){
    int idade, cabelo, tot1 = 0, tot2 = 0;
    string sexo, resp;
    while (resp != "n"){
        cout << "\n=======================";
        cout << "\nSELETOR DE PESSOAS";
        cout << "\n=======================";
        cout << "\nQual o sexo? [M/F] ";
        cin >> sexo;
        cout << "\nQual a idade? ";
        cin >> idade;
        cout << "\nQual a cor do cabelo? ";
        cout << "\n----------------------";
        cout << "\n[1] Preto";
        cout << "\n[2] Castanho";
        cout << "\n[3] Loiro";
        cout << "\n[4] Ruivo"<<endl;
        cin >> cabelo;
        cout << "\nDeseja continuar? [s/n] "<<endl;
        cin >> resp;
    }//endwhile
        if (sexo == "m" && idade > 18 && cabelo == 2) {
            tot1 = tot1 + 1;
        } // endif
        if (sexo == "f" && idade >=25 && idade <=30 && cabelo == 3) {
            tot2 = tot2 + 1;
        } //endif
        cout << "Existem : "<<tot1<<" homens com mais de 18 anos e cabelos castanhos"<<endl;
        cout << "Existem : "<<tot2<<" mulheres entre 25 e 30 anos de cabelos loiros"<<endl;
    return 0;
}
