#include <iostream>
using namespace std;

/*
Sistema que verifica a idade do usuario e retorna uma resposta se esta apto a habilitacao ou nao apto.
*/


int main(){

    int diaAtual, mesAtual, anoAtual, diaNascimento, mesNascimento, anoNascimento, idade;

    cout<<"-------------------------"<<endl;
    cout<<"DEPARTAMENTO DE TRANSITO"<<endl;
    cout<<"-------------------------"<<endl;

    cout<<"Informe os dados do seu nascimento"<<endl;

    cout<<"\nInforme a dia de nascimento "<<endl;
    cin>>diaNascimento;
    cout<<"\nInforme o mes do nascimento? "<<endl;
    cin>>mesNascimento;
    cout<<"\nInforme o ano do nascimento? "<<endl;
    cin>>anoNascimento;

    cout<<"Informe a data atual"<<endl;

    cout<<"\nInforme a dia atual: "<<endl;
    cin>>diaAtual;
    cout<<"\nInforme o mes atual: "<<endl;
    cin>>mesAtual;
    cout<<"\nInforme o ano atual: "<<endl;
    cin>>anoAtual;

    idade = anoAtual - anoNascimento;

    cout<<"\nSua idade = "<<idade<<endl;

    if (idade > 18) {
        cout<<"\nVoce pode tirar habilitacao"<<endl;
    }else {
        cout<<"\nNao tem idade para tirar habilitacao!"<<endl;
    }


    return 0;
}
