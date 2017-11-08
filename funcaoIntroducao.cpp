#include <iostream>
using namespace std;

int multiplic(int x, int y);

int main(){
    int a, b, c;

    cout<<"\nDigite o primeiro numero: "<<endl;
    cin>>a;
    cout<<"\nDigite o segundo numero: "<<endl;
    cin>>b;

    c = multiplic(a,b);

    cout<<"\nO resultado de a*b = "<<c<<endl;

    return 0;
}

int multiplic(int x, int y){
    cout<<"x= "<<x<<" y= "<<y<<endl;

    return (x*y);
}
