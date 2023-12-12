//#include <iostream>
//#include <stdio.h>
//#include <windows.h>
//#include <iomanip>
//#include <cstdio>
//#include <conio.h>
//using namespace std;
//
//int main()
//{
//	int i,menu; // deklarasi variabel i dan menu
//	struct // Tipe data yang menyimpan tipe data lain
//	{	char nama[20],lagi; // variabel nama & lagi yang bertipedatakan char
//		int a,b,c; // variabel int
//		float nilaiakhir,ket; // variabel float
//	}barang[5]; // array barang
//
//
//cout<<" Masukan Input Jumlah Barang : ";
//cin>>menu; // Masukkan Input ke variabel menu
//cout<<endl; // cetak baris baru
//
//for (i=1;i<=menu;i++) // Perulangan dengan nilai awai variabel i = 1, kondisi perulangan nilai i kurang dari atau sama dengan nilai menu 
//{
//cout<<" Data Penjualan Barang Ke – " <<i<<endl; // cetak string dan baris baru
//cout<<" Nama Barang : " ; // cetak string
//cin>>barang[i].nama; // masukkan nilai inputan ke dalam array nama
//cout <<" Data tahun 2001 " << endl;
//cout<<" Jumlah Penjualan : ";
//cin>>barang[i].a; // memasukkan nilai ke array barang
//cout << " Data tahun 2002 " << endl;
//cout<<" Jumlah Penjualan : ";
//cin>>barang[i].b;// memasukkan nilai ke array barang
//cout << " Data tahun 2003 " << endl;
//cout<<" Jumlah Penjualan : ";
//cin>>barang[i].c;// memasukkan nilai ke array barang
//cout<<endl; 
//}
//
//cout<<endl; // cetak baris baru
//cout<<" HASIL PENJUALAN BARANG"<<endl; // cetak string
//cout<<"____________________________________________________"<<endl; // cetak underscore
//cout<<"____________________________________________________"<<endl; // cetak underscore
//cout<<"No. \tNama Barang \t2001 \t2002 \t2003"<<endl; // cetak string
//cout<<"____________________________________________________"<<endl; // cetak underscore
//
//for (i=1;i<=menu;i++){	
//	cout<<i; //cetak nilai i
//	cout<< "\t" << barang[i].nama; // cetak nilai barang
//	cout<< "\t\t" <<barang[i].a;// memasukkan nilai ke array barang
//	cout<< "\t" <<barang[i].b;// memasukkan nilai ke array barang
//	cout<< "\t" <<barang[i].c<<endl;// memasukkan nilai ke array barang
//}
//cout<<endl;
//getch();
//
//}

#include <iostream>
//#include <array>
using namespace std;

int main() {
int x,y;
cout << "Masukkan Baris = ";
cin >> x;

cout << "Masukkan Kolom = ";
cin >> y;

int arr[x][y];

//Input Array
for(int i = 0; i < x; i++) {
	for(int j = 0; j < y; j++) {
		cout << "Nilai untuk "<<i<<" "<<j << " ";
		cin >> arr[i][j];
	}
	cout << endl;
}

//Cetak Array
for(int i = 0; i < x; i++) {
	for(int j = 0; j < y; j++) {
		cout << arr[i][j] << "\t\t";
	}
	cout << endl << endl;
}

}


