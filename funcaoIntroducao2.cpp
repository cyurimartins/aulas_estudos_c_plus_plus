#include <iostream>
using namespace std;

//passando

int soma (int x, int y);

int main(){
    int v1, v2, s;

    cout << "\nDigite o primeiro numero: ";
    cin >> v1;
    cout << "\nDigite o segundo numero: ";
    cin >> v2;

    s = soma (v1, v2);

    cout <<"\na soma de "<<v1<<" e "<<v2<< " sera igual: "<< s<<endl;


    return 0;
}


int soma (int x, int y) {
    return x+y;
}
