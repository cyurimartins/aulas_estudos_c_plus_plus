#include <iostream>
using namespace std;

struct Carro{
    string nome;
    string cor;
    string tipo;
    int velMax;


    void insere(string stnome, string stcor, string sttipo, int stvelmax){
        nome=stnome;
        cor=stcor;
        tipo=sttipo;
        velMax=stvelmax;
    }

    void mostra (){
        cout <<"\ncarros: \n\n";
        cout <<"Nome: ----------------- "<< nome <<endl;
        cout <<"Cor: ------------------ "<< cor <<endl;
        cout <<"Tipo: ----------------- "<< tipo <<endl;
        cout <<"Velocidade Maxima: ---- "<< velMax <<endl;
    }

};

int main(){

    Carro *carros=new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0]=car1;
    carros[1]=car2;
    carros[2]=car3;
    carros[3]=car4;
    carros[4]=car5;

    carros[0].insere("GOL","VERDE","GAS",250);
    carros[1].insere("Fiorino","Branca","Gasolina",250);

    for (int i=0; i<5; i++){
        carros[i].mostra();
    }

    return 0;
}
