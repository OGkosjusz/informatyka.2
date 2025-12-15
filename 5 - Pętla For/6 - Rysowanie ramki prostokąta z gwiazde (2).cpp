#include <iostream>
using namespace std;

int main() {
    int sze, wys;
    cout << "Podaj szerokosc: ";
    cin >> sze;
    cout << "Podaj wysokosc: ";
    cin >> wys;
    for (int i = 0; i < wys; i++) {
        if (i == 0 || i == wys - 1) {
            for (int j = 0; j < sze; j++) cout << "-";
        } else {
            for (int j = 0; j < sze; j++) {
                if (j == 0 || j == sze - 1) cout << "|";
                else cout << ((i + j) % 2 == 0 ? "#" : "*");
            }
        }
        cout << endl;
    }
    return 0;
}