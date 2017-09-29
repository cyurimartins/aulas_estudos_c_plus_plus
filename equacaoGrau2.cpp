#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;



int main(){

    double resp1, resp2, a, b, c, test;

    cout << "PROGRAMA PARA RESOLVER EQUACAO DO 2 GRAU.\n\n";

    cout << "Informe A: ";
    cin >> a;

    cout << "Informe B: ";
    cin >> b;

    cout << "Informe C: ";
    cin >> c;

    cout << "\nA expressão eh: "<<a<<"²"<<b<<"x+"<<c<<"=0";

    resp1 = (-b + sqrt((pow(b,2)) - (4*a*c)))/2*a;

    resp2 = (-b - sqrt((pow(b,2)) - (4*a*c)))/2*a;


    cout << "\nx1: "<<resp1<<endl;

    cout << "\nx2: "<<resp2<<endl;   


    return 0;
}
