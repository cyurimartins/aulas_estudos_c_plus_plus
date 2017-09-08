#include <iostream>
using namespace std;

//sequencia fibonacci

int main(){
    int n1=0, n2=1, n3=1;

    n3 = n1 + n2;
    cout << n1 << " " << n2 << " " << n3;

    for (int i = 0; i<5; i++ ){
        n2 = n2 + n3;
        n3 = n2 + n3;
        cout << " " <<n2 << " " <<n3;
    }

    return 0;
}
