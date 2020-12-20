#include <cstdlib>
#include <iostream>
using namespace std;

int main(int agrc, char *argv[])
{
    int ile = 0; //
    for(int i=1; i<=9; i++) //
    for(int j=0; j<=9; j++) //
    for(int k=0; k<=9; k++) //
    if (i!=j && i!=k && j!=k)
    {
    cout <<i<<j<<k<<" ";
    ile++;
    }
    cout<<endl<<"Licz trzycyfrowych o niepowtarzających się cyfrach jest "<< ile <<endl;
    system("pause");
    return 0;
}