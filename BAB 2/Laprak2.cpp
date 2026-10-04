#include <iostream>
using namespace std;
int main() {

string nama, kelas;
int nim, semester, ipk;

	cout << "PRAKTIKUM ALGORITMA 2026" << endl << endl;

	cout << "Masukkan Nama	: ";
	getline(cin, nama);
	cout << "Masukkan NIM 	: ";
	cin >> nim;
	cout << "Masukkan Kelas	: ";
	cin >> kelas;
	cout << "Semester	: ";
	cin >> semester;
	cout << "Masukkan IPK 	: ";
	cin >> ipk;

	cout << endl;
	cout << "BIODATA MAHASISWA" << endl;

	cout << "Nama 		: " << nama << endl;
	cout << "NIM 		: " << nim << endl;
	cout << "Kelas 		: " << kelas << endl;
	cout << "Semester	: " << semester << endl;
	cout << "IPK 		: " << ipk << endl;

return 0;
}
