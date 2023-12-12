#include <iostream>
using namespace std;
int main(){
string a, b, c;

stack:	
	cout << "Apa Nama Ibukota Indonesia : ";
	cin >> a;
	cout << "Jawaban Anda : " << a;
	if (a == "Jakarta" || a == "jakarta") {
		cout << "\nJawaban Anda Benar";
	} else {
		cout << "\nJawaban Anda Salah, Jawaban yang Benar : Jakarta";
	}
	
	cout << "\n\nBerapa 4+5 : ";
	cin >> b;
	cout << "Jawaban Anda Adalah = " << b;
	if(b == "9") {
		cout << "\nJawaban Anda : Benar";
	} else {
		cout << "\nJawaban Anda : Salah. Jawaban Yang Benar Adalah : 9";
	}
	
	cout << "\n\nSiapa Presiden Pertama Indonesia : ";
	cin >> c;
	cout << "Jawaban Anda Adalah : "<<c;
	if(c == "Soekarno" || c == "soekarno") {
		cout << "\nJawaban anda : benar";
	}else{
		cout <<"\nJawaban anda salah. Yang Benar Adalah : Soekarno";
	}
return 0 ;                     
}

