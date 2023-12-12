#include <iostream>
using namespace std;

struct mhs{
	string nama, matkul;
	int sks, nim;
};

mhs bayar[2];

int main() {
	int tetap, var;
	cout <<"\n---------------------------------------------------------\n";
	cout <<"Input";
	cout <<"\n---------------------------------------------------------\n";
	//Input
	for(int i = 0; i < 2; i++) {
		cout << "Masukkan Nama Mahasiswa \t: ";
		cin >> bayar[i].nama;
		cout << "Masukkan NIM Mahasiswa  \t: ";
		cin >> bayar[i].nim;
		cout << "Masukkan Nama Mata Kuliah \t: ";
		cin >> bayar[i].matkul;
		cout << "Jumlah SKS               \t: ";
		cin >> bayar[i].sks;
		cout << endl;
	}
	cout <<"\n---------------------------------------------------------\n";
	cout <<"Output";
	cout <<"\n---------------------------------------------------------\n";
	//Output
	for(int i = 0; i < 2; i++) {
		cout << "Nama Mahasiswa  \t: " << bayar[i].nama <<endl;
		cout << "Nama Mata Kuliah \t: " << bayar[i].matkul << endl;
		cout << "Jumlah SKS       \t: " << bayar[i].sks << endl;
			if(bayar[i].sks == 0) {
				tetap = 250000;
				var = bayar[i].sks*250000;
			}else if(bayar[i].sks == 2) {
				tetap = 250000;
				var = bayar[i].sks*300000;
			}
		cout << "SPP Tetap        \t: " << tetap << endl;
		cout << "SPP Var          \t: " << var<<endl;
		cout << endl;
	}
	return 0;
}
