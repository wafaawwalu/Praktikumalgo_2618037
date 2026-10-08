#include <iostream>
#include <string>
using namespace std;

int main() {
    string status;
    float pertama, kedua;
	
    cout << "Masukkan Nilai Pertama	: ";
    cin >> pertama;
    cout << "Masukkan Nilai Kedua	: ";
    cin >> kedua;

    status = (pertama >= 60 && kedua >= 60) ? "Selamat, Anda LULUS!" : "Maaf, Anda TIDAK LULUS!";
    cout << status << endl;

    return 0;
}
