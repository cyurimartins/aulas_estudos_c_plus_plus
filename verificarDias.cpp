#include <iostream>
using namespace std;

/*sistema que retorna o numero de dias a partir de uma data*/


/*verifica se um ano é bissexto*/

int anoBissexto (int ano){
    return ((ano % 4 == 0)&&((ano % 100 != 0) || (ano % 400 == 0)));
}

/*Retorna o numero de dias 31 ocorridos até o mes dado*/

int NumDias31 (int mes){
    if (mes<9){
        return mes/2;
    } else {
        return (mes+1)/2;
    }
}

/*Retorna numero de dias de um ano até uma data dada*/

int NumDiasAteUmaData (int dia, int mes, int ano){
    int NumDias;

    //Numero de dias considerados todos os meses com 30 dias
    NumDias = 30*(mes-1);

    //Acrescentando o numero de dias 31 ja ocorridos no ano e o numero de dias do mes corrente
    NumDias = NumDias + NumDias31(mes) + dia;

    //Retificando o numero de dias de fevereiro (se ja ocorreu)
    if (mes>2){
        if (anoBissexto(ano))
            NumDias = NumDias - 1;
        }else {
            NumDias = NumDias -2;
        }
    return NumDias;
}

/*Retorna o numero de dias após uma data dada*/
int NumDiasAposUmaData (int dia, int mes, int ano){
    if (anoBissexto(ano)){
        return 367 - NumDiasAteUmaData(dia, mes, ano);
    }else{
        return 366 - NumDiasAteUmaData(dia, mes, ano);
    }
}

/*Retorna o numero de anos bissextos entre dois anos dados*/
int NumAnosBissextos (int ano1, int ano2){
    int aux, mult4, mult100, mult400;
    aux = ano2 -1;
    mult4 = (aux - (aux % 4) - ano1 + (ano1 % 4)) /4;
    mult100 = (aux - (aux % 4) - ano1 + (ano1 % 4)) /100;
    mult400 = (aux - (aux % 4) - ano1 + (ano1 % 4)) /400;
    return mult4 - mult100 + mult400;
}


int main(){

    int dia1, mes1, ano1, dia2, mes2, ano2, anos, NumDias, DiasDoAnoFinal, DiasDoAnoInicial;

    cout << "\nInforme data inicial (dia):\n ";
    cin >> dia1;

    cout << "\nInforme data inicial (mes):\n ";
    cin >> mes1;

    cout << "\nInforme data inicial (ano):\n ";
    cin >> ano1;

    cout <<dia1,mes1,ano1;


    cout << "\nInforme data Final (dia):\n ";
    cin >> dia2;

    cout << "\nInforme data Final (mes):\n ";
    cin >> mes2;

    cout << "\nInforme data Final (ano):\n ";
    cin >> ano2;

    cout <<dia2,mes2,ano2;


    anos = ano2 - ano1 - 1;
    DiasDoAnoFinal = NumDiasAteUmaData(dia2, mes2, ano2);
    DiasDoAnoInicial = NumDiasAposUmaData(dia1, mes1, ano1);
    NumDias = anos*365 + DiasDoAnoFinal + DiasDoAnoInicial + NumAnosBissextos(ano1, ano2);


    cout <<NumDias;


    return 0;
}
