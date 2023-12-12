#include <iostream>
using namespace std;

int main() {
	int baris, kolom;
	
	cout << "Masukkan Panjang Baris = ";
	cin >> baris;
	cout << "Masukkan Panjang Kolom = ";
	cin >> kolom;
	
	int matriks1[baris][kolom];
	int matriks2[baris][kolom];
	
	cout << endl;
	//Input Data Matriks 1
	cout << "Matriks A"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << "Masukkan Nilai Baris "<<i<<" Kolom "<<j<<" = ";
			cin >> matriks1[i][j];
		}
		cout << endl;
	}
	
	//Input Data Matriks 2
	cout << "Matriks B"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << "Masukkan Nilai Baris "<<i<<" Kolom "<<j<<" = ";
			cin >> matriks2[i][j];
		}
		cout << endl;
	}
	
	//Cetak Matriks 1
	cout << "Matriks A"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
	}
	
//	//Cetak Matriks 2
	cout << "Matriks B"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
	}

// Cetak Matriks A dan Matriks B dengan jumlah baris dan kolom yang sama
//cout << "Matriks A \t\t Matriks B" << endl;
//for (int i = 0; i < baris; i++) {
//    for (int j = 0; j < kolom; j++) {
//        cout << matriks1[i][j] << " ";
//    }
//
//    cout << "           \t"; // Menambahkan spasi untuk memisahkan Matriks A dan Matriks B
//
//    for (int j = 0; j < kolom; j++) {
//        cout << matriks2[i][j] << " ";
//    }
//    cout << endl;
//}
	
	//Penjumlahan Matriks
	cout << "Penjumlahan Matriks A + B"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << matriks1[i][j] << " + " << matriks2[i][j]<< " = " << matriks1[i][j]+matriks2[i][j]<<" \t";
		}
		cout << endl;
	}
	
	cout << endl;
	
	//Pengurangan Matriks
	cout << "Pengurangan Matriks A - B"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << matriks1[i][j] << " - " << matriks2[i][j]<< " = " << matriks1[i][j]-matriks2[i][j]<<" \t";
		}
		cout << endl;
	}
	
	int kali[baris][kolom];
	 for(int i = 0; i < baris; ++i) {
        for(int j = 0; j < kolom; ++j)
        {
            kali[i][j]=0;
        }
    }
    
	cout << endl;
	
	//Perkalian Matriks
	for(int i = 0; i < baris; ++i) {
        for(int j = 0; j < kolom; ++j) {
            for(int k = 0; k < kolom; ++k) {
                kali[i][j] += matriks1[i][k] * matriks2[k][j]; 
            }
        }
        cout << endl;
    }
    
    //Menampilkan Hasil Perkalian
    cout << "Hasil Perkalian Matriks A * B"<<endl;
    for(int i = 0; i < baris; ++i) 
    	for(int j = 0; j < kolom; ++j) {
        cout << " "<< kali[i][j];
        if(j == kolom-1)
            cout << endl;	
	}		
	return 0;
}
