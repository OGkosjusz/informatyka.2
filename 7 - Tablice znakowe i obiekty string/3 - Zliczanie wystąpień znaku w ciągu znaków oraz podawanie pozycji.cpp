#include <iostream>
using namespace std;

int main() {
	char ciag [101], znak;
	int pozycje[100], licznik = 0;
	
	cout << "Podaj ciag znakow: ";
	cin.getline(ciag, 101);
	
	cout << "Podaj znak do zliczenia: ";
	cin << znak;
	
	for (int i = 0; ciag[i] != '\0'; i++) {
		if (ciag[i] == znak) {
			pozycje[licznik] = i + 1;
			licznik++;
		}
	}
	
	cout << "Liczba wystapien znaku '" << znak << "': " << licznik << endl;
	cout << "Pozycje wystapien: ";
	for (int i = 0; i < licznik; i++) {
		cout << pozycje[i];
		if (i < licznik -1) cout << ", ";
	}
	cout << endl;
	
	return 0;
}