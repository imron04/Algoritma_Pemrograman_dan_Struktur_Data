#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
// Call by reference (function)

void tambah(int &c, int &d);

main() {
	int a,b;
	a = 4;
	b = 6;
	
	cout << "Nilai sebelum pemanggilan fungsi";
	cout << "\na = " << a << "b = " << b;
	
	tambah(a,b);
	
	cout << endl;
	
	cout << "\nNilai Setelah Pemanggilan Fungsi";
	cout << "\na = " << a << "b = " << b;
	getch();
}

void tambah(int &c, int &d) {
	*c += 7;
	*d += 5;
	cout << endl;
	cout << "\nNilai di akhir fungsi tambah()";
	cout << "\nc = "<<*c<< "\nd = "<<*d;
}
