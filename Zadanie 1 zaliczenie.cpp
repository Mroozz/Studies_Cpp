#include <iostream>
#include <math.h>
#include <float.h>

using namespace std;
int main()
{
    int a, b;
    cout << "Hej! Podaj pierwszą cyfrę do sprawdzenia" << endl;
    cin >> a;
    cout << "Teraz przedstaw drugą" << endl;
    cin >> b;
    if( a%2==0 && a%3==0 && b%2==0 && b%3==0 )
    {
    cout << "Obie podane przez Ciebie cyfry są podzielne przez 2 i 3 :)" << endl;
    }
    else
    {
    cout << "Niesety liczy te nie są podzielne przez 2 i 3 :(" << endl;
    }
}
