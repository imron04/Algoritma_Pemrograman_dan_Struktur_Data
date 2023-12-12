/* 
Fungsi dan Prosedur

Fungsi : mengembalikan nilai (return), tipe data yang berada sebelum nama fungsi adalah jenis tipe data yang dikembalikan
Prosedur : Tidak mengembalikan nilai biasanya digunakan untuk beberapa operasi seperti mencetak nilai 
*/

#include <iostream>
using namespace std;

double luasPersegi(int s);
void tampilLuasPersegi(int s);
double lingkaran(int r);
void tampilLuasLingkaran(int r);
double volumeTabung(int t, int r);
void tampilVolumeTabung(int t, int r); 

int main() {
	int s, t, r, i =1;
	char lagi;
	do {
		cout << "No. " << i++ << endl;
		cout << "--- Menghitung Luas Persegi ---"<<endl;
		cout << "Masukkan sisi = ";
		cin >> s;
		tampilLuasPersegi(s);
		
		cout << "\n\n" << "--- Menghitung Luas Lingkaran ---"<<endl;
		cout << "Masukkan jari-jari = ";
		cin >> r;
		tampilLuasLingkaran(r);
		
		cout << "\n\n" << "--- Menghitung Volume Tabung ---"<<endl;
		cout << "Masukkan jari-jari = ";
		cin >> r;
		cout << "Masukkan tinggi = ";
		cin >> t;
		tampilVolumeTabung(t,r);
		
		cout << "\nUlang y/n ";
		cin >> lagi;
		cout << endl;
	}while(lagi == 'Y' || lagi == 'y');
	cout << "PROGRAM SELESAI";
	return 0;
}

double luasPersegi(int s) {
	double l = s*s;
	return l;
}

void tampilLuasPersegi(int s) {
	double luas = luasPersegi(s);
	cout << "Luas Persegi = " << s << " * " << s <<endl;
	cout << "Luas Persegi = " << luas;	
}

double luasLingkaran(int r) {
	double l = 3.14 * r * r;
	return l;
}

void tampilLuasLingkaran(int r) {
	double luas = luasLingkaran(r);
	cout << "Luas Lingkaran = 3.14 * " << r << " * " << r << endl;
	cout << "Luas Lingkaran = " << luas;	
}

double volumeTabung(int t, int r) {
	double v = 3.14 * r * r * t;
	return v;
}

void tampilVolumeTabung(int t, int r) {
	double volume = volumeTabung(t,r);
	cout << "Volume Tabung = 3.14 * " << r << " * " << r << " * " << t << endl;
	cout << "Volume Tabung = " << volume;
}
