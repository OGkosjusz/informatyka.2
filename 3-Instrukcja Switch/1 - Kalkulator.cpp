#include <iostream>
using namespace std;
int main() {
    double liczba1, liczba2, wynik;
    char funk;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    cout << "Podaj fukcje (+,-, *, /): ";
    cin >> funk;   

    switch (funk) { 
        case '+':
            wynik = liczba1 + liczba2;
            break;
        case '-':
            wynik = liczba1 - liczba2;
            break;
        case '*':
            wynik = liczba1 * liczba2;
            break;
        case '/':
            if (liczba2 != 0) {
                wynik = liczba1 / liczba2;
            } else {
                cout << "Blad! Dzielenie przez zero." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Nieprawidlowy operator." << endl;
            return 1; 
    }

    cout << "Wynik: " << wynik << endl;
    return 0;
}