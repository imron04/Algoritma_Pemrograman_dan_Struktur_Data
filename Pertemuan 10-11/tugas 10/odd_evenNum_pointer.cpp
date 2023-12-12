#include <iostream>
using namespace std;

int main() {
	int num[] = {200,201,200};
	int *pNum = num;
	
	for(int i = 0; i < 3; i ++) {
		if (pNum[i] % 2 == 0) {
			cout << pNum[i] << " ";
		} else {
			cout << pNum[i] <<" ";
		}
	}
}
