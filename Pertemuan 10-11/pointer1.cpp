#include <iostream>
using namespace std;

void kata(string *b) {
	cout << "Alamat = " << *b;
	cout << "Kata = " << b;
}

int main() {
	string b;
	cout << "masukkan kata = ";
	cin >> b;
	kata(&b);
}
