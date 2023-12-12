#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
	string nama;
	int umur;
	float nilai;
};

float hitungRataRataIPK(Mahasiswa mahasiswa[], int jumlah){
	float total = 0;
	for (int i = 0; i < jumlah; i++) {
		total += mahasiswa[i].nilai;
	}
	return total/jumlah;
	}


int main() {
	int jumlahmahasiswa = 3;
	Mahasiswa daftarMahasiswa[jumlahmahasiswa];
	for(int i = 0; i < jumlahmahasiswa; i++) {
		cout << "Masukkan Nama Mahasiswa : "<< i + 1 << " ";
		cin >> daftarMahasiswa[i].nama;
		cout << "Masukkan Umur Mahasiswa : "<< i + 1 << " ";
		cin >> daftarMahasiswa[i].umur;
		cout << "Masukkan IPK Mahasiswa : "<< i + 1 << " ";
		cin >> daftarMahasiswa[i].nilai;
	}
	cout << "\nDATA MAHASISWA\n";
	
	for(int i = 0; i < jumlahmahasiswa; i++) {
		cout << "Nama Mahasiswa : " << daftarMahasiswa[i].nama << endl;
		cout << "Umur Mahasiswa : "<< daftarMahasiswa[i].umur << endl;
		cout << "IPK :" << daftarMahasiswa[i].nilai << endl;
	}
	
	float rataRata = hitungRataRataIPK(daftarMahasiswa, jumlahmahasiswa);
	cout << "\nRata IPK = " << rataRata;
	
	
	return 0;
}
