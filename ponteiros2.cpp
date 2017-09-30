#include <iostream>

using namespace std;

int main(){

    string veiculo;
    string *pv;

    pv = &veiculo; // Ponteiro PV recebe o endereço da variável veiculo

    veiculo = "carro";

    *pv = "moto";

    cout << "o endereco da variavel veiculo eh: "<<pv<<endl;

    cout << "o conteudo da variavel veiculo eh: "<<veiculo<<endl;


    return 0;
}
