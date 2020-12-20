#include <stdio.h>
#include <iostream>
using namespace std;


void dzielenie(int dzielna, int dzielnik) {
    dzielna /= dzielnik;
    printf("Wynik dzielenia: %d\n", dzielna);
}



int main(void){
    dzielenie(15, 5);
    getchar();
}

