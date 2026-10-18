#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    int pendapatan;
    int tanggungan;
    int tarif;
    int pajak;

    cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl << endl;

    cout << "Nama Anda 	: ";
    getline(cin, nama);
    cout << "NIM Anda 	: ";
    getline(cin, nim);
    
    cout << endl << "===== DATA PENDAPATAN =====" << endl << endl;

    cout << "Pendapatan bulanan: Rp. ";
    cin >> pendapatan;

    if (pendapatan < 0) {
        cout << "Input tidak valid!" << endl;
        return 0;
    }
    cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
    cin >> tanggungan;

    if (pendapatan < 5000000) {
        tarif = 0;
    } else if (pendapatan < 10000000) {
        tarif = 5;
    } else if (pendapatan < 20000000) {
        tarif = 10;
    } else {
        tarif = 15;
    }
    
    pajak = pendapatan * tarif / 100;

    if (tanggungan == 1) {
        pajak = pajak - 100000;
    }
    if (pajak < 0) {
        pajak = 0;
    }

    cout << "Tarif pajak: " << tarif << "%" << endl;
    cout << "Pajak akhir: Rp" << pajak << endl;

    return 0;
}
