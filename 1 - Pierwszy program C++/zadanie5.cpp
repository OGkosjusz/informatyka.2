#include <iostream>
using namespace std;

int main() {
    int pierwsza_liczba, druga_liczba;

    cout << "Podaj pierwsza liczbe: ";
    cin >> pierwsza_liczba;
    cout << "Podaj druga liczbe: ";
    cin >> druga_liczba;

    int suma = pierwsza_liczba + druga_liczba;
    int roznica = pierwsza_liczba - druga_liczba;
    int iloczyn = pierwsza_liczba * druga_liczba;
    int iloraz = pierwsza_liczba / druga_liczba;
    int reszta = pierwsza_liczba % druga_liczba;

    cout << "Suma: " << suma << endl;
    cout << "Roznica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;
    cout << "Iloraz: " << iloraz << endl;
    cout << "Reszta z dzielenia: " << reszta << endl;

    return 0;
}