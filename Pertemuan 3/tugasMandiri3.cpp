#include <iostream>
using namespace std;

int main() {
	int nilai1, nilai2, nilai3, avg;
	string nama, hadiah;
	
	cout<<"=== Program Percabangan ==";
	
	cout<<"\n \n ---- Menggunakan IF-ELSE-IF ----";
	cout<<"\nMasukkan Nama Anda : ";
	getline(cin, nama);
	cout<<"Masukkan Nilai Pertandingan 1 : ";
	cin>>nilai1;
	cout<<"Masukkan Nilai Pertandingan 2 : ";
	cin>>nilai2;
	cout<<"Masukkan Nilai Pertandingan 3 : ";
	cin>>nilai3;
	
	avg = (nilai1+nilai2+nilai3)/3;
	
	if (avg >= 85){
		hadiah = "\nMendapatkan Hadiah Komputer Core i5";
	} else if (avg >= 70){
		hadiah = "\nMendapatkan Hadiah Uang Sebesar Rp. 2.500.000";
	} else if (avg < 70){
		hadiah = "\nMendapatkan Hadiah Hiburan";
	} else {
		hadiah = "\nTidak Ada Hadiah";
	}
	
	cout<<"\nNama Siswa Adalah : "<<nama;
	cout<<"\nNilai Pertandingan 1 Adalah = "<<nilai1;
	cout<<"\nNilai Pertandingan 2 Adalah = "<<nilai2;
	cout<<"\nNilai Pertandingan 3 Adalah = "<<nilai3;
	cout<<"\nNilai Rata-Ratanya Adalah = "<<avg;
	cout<<hadiah;
	

// -------------------- Nested If -----------------

	cout<<"\n \n ---- Menggunakan Nested IF ----";
	cout<<"\nMasukkan Nama Anda : ";
	cin.ignore();
	getline(cin, nama);
	cout<<"Masukkan Nilai Pertandingan 1 : ";
	cin>>nilai1;
	cout<<"Masukkan Nilai Pertandingan 2 : ";
	cin>>nilai2;
	cout<<"Masukkan Nilai Pertandingan 3 : ";
	cin>>nilai3;
	
	avg = (nilai1+nilai2+nilai3)/3;
	
	if (avg > 0){
		if (avg >= 85){
			hadiah = "\nMendapatkan Hadiah Komputer Core i5";
		} else if (avg >= 70){
			hadiah = "\nMendapatkan Hadiah Uang Sebesar Rp. 2.500.000";
		} else {
			hadiah = "\nMendapatkan Hadiah Hiburan";
	}
	}else{
		hadiah = "\nMohon Masukkan Nilai Yang Valid";
	}
	
	cout<<"\nNama Siswa Adalah : "<<nama;
	cout<<"\nNilai Pertandingan 1 Adalah = "<<nilai1;
	cout<<"\nNilai Pertandingan 2 Adalah = "<<nilai2;
	cout<<"\nNilai Pertandingan 3 Adalah = "<<nilai3;
	cout<<"\nNilai Rata-Ratanya Adalah = "<<avg;
	cout<<hadiah;
	
	
	// --------- Menggunakan Switch Case -----------
	cout<<"\n \n----- Switch Case -----";
	cout<<"\nMasukkan Nama Anda : ";
	cin.ignore();
	getline(cin, nama);
	cout<<"Masukkan Nilai Pertandingan 1 : ";
	cin>>nilai1;
	cout<<"Masukkan Nilai Pertandingan 2 : ";
	cin>>nilai2;
	cout<<"Masukkan Nilai Pertandingan 3 : ";
	cin>>nilai3;
	
	avg = (nilai1+nilai2+nilai3)/3;
	
	char grade;
	
	if (avg >= 85){
		grade = 'A';
	} else if (avg >= 70){
		grade = 'B';
	} else{
		grade = 'C';
	}
	
	switch(grade) {
		case 'A':
			hadiah = "\nAnda Mendapatkan Komputer Core i5";
			break;
		case 'B':
			hadiah = "\nAnda Mendapatkan Rp. 2.500.000";
			break;
		case 'C':
			hadiah = "\nAnda Mendapatkan Hadiah Hiburan";
			break;
		default :
			hadiah = "\nKosong";
	}
	
	cout<<"\nNama Siswa Adalah : "<<nama;
	cout<<"\nNilai Pertandingan 1 Adalah = "<<nilai1;
	cout<<"\nNilai Pertandingan 2 Adalah = "<<nilai2;
	cout<<"\nNilai Pertandingan 3 Adalah = "<<nilai3;
	cout<<"\nNilai Rata-Ratanya Adalah = "<<avg;
	cout<<hadiah;
	
	}	
