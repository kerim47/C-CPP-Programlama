#include <iostream>

using namespace std;

struct birlesim{
	int tamsayi;
	union {
		char kar;
		float sayi;
	};
};

int main() {
	
	struct birlesim degerler[20];
	int i=0;
	do {
		cout<<"Lutfen bir tamsayi giriniz";
		cin>>degerler[i].tamsayi;
		i++;
		if(degerler[i].tamsayi == 1)
		{
			cout << "Lutfen karakter giriniz:";
			cin>>degerler[i].kar;
		}
} while(degerler[i].tamsayi ==0 || degerler[i].tamsayi == 1);
	return 0;
}
