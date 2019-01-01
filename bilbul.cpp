#include <iostream> //Nama Umar Ibnu ZM
using namespace std; //NIM 311810909

void logika(float penyebut,float pembilang,float hasil)
{
	hasil=pembilang/penyebut;
}

int main()
{
	float a,b,c;
	cout<<"Masukan pembilang pecahan : ";
	cin>>a;
	cout<<"Masukan penyebut pecahan : ";
	cin>>b;
	c=a/b;
	cout<<"Hasil dari "<<a<<"/"<<b<<" adalah "<<c;
	logika(a,b,c);
}
