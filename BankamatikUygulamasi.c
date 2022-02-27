#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

static int bakiye;
void paraCek()// Para cekme kismi
{
	int cekilecekTutar;
	printf("Cekmek istediginiz tutari giriniz..: ");
	scanf("%d",&cekilecekTutar);
	if(cekilecekTutar>bakiye)
	{
		printf("Bakiyeniz yetersiz\n");
		printf("Ana menuye yonlendiriliyorsunuz...");
		sleep(2);
	}
	else
	{
		bakiye -= cekilecekTutar; // Bakiye eksiltme islemi
		printf("Para cekme islemi basariyla gerceklesmistir.\n");
		printf("Ana sayfaya yonlendiriliyorsunuz...");
		sleep(2);
	}
}
void paraYatir()// Para yatirma kismi
{
	int yatiralacakTutar;
	printf("Yatirmak istediginiz tutari giriniz..: ");
	scanf("%d",&yatiralacakTutar);
	
	bakiye += yatiralacakTutar; // Para yatirma  islemi
	printf("Para yatirma islemi basariyla gerceklesmistir.\n");
	printf("Ana sayfaya yonlendiriliyorsunuz...");
	sleep(2);
	
}
void faturaOde()// Fatura odeme kismi
{
	int islem,elektrik,dogalGaz,su,telefon,secim,cevap;
	
	elektrik=dogalGaz=su=telefon=rand()%100+20; //Fatura degerleri random deger olarak atandi.
	
	printf("1-->Elektirik\n"); 
	printf("2-->Dogal Gaz\n");
	printf("3-->Su\n");
	printf("4-->Telefon\n");
	
	printf("Isleminizi secin..: ");
	scanf("%d",&islem);
	
	switch(islem)//Yapilmak istenen sonuc coklu kosula konuldu
	{
		case 1:
			printf("Elektrik borcunuz : %d\n",elektrik);
			printf("Odemek istiyormusunuz E-->1 H-->2 ?\n");
			scanf("%d",&cevap);
			
			if(cevap== 1) //cevaplar sorgulandi
			{
				if(elektrik>bakiye)
				{
					printf("Bakiyeniz yetersiz\n");
					printf("Ana menuye yonlendiriliyorsunuz...");
					sleep(2);
				}
				else
				{
					bakiye -= elektrik; // Bakiye eksiltme islemi
					printf("Para cekme islemi basariyla gerceklesmistir.\n");
					printf("Ana sayfaya yonlendiriliyorsunuz...");
					sleep(2);
				}
				
			}
			else
			{
				printf("Islem iptal edildi.");
				printf("Ana sayfaya yonlendiriliyorsunuz...");
				sleep(2);
			}
			break;
		case 2:
			printf("Dogal Gaz borcunuz : %d\n",dogalGaz);
			printf("Odemek istiyormusunuz E-->1 H-->2 ?\n");
			scanf("%d",&cevap);
			
			if(cevap== 1) //cevaplar sorgulandi
			{
				if(dogalGaz>bakiye)
				{
					printf("Bakiyeniz yetersiz\n");
					printf("Ana menuye yonlendiriliyorsunuz...");
					sleep(2);
				}
				else
				{
					bakiye -= dogalGaz; // Bakiye eksiltme islemi
					printf("Para cekme islemi basariyla gerceklesmistir.\n");
					printf("Ana sayfaya yonlendiriliyorsunuz...");
					sleep(2);
				}
				
			}
			else
			{
				printf("Islem iptal edildi.");
				printf("Ana sayfaya yonlendiriliyorsunuz...");
				sleep(2);
			}
			break;
		case 3:
			printf("Su borcunuz : %d\n",su);
			printf("Odemek istiyormusunuz E-->1 H-->2 ?\n");
			scanf("%d",&cevap);
			
			if(cevap== 1) //cevaplar sorgulandi
			{
				if(su>bakiye)
				{
					printf("Bakiyeniz yetersiz\n");
					printf("Ana menuye yonlendiriliyorsunuz...");
					sleep(2);
				}
				else
				{
					bakiye -= su; // Bakiye eksiltme islemi
					printf("Para cekme islemi basariyla gerceklesmistir.\n");
					printf("Ana sayfaya yonlendiriliyorsunuz...");
					sleep(2);
				}
				
			}
			else
			{
				printf("Islem iptal edildi.");
				printf("Ana sayfaya yonlendiriliyorsunuz...");
				sleep(2);
			}
			break;
		case 4:
			printf("Telefon borcunuz : %d\n",elektrik);
			printf("Odemek istiyormusunuz E-->1 H-->2 ?\n");
			scanf("%d",&cevap);
			
			if(cevap== 1) //cevaplar sorgulandi
			{
				if(telefon>bakiye)
				{
					printf("Bakiyeniz yetersiz\n");
					printf("Ana menuye yonlendiriliyorsunuz...");
					sleep(2);
				}
				else
				{
					bakiye -= telefon; // Bakiye eksiltme islemi
					printf("Para cekme islemi basariyla gerceklesmistir.\n");
					printf("Ana sayfaya yonlendiriliyorsunuz...");
					sleep(2);
				}
				
			}
			else
			{
				printf("Islem iptal edildi.\n");
				printf("Ana sayfaya yonlendiriliyorsunuz...");
				sleep(2);
			}
			break;
		default:
			printf("Gecerli bir deger girmediniz...\n");
			printf("Ana sayfaya yonlendiriliyorsunuz...");
			sleep(2);
	}
}
void havaleEft()
{
	int iban=101010;//iban no rastgele atandi
	int ibanNo,miktar;
	printf("Iban numarasi giriniz..: ");
	scanf("%d",&ibanNo);
	if(ibanNo==iban)
	{
		printf("A..... A... kisisine ne kadar gondermek istiyorsunuz..: ");
		scanf("%d",&miktar);
		if(miktar>bakiye)
		{
			printf("Bakiyeniz yetersiz\n");
			printf("Ana menuye yonlendiriliyorsunuz...");
			sleep(2);
		}
		else
		{
			bakiye -= miktar; // Bakiye eksiltme islemi
			printf("A.... A... kisisine %d TL gonderme islemi basariyla gerceklesmistir.\n",miktar);
			printf("Ana sayfaya yonlendiriliyorsunuz...");
			sleep(2);
		}
		
	}
	else
	{
		printf("Iban no hatali!\n");
		printf("Ana menuye yonlendiriliyorsunuz...");
		sleep(2);
	}
	
}
int main()
{
	system("color 02");
	int sifre = 35698,sifreGiris,girisHakki=3,secim;
	
	printf("%80s","------------------KERIM BANKAMATIGE HOSGELDINIZ------------------\n");
	
	bakiye = rand()%1000+100; //ilk bakiye random olarak atandi.100-1000
	
	while(girisHakki!=0) // Sifre Giris Kismi
	{
		printf("\n\nLutfen sifrenizi giriniz..: ");
		scanf("%d",&sifreGiris);
		
		if(sifreGiris==sifre)
		{
			printf("Giris basarili...\n");		
			break;
		}
		else
		{
			printf("Giris basarisiz...");
			girisHakki--;
			if(girisHakki==0)
			{
				sleep(2);
				printf("\n\nKartiniz bloke olmustur.Musteri hizmetleri ile iletisime geciniz...");
				exit(0);
			}
			printf("Lutfen tekrar deneyin.");
		}
			
	}
	system("cls");
	while(1)//Ana menu olusturuldu
	{
		system("cls");
		
		printf("%70s","Bankamatik Uygulamasi\n\n");
		printf("%75s","**********************************\n");
		printf("%75s","*****      1--->Para cek     *****\n");
		printf("%75s","*****      2--->Para yatir   *****\n");
		printf("%75s","*****      3--->Fatura ode   *****\n");
		printf("%75s","*****      4--->Havale et    *****\n");
		printf("%75s","*****      5--->Cikis        *****\n");
		printf("%75s","**********************************\n");
		printf("%65s%d\n\n","Bakiyeniz  : ",bakiye);
		
		printf("\nIsleminizi secin..: ");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
				paraCek();
				break;
			case 2:
				paraYatir();
				break;
			case 3:
				faturaOde();
				break;
			case 4:
				havaleEft();
				break;
			case 5:
				exit(NULL);
			default: 
				printf("Hatali giris yaptiniz..Tekrar deneyiniz.");
				sleep(2);
				
		}
	}
	
	
	getch();
}
