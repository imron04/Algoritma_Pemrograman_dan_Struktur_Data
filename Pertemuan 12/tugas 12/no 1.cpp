#include <iostream>
using namespace std;

struct Name {
	char name[10];
};

struct Roll {
	char roll[10];
	struct Name info;
} data;

int main() {
	cout << "Masukkan Nama Mahasiswa : ";
	cin >> data.info.name;
	cout << "Status Mahasiswa : ";
	cin >> data.roll;
	
	cout << "Nama Mahasiswa : " << data.info.name <<"\nRoll : " << data.roll;
	
	return 0;
}
