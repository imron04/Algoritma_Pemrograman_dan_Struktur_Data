#include <iostream>
using namespace std;

//void penjumlahan(int &total) {
//	total = total + 1;
//}
//
//int main() {
//	int hitung = 20, result = 0;
//	penjumlahan(hitung);
//	cout << "---Pass by Reference ---"
//}

int main() {
	//int a = 10, b;
	string a = "ABC";
	string *b = &a;
	cout << &a << endl;
	cout << *b;
}
