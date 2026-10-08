#include <iostream>
using namespace std;

int main() {
    const double phi = 3.1416;
    double r, t;

    cout << "Program Menghitung Volume Tabung" << endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> r;
    cout << "Masukkan tinggi tabung    : ";
    cin >> t;

    int volume = phi * r * r * t;

    cout << "Volume Tabung adalah	  : " << volume << endl;

    return 0;
}
