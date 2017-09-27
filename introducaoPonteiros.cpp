#include <iostream>

using namespace std;

int main(){

    float *a, *b;
    float aux, x, y;

    x = 1;      /* o conteúdo de x agora é igual a 1 */
    y = 2;      /* o conteúdo de y agora é igual a 2 */
    a = &x;     /* a aponta para x */
    b = &y;     /* b aponta para y */

    aux = *a;   /* o conteúdo de Aux agora é 1 (conteúdo de x) */
    *a = *b;    /* o conteúdo de x agora é 2 (conteúdo de y) */
    *b = aux;   /* o conteúdo de y agora é 1 */

    cout <<"x = "<<x<<"\ny = "<<y<<endl;

    return 0;
}
