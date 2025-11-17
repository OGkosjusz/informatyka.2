#include <iostream>
using namespace std;

int main(){
	double tempCel;
	char wybor;
	
	cout << "Podaj temperature w stopniach Celcjusza: ";
	cin >> tempCel;
	
	cout << "Wybierz jedonstke docelowa (K - Kelvin, F - Fahrenheit): ";
	cin >> wybor;
	
	switch(wybor) {
		case 'K':
		case 'k':
			cout << "Temperatura w stopniach Kelvina: " << tempCel + 273.15 << endl;
			break;
		case 'F':
		case 'f':
			cout << "Temperatura w stopniach Fahrenheita: " << (tempCel * 9/5) + 32 << endl;
			break;
		default:
			cout << "Bledna jednostka. Wybierz K (Kelvin) lub F (Fahrenheit)." << endl;
			break;
	}
	
	return 0;
}