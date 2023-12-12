#include <iostream>
using namespace std;
// Prosedur dan Fungsi;


bool lulus(int nilai) {
	if (nilai > 80) {
		return true;
	} else {
		return false;
	}
}

void data_siswa(string nama, int nilai) {
	cout << nama << endl;
	if (lulus(nilai)) {
		cout << "Lulus";
	}
}

int main() {
	string nama; int nilai;
	cout << "Masukkan Nama : "; cin >> nama;
	cout << "Masukkan Nilai : "; cin >> nilai;
	
	data_siswa(nama,nilai);
	lulus(nilai);
}
