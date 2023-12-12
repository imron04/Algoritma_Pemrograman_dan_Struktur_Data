#include <iostream>
using namespace std;

int main() {
	cout << "--------------------------"<<endl;
	cout << "GEROBAK FRIED CHICKEN"<<endl;
	cout << "--------------------------"<<endl;
	cout << "Kode \tJenis \tHarga" << endl;
	cout << "--------------------------"<<endl;
	cout << "D \tDada \tRp.2500"<<endl;
	cout << "P \tPaha \tRp.2000"<<endl;
	cout << "S \tSayap \tRp.1500"<<endl;
	cout << "--------------------------"<<endl;
	
	int qtyJenis;
	
	cout << "Banyak Jenis : ";
	cin >> qtyJenis;
	
	char kode[qtyJenis];
	int qtyPotong[qtyJenis];
	
	for(int i = 0; i < qtyJenis; i++) {
		cout << "Jenis ke-"<<i+1<<endl;
		cout << "Jenis Potong (D/P/S) : ";
		cin >> kode[i];
		cout << "Banyak Potong : ";
		cin >> qtyPotong[i];
		cout << endl;
	}
	
	cout << "\t\t\tGEROBAK FRIED CHICKEN"<<endl;
	cout << "------------------------------------------------------------------------------"<<endl;
	cout << "No. \t|Jenis Potong| \t|Harga Satuan| \t|Banyak Beli| \t|Jumlah Harga|"<<endl;
	cout << "------------------------------------------------------------------------------"<<endl;
	int harga, jmlBayar = 0; string jenis;
		for(int i = 0; i < qtyJenis; i++) {
			cout <<i+1<<"    \t ";
				if(kode[i] == 'D' || kode[i] == 'd') {
					jenis = "Dada"; harga = 2500;
				} else if (kode[i] == 'P' || kode[i] == 'p') {
					jenis = "Paha"; harga = 2000;
				} else if (kode[i] == 'S' || kode[i] == 's') {
					jenis = "Sayap"; harga = 1500;
				} else {
					jenis = "INVALID"; harga = 0;
				}
			cout << jenis << " \t\t Rp. " << harga << " \t\t " << qtyPotong[i] << " \t Rp. " << harga*qtyPotong[i];
			jmlBayar += harga*qtyPotong[i];
			cout << endl;
		}
	cout << "------------------------------------------------------------------------------"<<endl;
	cout << "\t\t\t\t\t Jumlah Bayar \t: Rp. " << jmlBayar << endl;
	cout << "\t\t\t\t\t PPN 10% \t: Rp. " << jmlBayar*0.1 << endl;
	cout << "\t\t\t\t\t Total Bayar \t: Rp. " << jmlBayar+(jmlBayar*0.1)<<endl;
	cout << "------------------------------------------------------------------------------"<<endl;
	
	
	return 0;
}
