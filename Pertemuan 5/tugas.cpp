#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;


int main(){
	int a, b;
	char lagi;
	atas:
	cout << "Masukkan Bilangan = ";
	cin >> a;
	b = a % 2;
	printf("Nilai %d% % 2 adalah = %d", a,b);
	printf("\nIngin Hitung lagi [Y/T] : ");
	lagi = getche();
	if (lagi == 'Y' || lagi == 'y') {
		goto atas;
	}
	getch();

}
