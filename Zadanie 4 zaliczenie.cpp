#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	double tab[7], min, max;

	cout << "Wprowadz 8 liczb rzeczywistych "<<endl;
	for (int i = 1; i < 7; i++)
	cin >> tab[i];
	cin >> min;
	cin >> max;
	cout << "Oto podane przez Ciebie libczy:\n"
    << "pierwszy element - " << tab[ 1 ]
    << "\ndrugi element  - " << tab[ 2 ]
    << "\ntrzeci element  - " << tab[ 3 ]
    << "\nczwarty element - " << tab[ 4 ]
    << "\npiaty element - " << tab[ 5 ]
    << "\nszosty elemnt - " << tab[ 6]
    << "\nsiodmy element - "<< min
    << "\nosmy element - " << max;
    cout << " \nNacisnij dowolny klawisz aby dowiedziec się wiecej ...";
    getchar(); getchar();
	{
		for (int i = 1; i < 7; i++)
		if (min > tab[i]) 
			min = tab[i];
		for (int i = 1; i < 7; i++)
		if (max < tab[i])
			max = tab[i];
	}

	cout <<"\nNajmniejsza wczytana liczba to " << min << "  A najwieksza to  " << max <<  endl;

	system("pause");
	return 0;
}
