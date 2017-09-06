#include <iostream>
using namespace std;

double fahrParaCent (double fahr);
double celciusParaFahr (double celc);
double celciusParaKelvin (double celc);
double fahrParaKelvin (double fahr);
double kelvinParaFahr (double kelv);
double kelvinParaCelcius (double kelv);


int main(){
    double tempFahr, tempCent, celcius, f2, kelvin;
    int opc;

    while (opc != 7) {
        cout << "[1] Fahrenheit para celcius"<<endl;
        cout << "[2] Fahrenheit para Kelvin"<<endl;
        cout << "[3] Celcius para Fahrenheit"<<endl;
        cout << "[4] Celcius para Kelvin"<<endl;
        cout << "[5] Kelvin para Fahrenheit"<<endl;
        cout << "[6] Kelvin para Celcius"<<endl;
        cout << "[7] Para sair do programa"<<endl;
        cin >> opc;

        if (opc == 1) {
            cout << "\n++++ Conversao de graus Fahrenheit para graus Centigrados ++++\n";
            cout << "\nInforme a temperatura em fahrenheit: ";
            cin >> tempFahr;
            tempCent = fahrParaCent(tempFahr);
            cout << "\nA temperatura e = "<<tempCent<<" Centigrados.\n"<<endl;
        }

        if (opc == 2) {
            cout << "\n++++ Conversao de graus Fahrenheit para kelvin ++++\n";
            cout << "\nInforme a temperatura em fahrenheit: ";
            cin >> tempFahr;
            kelvin = fahrParaKelvin (tempFahr);
            cout << "\nA temperatura e = "<<kelvin<<" K.\n"<<endl;

        }
        if (opc == 3){
            cout << "\n++++ Conversao de graus Celcius para graus Fahrenheit ++++\n";
            cout << "\nInforme a temperatura em Celcius: ";
            cin >> celcius;
            f2 = celciusParaFahr(celcius);
            cout << "\nA temperatura e = "<<f2<<" Fahrenheit.\n"<<endl;
        }
        if (opc == 4){
            cout << "\n++++ Conversao de graus Celcius para Kelvin ++++\n";
            cout << "\nInforme a temperatura em Celcius: ";
            cin >> celcius;
            kelvin = celciusParaKelvin (celcius);
            cout << "\nA temperatura e = "<<kelvin<<" K.\n"<<endl;

        }
        if (opc == 5){
            cout << "\n++++ Conversao de Kelvin para Fahrenheit ++++\n";
            cout << "\nInforme a temperatura em Kelvin: ";
            cin >> kelvin;
            f2 = kelvinParaFahr (kelvin);
            cout << "\nA temperatura e = "<<f2<<" F.\n"<<endl;
        }

        if (opc == 6){
            cout << "\n++++ Conversao de Kelvin para Celcius ++++\n";
            cout << "\nInforme a temperatura em Kelvin: ";
            cin >> kelvin;
            tempCent = kelvinParaCelcius (kelvin);
            cout << "\nA temperatura e = "<<tempCent<<" C.\n"<<endl;
        }

    } //fim while
    return 0;
}

double fahrParaCent (double fahr){
    double cent;
    cent = ((fahr - 32) * 5) / 9;
    return cent;
}

double celciusParaFahr (double celc) {
    double fahr2;
    fahr2 = ((celc / 5) * 9) + 32;
    return fahr2;
}

double celciusParaKelvin (double celc) {
    double kelv;
    kelv = celc + 273;
    return kelv;
}

double fahrParaKelvin (double fahr) {
    double kelv;
    kelv = ((fahr - 32) / 1.8) + 273.15;
    return kelv;
}

double kelvinParaFahr (double kelv) {
    double fahr2;
    fahr2 = ((kelv - 273) * 1.8) + 32;
    return fahr2;
}

double kelvinParaCelcius (double kelv) {
    double celc;
    celc = kelv - 273.15;
    return celc;
}

