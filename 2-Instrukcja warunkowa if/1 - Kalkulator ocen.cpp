#include <iostream>
using namespace std;
int main(){
	int wynik;
	cout << "Podaj wynik egzaminu (liczba punktow): ";
	cin >> wynik;
	
	if ((wynik < 0 ) && (wynik > 100)) cout << "Niepoprawna liczba (Wynik jest podawany w zakresie od 0 do 100)" << endl;
		else if ((wynik < 50) && (wynik >= 0)) cout << "Ocena: Niedostateczna" << endl;
			else if ((wynik <=69 ) && (wynik >= 50)) cout << "Ocena: Dostateczna" << endl;
				else if ((wynik <= 84) && (wynik >= 70)) cout << "Ocena: Dobra" << endl;
					else if ((wynik <= 99) && (wynik >= 85)) cout << "Ocena: Bardzo dobra" << endl;
						else if (wynik = 100) cout << "Ocena: Celujaca" << endl;
	return 0;
}