#include <iostream>

	using namespace std;

int main() {
	
	int x,y,sonuc;
	cout<<"Sayilari giriniz : ";
	cin>>x>>y;
	sonuc=x>y;
	if(sonuc)
	cout<<"\nBirinci sayi ikinci sayidan buyuktur.";
	else
	cout<<"\nIkinci sayi birinci sayidan buyuktur.";
	
}
