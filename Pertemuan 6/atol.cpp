#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
char kata[20];
float angka, a;
cout << "Masukkan Sembarang angka = ";
cin >> kata;
angka = atoi(kata);
a = angka + 8;
cout << "Hasil Perubahan ditambah dengan 5 = " << a;
getchar();
}
