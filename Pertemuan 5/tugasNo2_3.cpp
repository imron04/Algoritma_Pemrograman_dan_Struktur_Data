#include <iostream>
using namespace std;

int main () {
// No. 2
int i = 1, b = 20, c;
	
	for (int i ; i <= b ; i++) {
		if(i%2==1){ 
		cout << i << " ";
		c += i;
		}
	}
	cout << " = " << c;	

cout << "\n\n ----------------- \n\n";
	
// No. 3
int x;
for (int i ; i <= b ; i++) {
		if(i%2==0){ 
		cout << i << " ";
		x += i;
		}
	}
	cout << " = " << x;	
	
}


