#include <iostream>
#include <conio.h>
using namespace std;

void tambah(int a, int b);
int main() {
	int a = 5, b = 9;
	cout << "Nilai Sebelum Menggunakan Fungsi\n"; 
	cout << "a = " <<a<<"b = "<<b;
	tambah(a,b);
	
	cout << "\nNilai Setelah Menggunakan Fungsi\n"; 
	cout <<"a ="<<a<<" b = "<<b;
	getche();
}

void tambah(int m , int n) {
	m+=5;
	n+=7;
	
	cout << "\nNilai didalam Fungsi tambah()\n"<<endl;
	cout << "m = " << m << " n = " << n << endl;
}
