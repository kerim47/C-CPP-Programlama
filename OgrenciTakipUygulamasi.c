//                                            Ogrenci Takip Uygulamasi                        

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float ort = .0;

struct ogrenci{ //Ogrenciye ait bilgiler struct yapisi icinde kullanildi.

	char ad[15],soyad[15];
	int no,vize,final;
};
void kayitEkle(struct ogrenci* ptr,int ogrenciSayisi) // Ogrenciler bu fonksiyonda kayit altina alindi.
{
	int i=0;
	int no,vize,final;
	char ad[15],soyad[15];
	while(i<ogrenciSayisi) //Ogrenci sayisi kadar kayit atama bolmesi
	{
		printf("%d.\nOgrenci adi..: ",i+1);
		scanf("%s",ad);
		printf("Ogrenci soyadi..:");
		scanf("%s",soyad);
		printf("Ogrenci no..:");
		scanf("%d",&no);
		printf("Ogrenci vize..:");
		scanf("%d",&vize);
		printf("Ogrenci final..:");
		scanf("%d",&final);
		
		strcpy(ptr->ad,ad);
		strcpy(ptr->soyad,soyad);
		ptr->no = no;
		ptr->vize = vize;
		ptr->final = final;
		
		i++;
		ptr++; // Adresteki deger artirildi.
	}
}
void ogrenciListele(struct ogrenci* ptr,int boyut) //Kayit edilen ogrenciler bu fonksiyonda yazildi.
{
	int i=0;
	while(i<boyut)//ogrenci sayisi donguden gecirildi bu sayede tum ogrenciler yazilabilecek.
	{
		printf("----------------------");
		printf("\n\t%d.\nAdi   ..: %s\n",i+1,ptr->ad);
		printf("Soyadi..: %s\n",ptr->soyad);
		printf("No    ..: %d\n",ptr->no);
		printf("Vize  ..: %d\n",ptr->vize);
		printf("Final ..: %d\n", ptr->final);
		printf("----------------------\n");
		
		i++;
		ptr++;
	}
}
void ogrenciGuncelle(struct ogrenci* ptr, int boyut)
{
	int ogrenciNo;
	int i=0;
	printf("Guncellemek istediginiz ogrenci numarasi giriniz..: ");
	scanf("%d",&ogrenciNo);
	
	int j=0;
	int no,vize,final;
	char ad[15],soyad[15];
	while(j<boyut) //Ogrenci sayisi kadar kayit atama bolmesi
	{
		if(ogrenciNo==ptr->no)
		{
			printf("%d.\nOgrenci adi..: ",i+1);
			scanf("%s",ad);
			printf("Ogrenci soyadi..:");
			scanf("%s",soyad);
			printf("Ogrenci no..:");
			scanf("%d",&no);
			printf("Ogrenci vize..:");
			scanf("%d",&vize);
			printf("Ogrenci final..:");
			scanf("%d",&final);
			
			strcpy(ptr->ad,ad);
			strcpy(ptr->soyad,soyad);
			ptr->no = no;
			ptr->vize = vize;
			ptr->final = final;
		}
		
		j++;
		ptr++; // Adresteki deger artirildi.
    }
}
void sinifOrt(struct ogrenci* ptr, int boyut) // sinif ortalamasi olusturma
{
	int i=0;
	
	while(i<boyut)
	{
		ort += (float)((ptr->vize)*(2.0/5)+(ptr->final)*(3.0/5)); // Ogrenci vize ve final notlari hesaplandi ve ort degiskenine atildi.
		i++;
		ptr++;
	}
	ort /= boyut;
	printf("Sinif ortalamasi %f dir.",ort);
	sleep(2);
}
void basariliOgrenci(struct ogrenci* ptr, int boyut)
{
	int i = 0;
	float ogrenciOrt,enKucuk;
	char* basariliKisi[15];
	enKucuk = (float)((ptr->vize)*(2.0/5)+(ptr->final)*(3.0/5)); // Karsilastirma yapmak icin ilk ogrencinin ortalamasi enkucuk degiskenine atildi
	ptr++;
	while(i+1<boyut)
	{
		ogrenciOrt = (float)((ptr->vize)*(2.0/5)+(ptr->final)*(3.0/5));
		
		if(enKucuk<ogrenciOrt) // En buyuk ortalamaya sahip ogrenci sorgulandi.VE enKucuk degiskenine atildi
		{
			enKucuk = ogrenciOrt;
		}
		i++;
		ptr++;
	}
	printf("En basarili ogrencinin ortalamasi..: %.2f ",enKucuk);
}
int main()
{
	int ogrenciSayisi,secim;
	struct ogrenci ogrenciBilgi;
	
	printf("Kac ogrenci girmek istiyorsunuz..: ");// Bellekten yer ayirmak icin kullanildi.
	scanf("%d",&ogrenciSayisi);
	struct ogrenci *yerAyirma = (struct ogrenci*)malloc(ogrenciSayisi*sizeof(struct ogrenci));
	struct ogrenci *ptr = yerAyirma;
	
	do // Ana menu
	{
		
		printf("\n\n%75s","*************************************************\n");
		printf("%75s","*****      1--->Ogrenci Yeni Kayit Ekle     *****\n");
		printf("%75s","*****      2--->Ogrenci Listele             *****\n");
		printf("%75s","*****      3--->Ogrenci Guncelle            *****\n");
		printf("%75s","*****      4--->Sinif ortalamasi            *****\n");
		printf("%75s","*****      5--->Sinif basarili ogrenci      *****\n");
		printf("%75s","*****      6--->Cikis                       *****\n");
		printf("%75s","*************************************************\n");
		
		printf("Seciminizi Girin..: ");
		scanf("%d",&secim);
		
		if(secim<1 || secim>6) // kullanici karakter girmesi durumu programi sonlandirildi
		{
			printf("Hatali kullanim!\n");
			printf("Programdan cikiliyor...");
			sleep(2);
			exit(0);
		}
		system("cls");
		
		switch(secim)
		{
			case 1:
				kayitEkle(ptr,ogrenciSayisi);//struct ogrenci ve ogrenci sayisi gonderildi
				break;
			case 2:
				ogrenciListele(ptr,ogrenciSayisi);//struct ogrenci ve ogrenci sayisi gonderildi
				break;
			case 3:
				ogrenciGuncelle(ptr,ogrenciSayisi);//struct ogrenci ve ogrenci sayisi gonderildi
				break;
			case 4:
				sinifOrt(ptr,ogrenciSayisi);//struct ogrenci ve ogrenci sayisi gonderildi
				break;
			case 5:
				basariliOgrenci(ptr,ogrenciSayisi);//struct ogrenci ve ogrenci sayisi gonderildi
				break;
			case 6:
				exit(0);
			default:
				printf("Gecerli bir deger girin.");
				break;
			
		}
	}while(1);
		
}

