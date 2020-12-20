
#include <iostream>


int main()
{
    float suma = 0;
    int n;
    

    std::cout << "Czesc! Podaj z ilu liczb chcesz obliczyc srednia arytmetyczna\n";
    std::cin >> n;
    while (std::cin.fail())
    {
        std::cout << "Wprowadziles bledne dane" << std::endl;

        std::cin.clear();
        std::cin.ignore(1000, '\n');

        std::cout << "Wprowadz dane ponownie:";
        std::cin >> n;
    }

    std::cout << "Teraz Podaj wszystkie liczby do obliczen\n";

    float *tab = new float[n];
    for (int i = 0; i < n; i++) {
        std::cin >> *tab;
        while (std::cin.fail())
        {
            std::cout << "Wprowadziles bledne dane" << std::endl;

            std::cin.clear();
            std::cin.ignore(1000, '\n');

            std::cout << "Wprowadz dane ponownie:";
            std::cin >> *tab;
        }
        suma += *tab;
    }
    float srednia = suma / n;
    std::cout << "Srednia arytmetyczna z podanych danych wynosi: "<< srednia << std::endl;

    delete[] tab;


     return 0;
   
    


}
