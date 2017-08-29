#include <iostream>
using namespace std;

//prototipando a funcao
void texto();
void soma (int n1, int n2);
int soma2 (int n1, int n2);
void club(string tim[4]);


int main(){
    int resultadoSoma2;
    string times[4]={"Flamengo", "Fluminense", "Botafogo", "Vasco"};

    texto();

    soma(7,6);
    resultadoSoma2=soma2(80,50);

    cout<<"O valor da soma2 e: "<<resultadoSoma2<<endl;

    club(times); //chama a funcao club passando o vetor times

    return 0;
}

void texto(){
    cout << "\nCarlos Yuri Martins Braga Farias\n";
}

void soma (int n1, int n2){
    cout << "\nA soma dos valores: " <<n1<<" + "<<n2<<" e igual = "<< n1+n2 <<endl;
}

int soma2 (int n1, int n2){
    return n1+n2;
}

void club(string tim[4]){
    for(int i=0;i<4;i++)
        cout<<tim[i]<<endl;
}

