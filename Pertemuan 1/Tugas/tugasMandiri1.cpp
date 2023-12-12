#include <iostream>
using namespace std;

int main(){
	char operasi;
	int a,b, hasil;

	cout<<"Pilih operasi (+, -, *) = ";
	cin>>operasi;
	
	cout<<"\nMasukkan nilai A : ";
	cin>>a;
	
	cout<<"\nMasukkan nilai B : ";
	cin>>b;
	
	cout<<"------------------- \n \n";
	
	if (operasi == '+') {
		cout<<"Pertambahan \n";
		cout<<a<<operasi<<b;
		hasil = a+b;
		
	} else if (operasi == '-') {
		cout<<"Pengurangan \n";
		cout<<a<<operasi<<b;
		hasil = a-b;
		
	} else if (operasi == '*') {
		cout<<"Perkalian \n";
		cout<<a<<operasi<<b;
		hasil = a*b;
		
	} else {
		cout<<"Operator tidak valid";
		return 1;
	}
	
	cout<<"\nHasil = "<<hasil;
	
return 0;	
}
