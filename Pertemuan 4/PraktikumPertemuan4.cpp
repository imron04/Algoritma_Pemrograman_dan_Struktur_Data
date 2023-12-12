#include <iostream>
using namespace std;

int main() {
	
//	for(int a = 1; a <= 10; a++){
//		cout << "*";
//	}
	
//	int awal,akhir;
//	
//	cout << "Awal : ";
//	cin >> awal;
//	
//	cout << "\n Sampai :";
//	cin >> akhir;
//	
//	for(int a = awal; a <= akhir; a++){
//		cout<<"Perulanagan "<<a << "\n";
//	}


//	for (int a = 1; a <= 5; a++) {
//		for (int d = 1; d < b; d++){
//			cout << d;
//		}
//		cout << c << endl;
//	}

//	a = 3;
//	b = 3;
//	for (c = 1; c <= a){
//		for () {
//			cout << "";
//		}
//		cout << "";	
//	}

  int a,i,j,k; 
  cout << "Input lebar belah ketupat: "; 
  cin >> a; 
  cout << endl; 
  
  for(i=1; i<=a ;i++) { 
    for(j=1; j<=a-i ;j++) { 
      cout << " "; 
    } 
    for(k=1;k<=i;k++) { 
      cout << " *"; 
    } 
    cout << endl;
     } 
  
  for(i=1; i<=a ;i++) { 
    for(j=1 ;j<=i;j++) { 
      cout << " "; 
    } 
    for(k=1; k<=a-i ;k++) { 
      cout << " *"; 
    } 
    cout << endl; 
  } 
  return 0; 
}
