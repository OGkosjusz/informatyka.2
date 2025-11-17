#include <iostream>
using namespace std;

int main() {
    double waga, wzrost;
    cout << "Podaj wage (w kg): ";
    cin >> waga;
    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;
    
    double bmi = waga / (wzrost * wzrost);
    cout << "Twoje BMI wynosi: " << bmi << endl;
    cout << "Twoj stan wagowy: ";
    
    if (bmi < 18.5) cout << "Niedowaga";
    else if (bmi <= 24.9) cout << "W normie";
    else if (bmi <= 29.9) cout << "Nadwaga";
    else cout << "Otylosc";
    cout << endl;
    
    return 0;
}