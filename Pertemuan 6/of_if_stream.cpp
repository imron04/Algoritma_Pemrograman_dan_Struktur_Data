#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//ofstream
//ofstream myfile;
// myfile.open("AAAAAAAAAAAAAAAAAAAAAA.txt",ios::app);
// cout<<"OPERASI FILE OFSTREAM"<<endl;
// cout<<"--------------"<<endl;
// if(!myfile.fail())
// {
// myfile<<"Belajar OPERASI FILE OFSTREAM"<<endl;
// myfile.close();
// cout<<"Text telah ditulis ke dalam File"<<endl;
// }else{
// cout<<"File tidak ditemukan"<<endl;
// }


// ifstream, cek file
ifstream myfile;
char sv_text;
myfile.open("AAAAAAAAAAAAAAAAAAAAAA.txt");
cout << "Operasi 2"<<endl;
cout << "-------------"<<endl;
if(!myfile.fail())
 {
 cout << " ";
 while (!myfile.eof()) {
 	myfile.get(sv_text);
 	cout << sv_text;
 }
  myfile.close();
 cout<<"Text telah ditulis ke dalam File"<<endl;
 }else{
 cout<<"File tidak ditemukan"<<endl;
 }
 
 getchar();
 return 0;
 
}
