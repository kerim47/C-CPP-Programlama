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
	printf("\n\n\n\n\n\n\n\n\n\n\n\n                                                G�R�� YAPILIYOR...\n");
	sleep(2);
	system("cls");
	system("color 2 ");
	printf("\n                                                    HOSGELDINIZ\n\n");
	etiket1:;
	etiket11:;
	printf("\n\n\n\n\n                                             Neyi Hesaplamak Istersiniz:\n\n\n                                                    Hacim--[1]\n                                                    �evre--[2]\n                                                    Alan---[3]\n                                                    ��k��--[4]\n\n");
	scanf("%d",&x);
	system("cls");
	if(x==4){
		
		system("color ");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n                                                    HO��AKALIN\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
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
		printf("\n\n\n                                             Hangisini Hesaplamak Istersiniz:\n\n\n                                                  DA�RE---------------[1]\n                                                  KUP-----------------[2]\n                                                  D�KDORTGEN PR�ZMA---[3]\n                                                  ��GEN PR�ZMA--------[4]\n                                                  KON�----------------[5]\n                                                  S�L�ND�R------------[6]\n\n                                                  B�R ONCEK�----------[7]\n\n");
		scanf("%d",&k);
		system("cls");
		switch(k){
	case 1:	
		etiket12:;
		printf("\n\n\n                                                 Dairenin yar��ap�n� giriniz:");
		scanf("%d",&r);	
		hacim=(4/3)*pi*r*r*r;
		system("cls");
		system("color 2 ");
		printf("\n\n\n                                                 Dairenin Hacmi: %.f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Men�ye D�n---[1]\nTekrar Hesapla---[2]\nBir �nceki-------[3]\n");
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
		printf("\n\n\n                                               Kupun bir kenar�n� giriniz:");
		scanf("%d",&r);	
		hacim=r*r*r;
		system("cls");
		system("color 2");
		printf("\n\n\n                                               Kupun Hacmi: %.4f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Men�ye D�n---[1]\nTekrar Hesapla---[2]\nBir �nceki-------[3]\n");
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
		printf("\n\n\n                                   Dikdortgen Prizman�n uzuznlu�u,geni�li�i ve y�ksekli�i giriniz:");
		scanf("%d%d%d",&r,&z,&c);	
		hacim=r*z*c;
		system("cls");
		system("color 2 ");
		printf("\n\n\n                                         Dikdortgen Prizman�n Hacmi: %.f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Men�ye D�n---[1]\nTekrar Hesapla---[2]\nBir �nceki-------[3]\n");
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
		printf("\n\n\n                                         �cgen Prizman�n tabanlar�n� ve y�ksekli�ini giriniz:");
		scanf("%d%d%d",&r,&b,&h);	
		hacim=b*r*h/2;
		system("cls");
		system("color 2");
		printf("\n\n\n                                           �cgen Prizman�n Hacmi: %..2f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Men�ye D�n---[1]\nTekrar Hesapla---[2]\nBir �nceki-------[3]\n");
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
		printf("\n\n\n                                           Dairenin yar��ap�n� giriniz:");
		scanf("%d",&y);	
		hacim=(pi*y*y)/3;
		system("cls");
		system("color 2");
		printf("                                                 Dairenin Hacmi: %.2f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Men�ye D�n---[1]\nTekrar Hesapla---[2]\nBir �nceki-------[3]\n");
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
		printf("\n\n\n                                           Silindirin yari�ap� ve y�ksekli�ini giriniz:");
		scanf("%d%d",&r,&h);	
		hacim=pi*r*r*h;
		system("cls");
		system("color 2 ");
		printf("\n\n\n                                           Silindirin Hacmi: %.2f dir",hacim);
		sleep(1);
		printf("\n\n\n\nAna Men�ye D�n---[1]\nTekrar Hesapla---[2]\nBir �nceki-------[3]\n");
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
			
		printf("L�TFEN DO�RU SAYIYI G�R�N�Z..");
		sleep(2);
		system("cls");
		goto etiketa;
		break;
	
			
		}
	
break;
case 2:
	
		etiketb:;
		printf("\n\n\n                                             Hangisini Hesaplamak Istersiniz:\n\n\n                                                  KARE---------------[1]\n                                                  KUP----------------[2]\n                                                  DA�RE--------------[3]\n                                                  �EMBER-------------[4]\n                                                  D�KDORTGEN---------[5]\n                                                  D�KDORTGEN PR�ZMA--[6]\n                                                  ��GEN--------------[7]\n\n                                                  B�R ONCEK�---------[8]\n\n");
		scanf("%d",&k);
		system("cls");
	
	switch(k){
	
	case 1:
		
		printf("Karenin bi kenarini giriniz:");
		scanf("%d",&r);	
		hacim=r*r;
		system("cls");
		system("color 2 ");
		printf("                                                 Karenin �evresi: %d dir",hacim);
		break;
		
	case 2:
	
		printf("Kupun bir kenar�n� giriniz:");
		scanf("%d",&r);	
		hacim=12*r;
		system("cls");
		system("color 2");
		printf("                                                 Kupun �evresi: %d dir",hacim);
		break;
			
	case 3:
		
		printf("Dairenin yar��ap�n� giriniz:");
		scanf("%d",&y);	
		hacim=pi*y;
		system("cls");
		system("color 2");
		printf("                                                 Dairenin �evresi: %.2f dir",hacim);
		break;
		
	case 4:
		
		printf("�emberin yar��ap�n� giriniz:");
		scanf("%d",&y);	
		hacim=2*pi*y;
		system("cls");
		system("color 2");
		printf("                                                 �ember �evresi: %.2f dir",hacim);
		break;
		
	case 5:
	
		printf("Dikdortgen k�sa ve uzun kenari giriniz:");
		scanf("%d%d",&r,&z);	
		hacim=2*(r+z);
		system("cls");
		system("color 2 ");
		printf("                                                 Dikdortgenin �evresi: %.2f dir",hacim);
		break;
		
	case 6:
		
		printf("Dikdortgen Prizman�n uzuznlu�u,geni�li�i ve y�ksekli�i giriniz:");
		scanf("%d%d%d",&r,&z,&c);	
		hacim=4*r*z*c;
		system("cls");
		system("color 2 ");
		printf("                                                 Dikdortgen Prizman�n �evresi: %.2f dir",hacim);
		break;
		
	case 7:
		
		printf("��genin kenarlar�n� giriniz:");
		scanf("%d",&y);	
		hacim=y+c+z;
		system("cls");
		system("color 2");
		printf("\n                                                 ��genin �evresi: %.2f dir",hacim);
		break;
	
	case 8:
		
		goto etiket11;
		break;		
		
	default:
		
		printf("\n                                               L�TFEN DO�RU SAYIYI G�R�N�Z..");
		sleep(2);
		system("cls");
		goto etiketb;
	
	
	}
break;

case 3:
	
		etiketc:;
		printf("\n\n\n                                             Hangisini Hesaplamak Istersiniz:\n\n\n                                                  KARE---------------[1]\n                                                  KUP----------------[2]\n                                                  DA�RE--------------[3]\n                                                  �EMBER-------------[4]\n                                                  D�KDORTGEN---------[5]\n                                                  D�KDORTGEN PR�ZMA--[6]\n\n                                                  B�R ONCEK�---------[7]\n\n");
		scanf("%d",&k);
		system("cls");
	
	switch(k){
	
	case 1:
		
		printf("\n\n\n                                           Karenin bi kenarini giriniz:");
		scanf("%d",&r);	
		hacim=r*r;
		system("cls");
		system("color 2 ");
		printf("                                                 Karenin Alan�: %d dir",hacim);
		break;
		
	case 2:
	
		printf("\n\n\n                                           Kupun bir kenar�n� giriniz:");
		scanf("%d",&r);	
		hacim=6*r*r;
		system("cls");
		system("color 2");
		printf("                                                 Kupun Alan�: %d dir",hacim);
		break;
			
	case 3:
		
		printf("\n\n\n                                           Dairenin yar��ap�n� giriniz:");
		scanf("%d",&y);	
		hacim=pi*y*y;
		system("cls");
		system("color 2");
		printf("                                                 Dairenin Alan�: %.2f dir",hacim);
		break;
		
	case 4:
	
		printf("\n\n\n                                           Dikdortgen k�sa ve uzun kenari giriniz:");
		scanf("%d%d",&r,&z);	
		hacim=r*z;
		system("cls");
		system("color 2 ");
		printf("                                                 Dikdortgenin Alan�: %.2f dir",hacim);
		break;
		
	case 5:
		
		printf("\n\n\n                                   Dikdortgen Prizman�n kenar uzunluklar�n� giriniz:");
		scanf("%d%d%d",&r,&z,&c);	
		hacim=2*((r*z*r*c*z*c)*(r*z*r*c*z*c));
		system("cls");
		system("color 2 ");
		printf("\n\n\n                                           Dikdortgen Prizman�n Alan�: %.f dir",hacim);
		break;
		
	case 6:
		
		printf("\n\n\n                                           ��genin taban ve y�ksekli�ini giriniz:");
		scanf("%d%d",&y,&c);	
		hacim=y*c;
		system("cls");
		system("color 2");
		printf("\n\n\n                                           ��genin Alan�: %.2f dir",hacim);
		break;
			
	case 7:
		
		goto etiket11;
		break;
		
	default:
		
		printf("\n\n\n                                           L�TFEN DO�RU SAYIYI G�R�N�Z..");
		sleep(2);
		system("cls");
		goto etiketc;
	
	
	}
break;
	
	
default:
	
		printf("\n                                               L�TFEN DO�RU SAYIYI G�R�N�Z..");
		sleep(2);
		system("cls");
		goto etiket1;	
		
}



return 0;
}


