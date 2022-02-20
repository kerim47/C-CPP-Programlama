#include <iostream>
using namespace std;


struct insan {
	
	char ad[10];
	char soyad[10];
	int kimlik_no;
	
};

insan veri_gir()
{
	insan ogr;
	cout<<"ogrenci adini giriniz : "<<endl;
	cin>>ogr.ad;
	cout<<"Soyadini giriniz : "<<endl;
	cin>>ogr.soyad;
	cout<<"kimlik numranizi giiriniz : "<<endl;
	cin>>ogr.kimlik_no;
	
	return ogr;
}
int main()
{
	insan ogr1=veri_gir();
	cout<<"ogrenci adini : "<<ogr1.ad<<endl;
	cout<<"Soyadi : "<<ogr1.soyad<<endl;
	cout<<"kimlik numraniz : "<<ogr1.kimlik_no<<endl;
	
	return 0;
}
