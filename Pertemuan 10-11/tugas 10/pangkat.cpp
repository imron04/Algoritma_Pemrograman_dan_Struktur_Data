#include <iostream>
using namespace std;

int pangkat(int x,int y);
void tampil(int x, int y);

int main() {
	int x, y;
	cout << "Nilai X = ";
	cin >> x;
	cout << "Nilai Y = ";
	cin >> y;
	tampil(x,y);
}

int pangkat(int x, int y) {
	int hasil;
	if (y == 0) {
		hasil = 1;
	} else {
		hasil = x * pangkat(x,y-1);
	}
	return hasil;
}

void tampil(int x, int y) {
	int tampil = pangkat(x,y);
	cout << x << " dipangkatkan "<< y << " = "<<tampil;
}
