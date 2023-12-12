#include <iostream>
using namespace std;

int main(){

char x[30];char y[30]; string z;
	cout<<"Masukkan NPM Anda : \n";
	cin>>x;
	
	cout<<"Masukkan NaMA aNDA : \n";
	cin>>y;
	
	cout<<"Masukkan Alamat Anda :";
	cin.ignore();
	getline(cin, z);
	
	cout<<"\n--------\n";
	
	cout<<"NPM Anda : \n"<<x;
	cout<<"Nama Anda : \n"<<y;
	cout<<"Alamat Anda : \n"<<z;
	return 0;
}

//variabel 
//int angka =10;
//string nama = "ron";
//float harga = 19.88; batas tipe data 2 angka dibelakang titik (.)
//double pi=3.1435;
//char huruf ="A";
//bool benar=true;
