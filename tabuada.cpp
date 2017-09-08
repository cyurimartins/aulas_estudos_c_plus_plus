#include <iostream>

using namespace std;

int main(){
    int num, result;


    cout<<"\nInforme o numero da tabuada que deseja: ";
    cin>>num;

    for (int i=0; i<=10; i++) {
        result = num * i;
        cout<<num<<" x "<<i<<" = "<<result<<endl;
    }

    return 0;
}
