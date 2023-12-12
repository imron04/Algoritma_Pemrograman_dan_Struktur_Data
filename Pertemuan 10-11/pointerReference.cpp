#include <iostream>
using namespace std;

// Pointer dereference
//int main() {
//	int i, a, *r;
//	
//	i = 75;
//	a = i;
//	r = &i;
//	
//	cout << "Nilai Ilham = " << i << endl;
//	cout << "Nilai Amir = " << a << endl;
//	cout << "Nilai Raka = " << r;
//	
//}


// Pointer Reference
//int main() {
//	int ilham, rafli, *raka;
//	ilham = 75;
//	raka = &ilham;
//	rafli = *raka;
//	
//	cout << "Nilai Ilham = " << ilham << endl;
//	cout << "Nilai Raka = " << raka << endl;
//	cout << "Nilai Rafli = " << rafli;
//}

//Implementasi Perubahan Nilai dengan Pointer
//int main() {
//	int y = 93;
//	int *h;
//	
//	cout << "Nilai awal y = " << y << endl;
//	h = &y;
//	cout << "Nilai h sekarang = " << *h << endl;
//	*h = 50;
//	cout << "nilai h sekarang = " << *h;
//}

//Implementasi Pointer ke Pointer
//int main() {
//	int i, *r, *a;
//	i = 75;
//	
//	cout << "Nilai i = " << i << endl;
//	r = &i;
//	a = &r;
//	
//	cout << "Nilai R hasil mengakses i " << *r <<endl;
//	cout << "nilai a hasil mengakses i " << *a;
//}

//Array Pointer
//int main() {
//	int i, nilai[5], *ptrnilai;
//	ptrnilai = nilai;
//	
//	for(i = 1; i<=5; i++) {
//		cout << "Masukkan Nilai Elemen ke-"<<i<<" = ";
//		cin >> nilai[i];
//	}
//	cout << endl;
//	
//	cout << "Hasil Pengaksesan elemen pada array";
//	cout << "Pointer"<<endl<<endl;
//	
//	for(i=1;i<=5;i++){
//		cout << "Elemen "<<i<<"Nilai "<<nilai[i];
//		cout << ", Menempati alamat memori = " << &ptrnilai[i] << endl;
//	}
//	
//}


// Implementasi Pointer pada String
int main() {
	char band_metal[] = "SEPULTURA";
	char *band_punk = "RANCID";
	cout << "Nama Band Metal = " << band_metal << endl;
	cout << "Nama Band Punk = " << band_punk;
	band_punk +=3; // Menambah Nilai Pointer;
	cout << "Nama Band Metal = " << band_metal << endl;
	cout << "Nama Band Punk = " << band_punk;
}





















