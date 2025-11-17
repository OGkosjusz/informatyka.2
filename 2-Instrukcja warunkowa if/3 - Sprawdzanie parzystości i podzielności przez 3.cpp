#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe calkowita: ";
	
    cin >> liczba;
    
    
    cout << "Liczba " << liczba << " jest ";
    if (liczba % 2 == 0) cout << "parzysta";
    else cout << "nieparzysta";
    
cout << "." << endl;
    
    
    cout << "Liczba " << liczba << " jest ";
    
	if (liczba % 3 != 0) cout << "nie ";
    cout << "podzielna przez 3." << endl;
    
    return 0;
}