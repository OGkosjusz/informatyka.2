#include <iostream>
using namespace std;

int main() {
    int liczby[5];
    int suma = 0;
    double srednia;

    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe " << i + 1 << ": ";
        cin >> liczby[i];
        suma += liczby[i];
    }

    srednia = suma / 5.0;

    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}
