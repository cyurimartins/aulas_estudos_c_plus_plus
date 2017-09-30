#include <iostream>
#include <stdio.h> //Para função gets
#include <stdlib.h> //Para função malloc
using namespace std;

/* A função malloc armazena somente a quantidade necessária na memória.*/

int main(){

    char *vnome;
    vnome = (char*) malloc(sizeof(char)); //converteu para um ponteiro do tipo char, pois malloc é void.


    gets(vnome); //tem o mesmo objetivo do cin porem armazena com espaço.

    cout << vnome<<endl;

    return 0;
}

