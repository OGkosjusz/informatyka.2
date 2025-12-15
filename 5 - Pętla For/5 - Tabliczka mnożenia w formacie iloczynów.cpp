#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Podaj liczbe N: ";
    cin >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}