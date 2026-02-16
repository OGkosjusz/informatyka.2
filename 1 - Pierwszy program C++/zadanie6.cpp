#include <iostream>
using namespace std;

int main() {
    int pierwsza_liczba, druga_liczba;

    cout << "Podaj pierwsza liczbe: ";
    cin >> pierwsza_liczba;
    cout << "Podaj druga liczbe: ";
    cin >> druga_liczba;

    int suma = pierwsza_liczba + druga_liczba;

    cout << "Suma: " << suma << endl;

    cout << "Suma jest liczba " << (suma % 2 == 0 ? "parzysta" : "nieparzysta") << "." << endl;

    return 0;
}