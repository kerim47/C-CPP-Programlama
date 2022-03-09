#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define NULL 0

int arabaSayisi=70;

struct giris{
	char kullaniciAdi[15],mail[20];
	int sifre;
	
};
struct araba{    // Araba bilgileri araba strct yapisinda tanimlandi.
	
	char marka[15], seri[15], model[15], renk[15];
	int yil, km, fiyat;
	
};
FILE* dosya;
FILE* arabaDosya;
FILE* gecici;

struct giris Giris;

struct araba arabaBilgileri;

void arabaEkle(){
	
	system("cls");
	printf("Eklemek istediginiz aracin : \n");
	printf("Markasi..:");      scanf("%s",arabaBilgileri.marka);
	printf("Seri..: ");        scanf("%s",arabaBilgileri.seri);
	printf("Modeli..: ");      scanf("%s",arabaBilgileri.model);
	printf("Rengi..: ");       scanf("%s",arabaBilgileri.renk);
	printf("Uretim yili..: "); scanf("%d",&arabaBilgileri.yil);
	printf("Km..: ");          scanf("%d",&arabaBilgileri.km);
	printf("Fiyati..: ");	   scanf("%d",&arabaBilgileri.fiyat);
	
	if((arabaDosya=fopen("arabaKayit.txt","a"))!=NULL)
	{
		fprintf(arabaDosya,"%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,arabaBilgileri.yil,arabaBilgileri.km,arabaBilgileri.fiyat);
		printf("Araba ekleme basarili.\nGiris ekranina yonlendiriliyorsunuz...");
		arabaSayisi++;
		Sleep(2);
	}
	else
	{
		printf("Dosya olusturulamadi.Kayit basarisiz!");
	}
	fclose(arabaDosya);
		
}
void arabaBul(){
	system("cls");
	int sonuc=0;
	char bulunacakAraba[15];
	
	printf("Aradiginiz arabanin markasini girin..: "); scanf("%s",bulunacakAraba);
	printf("Marka\tSeri\tModel\tRenk\tYil\tkm\tFiyat\n");
	printf("-----\t----\t-----\t----\t---\t--\t-----\n");
	if((arabaDosya=fopen("arabaKayit.txt","r"))!=NULL)
	{
		while(!feof(arabaDosya))
		{
			fscanf(arabaDosya,"%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,&arabaBilgileri.yil,&arabaBilgileri.km,&arabaBilgileri.fiyat);
			if(strcmp(arabaBilgileri.marka,bulunacakAraba) == 0)
			{
				sonuc=1;
				printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,arabaBilgileri.yil,arabaBilgileri.km,arabaBilgileri.fiyat);
			}
		}
	}
	else
	{
		printf("Dosya olusturulamadi.Kayit basarisiz!");
	}
	fclose(arabaDosya);
	if(sonuc==0)
	{
		printf("%s adli araba markasi bulunmamaktadir.",bulunacakAraba);
	}
}
void yedekle(){
	
	system("cls");
	if((arabaDosya=fopen("arabaKayit.txt","r"))!=NULL)
	{
		if((gecici=fopen("geciciKayit.txt","w"))!=NULL)
		{
			while(!feof(arabaDosya))
			{
				fscanf(arabaDosya,"%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,&arabaBilgileri.yil,&arabaBilgileri.km,&arabaBilgileri.fiyat);
				fprintf(gecici,"%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,arabaBilgileri.yil,arabaBilgileri.km,arabaBilgileri.fiyat);
			}
			
		}
	}
	remove("arabaKayit.txt");
	fclose(gecici);
	fclose(arabaDosya);
	
}
void guncelle(char* bulunacakArabaa){
	system("cls");
	if((gecici=fopen("geciciKayit.txt","r"))!=NULL)
	{
		if((arabaDosya=fopen("arabaKayit.txt","w"))!=NULL)
		{
			while(!feof(gecici))
			{
				fscanf(gecici,"%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,&arabaBilgileri.yil,&arabaBilgileri.km,&arabaBilgileri.fiyat);
				if(strcmp(arabaBilgileri.marka,bulunacakArabaa) != 0)
				{
					fprintf(arabaDosya,"%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,arabaBilgileri.yil,arabaBilgileri.km,arabaBilgileri.fiyat);
				}	
			
				
			}
			
		}
	}
	fclose(gecici);
	fclose(arabaDosya);	
}
void aracSil(){
	system("cls");
	int sonuc=0;
	char bulunacakAraba[15];
	
	printf("Silmek istediginiz arabanin markasini girin..: "); scanf("%s",bulunacakAraba);
	if((arabaDosya=fopen("arabaKayit.txt","r"))!=NULL)
	{
		while(!feof(arabaDosya))
		{
			fscanf(arabaDosya,"%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,&arabaBilgileri.yil,&arabaBilgileri.km,&arabaBilgileri.fiyat);
			if(strcmp(arabaBilgileri.marka,bulunacakAraba) == 0)
			{
				yedekle();
				guncelle(bulunacakAraba);
				sonuc=1;
				break;
			}
		}
	}
	else
	{
		printf("Dosya olusturulamadi.Kayit basarisiz!");
	}
	fclose(arabaDosya);
	if(sonuc==0)
	{
		printf("%s adli araba markasi bulunmamaktadir.",bulunacakAraba);
	}
	else
	{
		printf("\nSilme islemi basarili bir sekilde gerceklesmistir.\n");
	}
}
void aracListele(){
	system("cls");
	printf("Marka\t  Seri\tModel\tRenk\tYil\tkm\tFiyat\n");
	printf("-----\t----\t-----\t----\t---\t--\t-----\n");
	if((arabaDosya=fopen("arabaKayit.txt","r"))!=NULL)
	{
		while(!feof(arabaDosya))
		{
			fscanf(arabaDosya,"%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,&arabaBilgileri.yil,&arabaBilgileri.km,&arabaBilgileri.fiyat);
			printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\n",arabaBilgileri.marka,arabaBilgileri.seri,arabaBilgileri.model,arabaBilgileri.renk,arabaBilgileri.yil,arabaBilgileri.km,arabaBilgileri.fiyat);
		}
	}
	else
	{
		printf("Dosya olusturulamadi.Kayit basarisiz!");
	}
	fclose(arabaDosya);
	
}
void anaMenu(){
	
	int secim;
	while(1)
	{
		printf("\n\n\n\n\n");
		printf("%75s","*************************************\n");
		printf("%75s","*****       1-->Arac Ekle       *****\n");
		printf("%75s","*****       2-->Arac Bul        *****\n");
		printf("%75s","*****       3-->Arac Listele    *****\n");
		printf("%75s","*****       4-->Arac Sil        *****\n");
		printf("%75s","*****       0-->Cikis           *****\n");
		printf("%75s","*************************************\n");
		
		printf("Seciminizi Giriniz..: ");
		scanf("%d",&secim);
		
		switch(secim)
		{
			case 1:
				arabaEkle();
				break;
			case 2:
				arabaBul();
				break;
			case 3:
				aracListele();
				break;
			case 4:
				aracSil();
				break;
			case 0:
				exit(0);
			default:
				printf("Gecerli bir deger gir...");
				break;
				
		}
	}
}
void kayitOl(){
	system("cls");
	printf("Kullanici adi..: "); gets(Giris.kullaniciAdi);
	printf("Mail Adresi  ..: "); gets(Giris.mail);
	printf("Sifre        ..: "); scanf("%d",&Giris.sifre);
	
	if((dosya=fopen("kayit.txt","a"))!=NULL)
	{
		fprintf(dosya,"%s\t%s\t%d\n",Giris.kullaniciAdi,Giris.mail,Giris.sifre);
		printf("Kayit olma basarili.\nGiris ekranina yonlendiriliyorsunuz...");
		Sleep(2);
	}
	else
	{
		printf("Dosya olusturulamadi.Kayit basarisiz!");
	}
	fclose(dosya);
}
void girisYap(){
	tekrar:
	fflush(stdin);
	system("cls");
	
	char kullaniciAdi[15];
	int sifre,sonuc=0;
	printf("Kullanici adi..: "); gets(kullaniciAdi);
	printf("Sifre        ..: "); scanf("%d",&sifre);
	
	if((dosya=fopen("kayit.txt","r"))!=NULL)
	{
		while(!feof(dosya))
		{
			fscanf(dosya,"%s\t%s\t%d\n",Giris.kullaniciAdi,Giris.mail,&Giris.sifre);
			if(strcmp(Giris.kullaniciAdi,kullaniciAdi) == 0 && Giris.sifre == sifre)
			{
				sonuc=1;
				printf("Giris Basarili..\n");
				printf("Ana menuye yonlendiriliyorsunuz..\n");
				Sleep(2);
				anaMenu();
			
			}
		}
	}
	else
	{
		printf("Dosya olusturulamadi.Kayit basarisiz!");
	}
	fclose(dosya);
	if(sonuc == 0)
	{
		printf("Kullanici adi veya sifre hatali!!\ntekrar deneyiniz.\n");
		Sleep(2);
		goto tekrar;
	}
	
}
int main(){	
		
	int secim;
	while(1)
	{
		system("cls");
		printf("1--> Kayit ol\n2--> Giris yap\n3--> Iptal\n\nSeciminiz..: "); scanf("%d",&secim);
		fflush(stdin);
		if(secim==1)
		{		
			kayitOl();
		}
		else if(secim==2)
		{
			girisYap();
			exit(0);
		}
		else if(secim==3)
		{
			exit(0);
		}
		else
		{
			printf("Hatali secim!\n");
		}
	}
	
	

	return 0;
}

