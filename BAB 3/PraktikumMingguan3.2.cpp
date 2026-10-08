#include <iostream>
using namespace std;

int main() {
    double celcius, fahrenheit, reamur, kelvin;

    cout << "PROGRAM KONVERSI SUHU" << endl << endl;
    cout << "Masukkan Suhu(Celcius) = ";
    cin >> celcius;

    fahrenheit = (celcius * 9.0 / 5.0) + 32;
    reamur     = celcius * 4.0 / 5.0;
    kelvin     = celcius + 273.15;

    cout << "Jadi,\t" << celcius    << " derajat celcius\t\t= " << fahrenheit << " derajat fahrenheit" << endl;
    cout << "\t"       << fahrenheit << " derajat fahrenheit\t\t= " << reamur     << "derajat reamur" << endl;
    cout << "\t"       << reamur     << " derajat reamur\t\t= "    << kelvin     << " derajat kelvin" << endl;

    return 0;
}
