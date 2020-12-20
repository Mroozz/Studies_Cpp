#include <iostream>
#include <string>
using namespace std;

void Dni_tygodnia(int n)
{
    int n = 0;
    cout << ("Podaj numer dnia tygodnia, *od 1 do 7* \n");
    cin >> n;
    string tydzien[7] = { "Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela" };

    do{
        (printf("Podany numer jest nieprawidlowy, podaj numer od 1 do 7 \n"), cin >> n); }
    while (n < 1 or n > 7 or);

    cout << (tydzien[n - 1]);
}

int main(int argc, char* argv)
{
   Dni_tygodnia(n);
}

