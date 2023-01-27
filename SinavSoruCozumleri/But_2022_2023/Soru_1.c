#include <stdio.h>

// Fonksyion prototipi
void PiHesapla(int, int, int);

int main()
{
	// Ozel degisken tanımlamalari
	int baslangicDegeri, bitisDegeri, artisDegeri;
	
	baslangicDegeri = 10;
	bitisDegeri     = 50;
	artisDegeri     = 5;
	
	// Fonksiyon çağrılma
	PiHesapla(baslangicDegeri, bitisDegeri, artisDegeri);

	return 0;
}

void PiHesapla(int baslangicDegeri, int bitisDegeri, int artisDegeri)
{
	int i;
	double hesapla;
	printf("%s%20s\n", "Pi Degeri", "Pi Degeri Karsiligi");
	for(i = baslangicDegeri; i<= bitisDegeri; i += artisDegeri) 
	{
		hesapla = (22.0/7) * i;
		printf("%d%15lf\n", i, hesapla);
	}
}
