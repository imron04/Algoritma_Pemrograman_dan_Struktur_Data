#include <iostream> 
using namespace std;

int main() {
	int x, bil = 0; 								// Membuat 2 Variabel integer, yaitu 'x' dan 'bil' yang bernilai 0  
	cout << "Masukkan Bilangan Pembatas Akhir : "; 	// Menampilkan "Masukkan Bilangan Pembatas Akhir : " ke layar
	cin >> x; 										// Mengambil input-an yang diketik lalu disimpan ke variabel x
	
	do 								// Menjalankan kode yang ada didalam kurung kurawal sekali
		{ 							// Kurung kurawal pembuka do
			if (bil >= x) 			// Jika nilai bil lebih besar atau sama dengan nilai x, jalankan kode dibawah
										
					break;				// Menghentikan program
					cout << bil << " "; // Menampilkan nilai bil dan spasi 
										
		} 							// Kurung kurawal penutup do
	while (bil+=4);					// Nilai bil ditambah 4 lalu mengulang kode do  
	getchar();						// Mengambil 1 karakter yang diinputkan
}

