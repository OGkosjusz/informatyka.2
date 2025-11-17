#include <iostream>
using namespace std;

int main() {
    int godziny;
    char pojazd;

    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;


    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;

    int oplata = 0;

    switch(pojazd) {
        case 'S':
        case 's':
            oplata = godziny * 5;
            break;
        case 'M':
        case 'm':
            oplata = godziny * 3;
            break;
        case 'A':
        case 'a':
            oplata = godziny * 10;
            break;
        default:
            cout << "Bledny typ pojazdu!" << endl;
            return 1;
    }

    cout << "Oplata za parkowanie: " << oplata << " zl" << endl;

    return 0;
}
