/*
1. 
#include <iostream>
using namespace std;
class Node {
	public:
		int value;
		Node* next;
};


int main() {
	Node* head;
	Node* one = Null;
	Node* two = Null;
	Node* three = Null;
	one = new Node();
	two = new Node();
	three = new Node();
	one->value = 1;
	two->value = 2;
	three->value = 3;
	one->next = two;
	two->next = three;
	three->next = Null;
	head = one;
	while (head != Null) {
		cout << head->next;
	} 
} 
-------------
2.
#include <iostream>
#include <stdlib.h>#include <malloc.h>
using namespace std;
#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define First(L) (L)
typedef int InfoType;
typedef struct telmtlist *address;
typedef struct telmtlist
{
InfoType info;
address next;
}elmtlist;
typedef address list;
void CiptaSenarai (list *L)
{
First(*L) = Nil;
}
list NodBaru(int m)
{
list n;
n = (list) malloc(sizeof(elmtlist));
if (n != NULL)
{
info (n) = m;
next (n) = Nil;
}
return n;
}
void SisipSenarai (list *L, list t, list p)
{
if (p == Nil)
{
t->next = *L;
*L = t;
}else
{
t->next = p->next;
p->next = t;
}
}
void CetakSenarai (list L)
{
list ps;
for (ps=L; ps!=Nil; ps=ps->next)
{
cout<<" "<<info(ps)<<" -->";
}
cout<<" NULL"<<endl;
}
InfoType Max(list L)
{
address Pmax, Pt;
Pmax = First(L);
if (next(Pmax) == Nil)
{
return (info(Pmax));
}else
{
Pt = next(Pmax);
while (Pt != Nil)
{
if (info(Pmax) < info(Pt))
{
Pmax = Pt;
}else
{
Pt = next(Pt);
}
}
return (info(Pmax));
}
}
InfoType Min(list L)
{
	address Pmin, Pt;
Pmin = First(L);
if (next(Pmin) == Nil)
{
return (info(Pmin));
}else
{
Pt = next (Pmin);
while (Pt != Nil)
{
if(info(Pmin) > info(Pt))
{
Pmin = Pt;
}else
{
Pt = next(Pt);
}
}
return (info(Pmin));
}
}
int main()
{
list pel;
list n;
int i, k, nilai, maks, min;
CiptaSenarai(&pel);
cout<<"Masukkan Banyak Data = ";
cin>>k;
for (i=1; i<=k; i++)
{
cout<<"Masukkan Data Senarai ke- "<<i<<" = ";
cin>>nilai;
n = NodBaru (nilai);
SisipSenarai (&pel, n, NULL);
}
cout<<endl;
CetakSenarai(pel);
maks = Max(pel);
min = Min(pel);
cout<<endl;
CetakSenarai(pel);
maks = Max(pel);
min = Min(pel);
cout<<endl;
cout<<"Nilai Terbesar : "<<maks;
cout<<endl;
cout<<"Nilai Terkecil : "<<min;
}
*/


