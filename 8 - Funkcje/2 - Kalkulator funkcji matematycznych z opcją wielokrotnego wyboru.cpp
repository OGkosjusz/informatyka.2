#include <iostream>
using namespace std;

int main() {
    int wybor;
    double a, b;

    while (true) {
        cout << "Wybierz funkcje:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Roznica" << endl;
        cout << "3. Iloczyn" << endl;
        cout << "4. Iloraz" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec programu." << endl;
            return 0;
        }
        else {
            cout << "Nieprawidlowy wybor, odpal program ponownie" << endl;
            return 0;
        }

        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        if (wybor == 1) {
            cout << "Wynik: " << a + b << endl;
        }
        else if (wybor == 2) {
            cout << "Wynik: " << a - b << endl;
        }
        else if (wybor == 3) {
            cout << "Wynik: " << a * b << endl;
        }
        else if (wybor == 4) {
            if (b == 0) {
                cout << "nie mozna dzielic przez zero!" << endl;
            } else {
                cout << "Wynik: " << a / b << endl;
            }
        }
    }
}