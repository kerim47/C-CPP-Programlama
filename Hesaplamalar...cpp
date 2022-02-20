#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>
#include <graphics.h>
#define pi 3.14
int main(int argc, char *argv[]) {
	
	int x,y,i,k,r,z,c,b,h,a;
	float hacim;
	setlocale(LC_ALL, "Turkish");
	system("color 4");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n                                                GÝRÝÞ YAPILIYOR...\n");
	sleep(2);
	system("cls");
	system("color 2 ");
	printf("\n                                                    HOSGELDINIZ\n\n");
	etiket1:;
	etiket11:;
	printf("\n\n\n\n\n                                             Neyi Hesaplamak Istersiniz:\n\n\n                                                    Hacim--[1]\n                                                    Çevre--[2]\n                                                    Alan---[3]\n                                                    Çýkýþ--[4]\n\n");
	scanf("%d",&x);
	system("cls");
	if(x==4){
		
		system("color ");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n                                                    HOÞÇAKALIN\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
		exit(EXIT_SUCCESS);
		
		
	}
	sleep(1);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n                                                    YUKLENIYOR");
	for(i=0;i<3;i++){
	sleep(1);
	printf(".");
	}
system("cls");
switch(x){
case 1:
		etiketa:;
		printf("\n\n\n                                             Hangisini Hesaplamak Istersiniz:\n\n\n                                                  DAÝRE---------------[1]\n                                                  KUP-----------------[2]\n                                                  DÝKDORTGEN PRÝZMA---[3]\n                                                  ÜÇGEN PRÝZMA--------[4]\n                                                  KONÝ----------------[5]\n                                                  SÝLÝNDÝR------------[6]\n\n                                                  BÝR ONCEKÝ----------[7]\n\n");
		scanf("%d",&k);
		system("cls");
		switch(k){
	case 1:	
		etiket12:;
		printf("\n\n\n                                                 Dairenin yarýçapýný giriniz:");
		scanf("%d",&r);	
		hacim=(4/3)*pi*r*r*r;
		system("cls");
		system("color 2 ");
		printf("\n\n\n                                                 Dairenin Hacmi: %.f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Menüye Dön---[1]\nTekrar Hesapla---[2]\nBir Önceki-------[3]\n");
		scanf("%d",&a);
		system("cls");
		switch(a){
			case 1:
				
				goto etiket11;
				break;
				
			case 2:
				
				goto etiket12;
				break;
				
			case 3:
				
				goto etiketa;
				break;
		}
		break;
		
	case 2:
		
		etiket13:;
		printf("\n\n\n                                               Kupun bir kenarýný giriniz:");
		scanf("%d",&r);	
		hacim=r*r*r;
		system("cls");
		system("color 2");
		printf("\n\n\n                                               Kupun Hacmi: %.4f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Menüye Dön---[1]\nTekrar Hesapla---[2]\nBir Önceki-------[3]\n");
		scanf("%d",&a);
		system("cls");
		switch(a){
			case 1:
				
				goto etiket11;
				break;
				
			case 2:
				
				goto etiket13;
				break;
				
			case 3:
				
				goto etiketa;
				break;
		}
		break;
		
	case 3:
		etiket14:;
		printf("\n\n\n                                   Dikdortgen Prizmanýn uzuznluðu,geniþliði ve yüksekliði giriniz:");
		scanf("%d%d%d",&r,&z,&c);	
		hacim=r*z*c;
		system("cls");
		system("color 2 ");
		printf("\n\n\n                                         Dikdortgen Prizmanýn Hacmi: %.f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Menüye Dön---[1]\nTekrar Hesapla---[2]\nBir Önceki-------[3]\n");
		scanf("%d",&a);
		system("cls");
		switch(a){
			case 1:
				
				goto etiket11;
				break;
				
			case 2:
				
				goto etiket14;
				break;
				
			case 3:
				
				goto etiketa;
				break;
		}
		break;
		
	case 4:
		
		etiket15:;
		printf("\n\n\n                                         Ücgen Prizmanýn tabanlarýný ve yüksekliðini giriniz:");
		scanf("%d%d%d",&r,&b,&h);	
		hacim=b*r*h/2;
		system("cls");
		system("color 2");
		printf("\n\n\n                                           Ücgen Prizmanýn Hacmi: %..2f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Menüye Dön---[1]\nTekrar Hesapla---[2]\nBir Önceki-------[3]\n");
		scanf("%d",&a);
		system("cls");
		switch(a){
			case 1:
				
				goto etiket11;
				break;
				
			case 2:
				
				goto etiket15;
				break;
				
			case 3:
				
				goto etiketa;
				break;
		}
		break;
	
	case 5:
		
		etiket16:;
		printf("\n\n\n                                           Dairenin yarýçapýný giriniz:");
		scanf("%d",&y);	
		hacim=(pi*y*y)/3;
		system("cls");
		system("color 2");
		printf("                                                 Dairenin Hacmi: %.2f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Menüye Dön---[1]\nTekrar Hesapla---[2]\nBir Önceki-------[3]\n");
		scanf("%d",&a);
		system("cls");
		switch(a){
			case 1:
				
				goto etiket11;
				break;
				
			case 2:
				
				goto etiket16;
				break;
				
			case 3:
				
				goto etiketa;
				break;
		}
		break;
		
	case 6:
		
		etiket17:;
		printf("\n\n\n                                           Silindirin yariçapý ve yüksekliðini giriniz:");
		scanf("%d%d",&r,&h);	
		hacim=pi*r*r*h;
		system("cls");
		system("color 2 ");
		printf("\n\n\n                                           Silindirin Hacmi: %.2f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Menüye Dön---[1]\nTekrar Hesapla---[2]\nBir Önceki-------[3]\n");
		scanf("%d",&a);
		system("cls");
		switch(a){
			case 1:
				
				goto etiket11;
				break;
				
			case 2:
				
				goto etiket17;
				break;
				
			case 3:
				
				goto etiketa;
				break;
		}	
		break;
	case 7:
		
		goto etiket11;
		break;
		
	default:
			
		printf("LÜTFEN DOÐRU SAYIYI GÝRÝNÝZ..");
		sleep(2);
		system("cls");
		goto etiketa;
		break;
	
			
		}
	
break;
case 2:
	
		etiketb:;
		printf("\n\n\n                                             Hangisini Hesaplamak Istersiniz:\n\n\n                                                  KARE---------------[1]\n                                                  KUP----------------[2]\n                                                  DAÝRE--------------[3]\n                                                  ÇEMBER-------------[4]\n                                                  DÝKDORTGEN---------[5]\n                                                  DÝKDORTGEN PRÝZMA--[6]\n                                                  ÜÇGEN--------------[7]\n\n                                                  BÝR ONCEKÝ---------[8]\n\n");
		scanf("%d",&k);
		system("cls");
	
	switch(k){
	
	case 1:
		
		printf("Karenin bi kenarini giriniz:");
		scanf("%d",&r);	
		hacim=r*r;
		system("cls");
		system("color 2 ");
		printf("                                                 Karenin Çevresi: %d dir",hacim);
		break;
		
	case 2:
	
		printf("Kupun bir kenarýný giriniz:");
		scanf("%d",&r);	
		hacim=12*r;
		system("cls");
		system("color 2");
		printf("                                                 Kupun Çevresi: %d dir",hacim);
		break;
			
	case 3:
		
		printf("Dairenin yarýçapýný giriniz:");
		scanf("%d",&y);	
		hacim=pi*y;
		system("cls");
		system("color 2");
		printf("                                                 Dairenin Çevresi: %.2f dir",hacim);
		break;
		
	case 4:
		
		printf("Çemberin yarýçapýný giriniz:");
		scanf("%d",&y);	
		hacim=2*pi*y;
		system("cls");
		system("color 2");
		printf("                                                 Çember Çevresi: %.2f dir",hacim);
		break;
		
	case 5:
	
		printf("Dikdortgen kýsa ve uzun kenari giriniz:");
		scanf("%d%d",&r,&z);	
		hacim=2*(r+z);
		system("cls");
		system("color 2 ");
		printf("                                                 Dikdortgenin Çevresi: %.2f dir",hacim);
		break;
		
	case 6:
		
		printf("Dikdortgen Prizmanýn uzuznluðu,geniþliði ve yüksekliði giriniz:");
		scanf("%d%d%d",&r,&z,&c);	
		hacim=4*r*z*c;
		system("cls");
		system("color 2 ");
		printf("                                                 Dikdortgen Prizmanýn Çevresi: %.2f dir",hacim);
		break;
		
	case 7:
		
		printf("Üçgenin kenarlarýný giriniz:");
		scanf("%d",&y);	
		hacim=y+c+z;
		system("cls");
		system("color 2");
		printf("\n                                                 Üçgenin Çevresi: %.2f dir",hacim);
		break;
	
	case 8:
		
		goto etiket11;
		break;		
		
	default:
		
		printf("\n                                               LÜTFEN DOÐRU SAYIYI GÝRÝNÝZ..");
		sleep(2);
		system("cls");
		goto etiketb;
	
	
	}
break;

case 3:
	
		etiketc:;
		printf("\n\n\n                                             Hangisini Hesaplamak Istersiniz:\n\n\n                                                  KARE---------------[1]\n                                                  KUP----------------[2]\n                                                  DAÝRE--------------[3]\n                                                  ÇEMBER-------------[4]\n                                                  DÝKDORTGEN---------[5]\n                                                  DÝKDORTGEN PRÝZMA--[6]\n\n                                                  BÝR ONCEKÝ---------[7]\n\n");
		scanf("%d",&k);
		system("cls");
	
	switch(k){
	
	case 1:
		
		printf("\n\n\n                                           Karenin bi kenarini giriniz:");
		scanf("%d",&r);	
		hacim=r*r;
		system("cls");
		system("color 2 ");
		printf("                                                 Karenin Alaný: %d dir",hacim);
		break;
		
	case 2:
	
		printf("\n\n\n                                           Kupun bir kenarýný giriniz:");
		scanf("%d",&r);	
		hacim=6*r*r;
		system("cls");
		system("color 2");
		printf("                                                 Kupun Alaný: %d dir",hacim);
		break;
			
	case 3:
		
		printf("\n\n\n                                           Dairenin yarýçapýný giriniz:");
		scanf("%d",&y);	
		hacim=pi*y*y;
		system("cls");
		system("color 2");
		printf("                                                 Dairenin Alaný: %.2f dir",hacim);
		break;
		
	case 4:
	
		printf("\n\n\n                                           Dikdortgen kýsa ve uzun kenari giriniz:");
		scanf("%d%d",&r,&z);	
		hacim=r*z;
		system("cls");
		system("color 2 ");
		printf("                                                 Dikdortgenin Alaný: %.2f dir",hacim);
		break;
		
	case 5:
		
		printf("\n\n\n                                   Dikdortgen Prizmanýn kenar uzunluklarýný giriniz:");
		scanf("%d%d%d",&r,&z,&c);	
		hacim=2*((r*z*r*c*z*c)*(r*z*r*c*z*c));
		system("cls");
		system("color 2 ");
		printf("\n\n\n                                           Dikdortgen Prizmanýn Alaný: %.f dir",hacim);
		break;
		
	case 6:
		
		printf("\n\n\n                                           Üçgenin taban ve yüksekliðini giriniz:");
		scanf("%d%d",&y,&c);	
		hacim=y*c;
		system("cls");
		system("color 2");
		printf("\n\n\n                                           Üçgenin Alaný: %.2f dir",hacim);
		break;
			
	case 7:
		
		goto etiket11;
		break;
		
	default:
		
		printf("\n\n\n                                           LÜTFEN DOÐRU SAYIYI GÝRÝNÝZ..");
		sleep(2);
		system("cls");
		goto etiketc;
	
	
	}
break;
	
	
default:
	
		printf("\n                                               LÜTFEN DOÐRU SAYIYI GÝRÝNÝZ..");
		sleep(2);
		system("cls");
		goto etiket1;	
		
}



return 0;
}


