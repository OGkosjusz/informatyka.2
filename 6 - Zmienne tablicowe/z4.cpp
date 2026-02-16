#include <iostream>
using namespace std;

int main() {
    int liczby[10];
    int sumaParzystych = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (liczby[i] % 2 == 0) {
            cout << liczby[i] << ", ";
            sumaParzystych += liczby[i];
        }
    }

    cout << endl << "Suma liczb parzystych: " << sumaParzystych << endl;

    return 0;
}