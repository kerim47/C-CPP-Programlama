#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void matris_top(){
	int i,j,satir,sutun,gecici,gecici2,top=0;
	printf("Satir sayisini giriniz:");
	scanf("%d",&satir);
	printf("Sutun sayisini giriniz:");
	scanf("%d",&sutun);
	int dizi[satir][sutun];
	printf("%d * %d tipinde matris girin:\n",satir,sutun);
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			scanf("%d",&dizi[i][j]);
		}
	}
	gecici=dizi[0][0];
	gecici2=dizi[0][0];
	printf(" Matrisimiz:\n--------------\n\n");
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
				printf(" %d  ",dizi[i][j]);
				top+=dizi[i][j];
				if(dizi[i][j]>gecici)
				{
					gecici = dizi[i][j];
				}
				else if(dizi[i][j]<gecici2)
				{
					 gecici2 = dizi[i][j];
				}
		}
		printf("\n");
	}
	printf("--------------\n");
	printf("En buyuk deger : %d\n",gecici);
	printf("En kucuk deger : %d\n",gecici2);
	printf("--------------\n");
	printf("Matrisin tum elemanlari toplami : %d\n",top);
}
void kelime_sayma(){
	char ch[100];
	int sayac=1,i=0;
	printf("Lutfen cumlenizi giriniz:");
	gets(ch);
	while(ch[i])
	{
		if(ch[i]==32)
		{
			if(ch[i-1]==32)
			{
				i++;
				continue;	
			}
			else
			{
				sayac++;
			}
		}
		i++;
	}
	printf("Cumlenizde %d kelime kullanilmistir.",sayac);
}
void harf_sayma(){
	char ch[100];
	int sayac=0,i=0;
	printf("Lutfen cumlenizi giriniz:");
	gets(ch);
	while(ch[i])
	{
		sayac++;
		if(ch[i]==32)
		{
			sayac--;
			if(ch[i-1]==32)
			{
				i++;
				continue;	
			}
		}
		i++;
	}
	printf("Cumlenizde %d harf kullanilmistir.",sayac);
}
void carpim_tablo_matris(){
	int a,b;
	printf("  I");
	for(b=1;b<=10;b++)
	{
		printf("%4d ",b);
	}
	printf("\n");
	for(b=1;b<=11;b++)
	{
		printf("-----");
	}
	printf("\n");
	for(a=1;a<=10;a++)
	{
		printf("%3d",a);
		for(b=1;b<=10;b++)
		{
			printf("%4d ",a*b);
		}
		printf("\n");
	}
}
void paskalucgeni(){
	int sayac=1,z=1;
	int b,i,j,x,y;
	printf("Lutfen matrix sutun sayisini yaziniz: ");
	scanf("%d",&x);
	printf("\nLutfen matrix satir sayisini yaziniz: ");
	scanf("%d",&y);
	int dizi[x][y];
	printf("\n    J ");
	for(i=0;i<y;i++)
	{
		printf("%4d ",i);
	}
	printf("\n I\n");
	for(i=0;i<=y;i++)
	{
		printf("-----");
	}
	printf("\n\n");
	for(i=0;i<x;i++)
	{
		dizi[i][i]=1;
		dizi[i][0]=1;
		
		for(j=1;j<i;j++)
		{	
			dizi[i][j] = dizi[i-1][j] + dizi[i-1][j-1];
		}
	
	}
	for(i=0;i<x;i++)
	{
		if(i<=10)
		printf("%2d -- ",i);
		else
		printf("%d -- ",i);
		for(j=0;j<=i;j++)
		{	
			printf("%4d ",dizi[i][j]);
		}
		printf("\n");
	
	}
	
}
void carpim_tablo(){
	int a,b;
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=10;b++)
		{
			printf("%d * %d = %d\n",a,b,a*b);
		}
		printf("\n");
	}
}
void birbolu_n(){
	int n,i;
	float top;
	printf("Bir bolu kaca kadar toplasin:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		top += (float) 1/i;
	}
	printf("Ilk n sayinin toplami : %f",top);
}
void harf_kucult(){
	char ch;
	printf("Lutfen buyuk bir karakter giriniz:");
	scanf("%c",&ch);
	if((ch>='A') && (ch<='Z'))
	{
		printf("Kuculen harfimiz : %c",tolower(ch));
	}
	else
	{
		printf("Kucuk veya hatali karakter kullandiniz.");
	}
}
void dizi_birles(){
	int x,y,i;
	printf("Birinci diziye  kac tane sayi girmek istersiniz:");
	scanf("%d",&x);
	printf("ikinci diziye  kac tane sayi girmek istersiniz:");
	scanf("%d",&y);
	int a1[x],a2[y],a3[x+y];
	for(i=0;i<x;i++)
	{
		printf("%d.sayi:",i+1);
		scanf("%d",&a1[i]);
	}
	for(i=0;i<x;i++)
	{
		printf("%3d ",a1[i]);
	}
	printf("\n");
	for(i=0;i<y;i++)
	{
		printf("%d.sayi:",i+1);
		scanf("%d",&a2[i]);
	}
	for(i=0;i<y;i++)
	{
		printf("%3d ",a2[i]);
	}
	printf("\n");
	for(i=0;i<x;i++)
	{
		a3[i]=a1[i];
	}
	for(i=x;i<x+y;i++)
	{
		a3[i]=a2[i-x];
	}
	for(i=0;i<x+y;i++)
	{
		printf("%3d ",a3[i]);
	}
	
}
void x_us(){
	int sayi,i,top;
	printf("Kaca kadar us alinsin:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		top=pow(i,2);
		printf(" %3d ",top);
		if(i%10==0)
		{
			printf("\n");
		}
	}
}
void derece_cevirme(){
	double fahrenheit,celcius,kelvin;
	int sec,ch;
	printf("Neye cevirmek istersiniz:\nFahrenheit --->  Celcius     [1]\nFahrenheit --->  Kelvin      [2]\nCelcius    --->  Kelvin      [3]\nCelcius    --->  Fahrenheit  [4]\nKelvin     --->  Celcius     [5]\nKelvin     --->  Fahrenheit  [6]\n");
	scanf("%d%c",&sec,&ch);
	switch(sec)
	{
		case 1:
			printf("Fahrenheit degeri giriniz:");
			scanf("%lf",&fahrenheit);
			celcius= (fahrenheit-32)*10/18;
			printf("\n%lf ---> %lf",fahrenheit,celcius);
			break;
		case 2:
			printf("Fahrenheit degeri giriniz:");
			scanf("%lf",&fahrenheit);
			celcius= (fahrenheit+459.67)*5/9;
			printf("\n%lf ---> %lf",fahrenheit,celcius);
			break;
		case 3:
			printf("Celcius degeri giriniz:");
			scanf("%lf",&celcius);
			kelvin=celcius+273.15;
			printf("\n%lf ---> %lf",celcius,kelvin);
			break;	
		case 4:
			printf("Celcius degeri giriniz:");
			scanf("%lf",&celcius);
			fahrenheit=celcius*1.8+32;
			printf("\n%lf ---> %lf",celcius,fahrenheit);
			break;	
		case 5:
			printf("Kelvin degeri giriniz:");
			scanf("%lf",&kelvin);
			celcius=kelvin-273.15;
			printf("\n%lf ---> %lf",kelvin,celcius);
			break;	
		case 6:	
			printf("Kelvin degeri giriniz:");
			scanf("%lf",&kelvin);
			fahrenheit=kelvin*9/5-459.67;
			printf("\n%lf ---> %lf",kelvin,fahrenheit);
			break;
	}
}
void zamancevirme(){
	int zaman,saniye,saat,dk;
	printf("Saniyeyi giriniz:");
	scanf("%d",&zaman);
	saat=zaman/3600;
	dk=(zaman-saat*3600)/60;
	if(dk>=60)
	{
		saat++;
	}
	saniye=zaman%100;
	if(saniye>=60)
	{
		dk++;
	}
	printf("%d saniye : %d saat %d dk %d sn dir",zaman,saat,dk,saniye);
}
void saati_yaz(){
	time_t x;
	time(&x);
	printf("%s",ctime(&x));
}
void tavsan_tavuk(){
	int tavuk=1,tavsan,toplam,top_ayak;
	printf("Toplam sayiyi giriniz:");
	scanf("%d",&toplam);
	printf("Toplam sayiyi giriniz:");
	scanf("%d",&top_ayak);
	while(tavuk<toplam)
	{
		tavsan = toplam-tavuk;
		if((2*tavuk)+(4*tavsan)==100)
		{
			printf("Tavuk sayisi : %d\nTavsan sayisi : %d",tavuk,tavsan);
			break;
		}
		else
		{
			if(tavuk==toplam-1)
			{
				printf("Lutfen dogru toplam ayak ve hayvan sayisini giriniz. ");	
			}
			tavuk++;
			continue;
		}
		tavuk++;
	}
}
void kelebek(){
	int satir,x,y;
	char tur;
	printf("Lutfen kelebek hangi karakter olmasini gerektigini belirtiniz:");
	scanf("%c",&tur);
	printf("Kelebek icin satir sayisini giriniz:");
	scanf("%d",&satir);
	for(x=0;x<satir;x++)
	{
		for(y=0;y<=x;y++)
		{
			printf(" ");
		}
		for(y=2*satir-1-2*x;y>0;y--)
		{
			printf("%c",tur);
		}
		printf("\n");
	}
	for(x=1;x<satir;x++)
	{
		for(y=0;y<satir-x;y++)
		{
			printf(" ");
		}
		for(y=0;y<1+2*x;y++)
		{
			printf("%c",tur);
		}
		printf("\n");
	}
}
void sqrt_olmadan(){
	double x,karekok;
	int i;
	printf("Karekoku alinacak sayiyi giriniz:");
	scanf("%lf",&x);
	if(x>0.0)
	{
		karekok=x/2;
		for(i=0;i<50;i++)
		{
			karekok=((karekok*karekok)+x)/(2*karekok);
		}
		printf("%.5lf nin karekoku : %.5lf dir",x,karekok);
	}
	else
	{
		printf("Lutfen gecerli bir deger giriniz:");
	}
}
void x_ort(){
	int x,y,z,a=0;
	printf("Kac tane sayi girmek istiyorsunuz:"); //Girilecek sayi adedi
	scanf("%d",&x);
	for(y=0;y<x;y++)
	{
		printf("\n%d. sayiyi giriniz:",y+1);
		scanf("%d",&z);
		a+=z; //Girilen sayilarin toplamini verir.
	}
	a=a/x; // a sayi adetlerinin toplami x ise kaca bolunecegini yazar
	printf("%d",a);
}
void bol_kalan_bulma(){
	int bolunen,bolen,bolum,kalan;
	printf("Boluneni giriniz:");
	scanf("%d",&bolunen);
	printf("Bolen bilgisayar tarafindan girilmistir.");
	srand(time(0));
	bolen = rand()%47;
	bolum=bolunen/bolen;
	kalan=bolunen-(bolen*bolum);
	printf("\n\nBolunen %d\nBolen: %d\nBolum:%d\nKalan: %d",bolunen,bolen,bolum,kalan);
	
}
void rand_eleman_ekle(){
	int x,i,a,b,c,d;
	int z[100],y[100];
	printf("Kac tane eleman cevirsin istersiniz:");
	scanf("%d",&x);
	srand(time(0));
	for(i=0;i<x;i++)
	{
		z[i] = rand()%100;
	}
	for(i=0;i<x;i++)
	{
		printf("%3d",z[i]);
	}
	printf("\nKacinci siraya sayi istersiniz:");     // 1 2 3 4 5
	scanf("%d",&a);
	printf("\nGirmek istediginiz sayiyi yaziniz:");  // 1 2 6 3 4 5 
	scanf("%d",&b);
	if(a<=x)
	{
		for(i=0;i<a-1;i++)
		{
			printf("%3d",z[i]);  
		}
		printf("%3d",b);
		for(i=a;i<x+1;i++)
		{
				y[i]=z[i-1];
				z[i-1]=y[i];
				printf("%3d",z[i-1]);
		}
	}
	else
	printf("Hatali sayi girdiniz.");

	
	
}
void baklava(){
	int x,y,z,a;
	printf("Kac satirlik baklava istiyorsunuz:"),
	scanf("%d",&x);
	for(y=1;y<=x+1;y++)   //baklavanin ustunu yapma
	{
		for(z=0;z<=x-y+1;z++)
		{
			printf(" ");  //Azalan bosluklar olusturma  5 4 3 2 1 
		}
		for(a=1;a<=2*y-1;a++)
		{
			printf("*"); //Tekli yildiz artirma
		}
		printf("\n");
	}
	for(y=0;y<x;y++) //Baklavanin altini yapma
	{
		for(z=0;z<=y+1;z++)
		{
			printf(" "); //Artan bosluklar
		}
		for(z=0;z<2*(x-y)-1;z++) 
		{
			printf("*"); //Azalan yildizlar
		}
		
		printf("\n");
	}
	
}
void eleman_sil(){
	int x,y,z,b,i=0;
	printf("Kac adet sayi uretsin:");
	scanf("%d",&x);
	int a[x];
	srand(time(0));
	while(i<x)
	{
		a[i] = rand()%100+1;
		printf("%d ",a[i]);
		i++;
	}
	printf("\nSilmek istediginiz elemani yazin:");
	scanf("%d",&b);
	i=0;
	while(i<x)
	{
		if(b == a[i])
		{	
			i++;
		 	continue;		
		} 
		printf("%d ",a[i]);
		i++;
	}
	
}
void randomkiyas(){
	int x,y,z,a=0;
	printf("Bilgisayarin rastgele urettigi en buyuk sayiyi bulma\n\n");
	printf("Kaç tane rastgele sayi uretsin:");
	scanf("%d",&x);
	int b[x];
	for(y=0;y<x;y++)
	{
		b[y] = rand()%100+1;
		printf("%d ",b[y]);
	}
	for(y=0;y<x;y++)
	{
		if(a<b[y])
		a = b[y];
	}
	printf("\nEn buyuk sayi ---> %d ",a);
	for(y=0;y<x;y++)
	{
		if(a>b[y])
		a = b[y];
		
	}
	printf("\nEn kucuk sayi ---> %d ",a);
	
	
}
void floydUcgen(){
	int x,y,z,a=0,c,ch;
	don:;
	printf("Kac satirlik floyd sayisi olsun:");
	scanf("%d",&x);
	for(y=1;y<=x;y++)
	{
		for(z=1;z<=y;z++)
		{
			a++;
			printf("%d ",a);
		}
		printf("\n");
	}
	tekrar1:;
	printf("\nTekrar Denemek Icin -----[1]\nCikis Icin --------------[2]\n");
	scanf("%d%c",&c,&ch);
		switch(c)
		{
			case 1: goto don;
					break;
			case 2: break;	
			
			default:
			printf("Hatali Bir karakter Girdiniz.\n");
			sleep(1);
			printf("KAPANIYOR");
			for(a=0;a<3;a++)
			{
			sleep(1);
			printf(".");
			}
			break;
		}	
}
void tek_or_pozitif(){
	int i,y,z;
	printf("Tek icin ----[1]\nCift icin----[2]\n");
	scanf("%d",&z);
	printf("Kaca kadar Hesaplasin:");
	scanf("%d",&y);
	if(z==1)
	{
		for(i=0;i<=y;i++)
		{
			if(i%2==1)
			{
				printf(" %d\t",i);
			}
			
			if(i%20==0)
			printf("\n");
			
		}
	}
	if(z==2)
	{
		for(i=0;i<=y;i++)
		{
			if(i%2==0)
			{
				printf(" %d\t",i);
			}
			if(i%20==0)
			printf("\n");
		}
	}
}
void tek_cift_mi(){
	
	int x[10],i,y,z,a;
	printf("Kac Tane Sayi Gireceksiniz:");
	scanf("%d",&y);
	for(i=0;i<y;i++) //Istenilen sayiya kadar Dondurme Islemi
	{
		printf("%d. Sayi Gir:",i+1);
		scanf("%d",&x[i]); //Sayi Girme islemi
	}
	for(i=0;i<y;i++)
	{
		if(x[i]%2==0)
		{
			printf("%d Cift\n",x[i]);
		}
		else
		continue;
	
	}
	for(i=0;i<y;i++)
	{
		if(x[i]%2==1)
		{
			printf("%d Tek\n",x[i]);
		}
		else
		continue;
		
	}
	
}
void faktoriyel(){
	
	int a,b,c;
	tekrarrr:;
	int k=1;
	printf("Hesaplamak Istediginiz Sayiyi Girin:");
	scanf("%d",&a); //Kaca kadar hesaplamasini soyleriz.
	printf("%d! = ",a);
	for(b=1;b<=a;b++)
	{
		k*=b; // k faktoriyel carpimini verir.	
	}
	printf("%d\n",k); // yazdirir carpimlari.
	tekrar1:;
	printf("Tekrar Denemek Icin -----[1]\nCikis Icin --------------[2]\n");
	scanf("%d",&c);
	if(c==1) goto tekrarrr;
	else if(c==2) return ;
	else {
		printf("Hatali Bir karakter Girdiniz.\n");
		sleep(1);
		printf("Tekrar Yonlendiriliyorsunuz...\n");
		sleep(1);
		goto tekrar1;
 	    }
}
void xfaktoriyel(){
	tekrar:;
	int a,b,c,d;
	int k=1;
	printf("Hesaplamak Istediginiz Sayiyi Girin:");
	scanf("%d",&a); //Kaca kadar hesaplamasini soyleriz.
	
	for(b=1;b<=a;b++)
	{
		for(d=1;d<=b;d++)
		{
			k*=d; // k faktoriyel carpimini verir.
		}
		printf("%d! = ",b);
		printf("%d\n",k); // yazdirir carpimlari.
		k=1;
			
	}

	printf("Tekrar Denemek Icin -----[1]\nCikis Icin --------------[2]\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: goto tekrar;
				break;
		case 2: break;
				default: 
				printf("Hatali Bir karakter Girdiniz.\n");
				sleep(2);
				printf("Tekrar Yonlendiriliyorsunuz...\n");
				sleep(1);
				goto tekrar;
				break;
	}
		
}
void mukemmel(){
		tekrar:;
		int a,b,c=0;
		printf("Lutfen Sayiyi Giriniz:\n");
		scanf("%d",&a);
		printf("%d = ",a);
		for(b=1;b<a;b++)
		{
			if(a%b==0)  // Eger bolunurse asal carpanlarini verir.
			{
				c+=b; // b burada asal carpanlar ve b degerlerini c degerine aktarir ve toplar.
				if(b==1)
				printf(" %d ",b);	
				else
				printf("+ %d ",b); //Yazdirir.
			}
				
		}
		if(c==a)  //karsialastirma 
		printf("\nMukemmel Sayidir.\n");
		else
		printf("\nMukemmel Sayi Degildir.\n");
		tekrarr:;
		printf("Tekrar Denemek Icin -----[1]\nCikis Icin --------------[2]\n");
		scanf("%d",&c);
		switch(c)
	{
		case 1: goto tekrar;
				break;
		case 2: break;
				default: 
				printf("Hatali Bir karakter Girdiniz.\n");
				sleep(2);
				printf("Tekrar Yonlendiriliyorsunuz...\n");
				sleep(1);
				goto tekrar;
				break;
	}	
}
void random_siralama(){
	int i=0,b;
	int x,c,d;
	printf("Bilgisayar Kac Adet Sayi Uretsin:");
	scanf("%d",&x);
	printf("\n\n");
	int a[x];
	srand(time(0));
	a[0]=rand()%100;
	for(c=0;c<x;c++)
	{
		printf("%3d",a[i]);
		i++;
		a[i] = rand()%100;
		
		
	}
	printf("\n\nRandom sayilarin kucukten buyuge siralanisi:\n\n");
	for(c=0;c<x;c++)
	{
		for(d=0;d<x-1;d++)
		{
			if(a[d]>a[d+1])
			{
				b = a[d];
				a[d]=a[d+1];
				a[d+1]=b;
			}
		}
	
	}
	for(c=0;c<x;c++)
	{
		printf("%3d",a[c]);	
	}
	
	
}
void siralama(){
	
	int x,y,z,a,c,ch;
	printf("**********************Sayilari Siralama Dunyasina Hosgeldiniz**********************\n");
	don:;
	printf("\nKucukten buyuge dogru siralamak icin-----[1]Buyukten kucuge dogru siralamak icin-----[2]\n");
	scanf("%d",&a);
	if(a==1){
		printf("3 Tane  Sayi Giriniz:");
		scanf("%d%d%d",&x,&y,&z);
		if(x>y && x>z )
		{
			if(y>z)
			printf("%d < %d < %d ",z,y,x);
			else
			printf("%d < %d < %d ",y,z,x);
				
					
		}
		else if(y>x && y>z)
		{
			if(x>z)
			printf("%d < %d < %d ",z,x,y);
			else
			printf("%d < %d < %d ",x,z,y);
				
		}
		else if(z>x && z>y)
		{
			if(x>y)
	 	    printf("%d < %d < %d ",y,x,z);
			else
			printf("%d < %d < %d ",x,y,z);
				
		}
	}
	
	if(a==2){
		
		printf("3 Tane  Sayi Giriniz:");
		scanf("%d%d%d",&x,&y,&z);
		if(x>y && x>z )
		{
			if(y>z)
			printf("%d > %d > %d ",x,y,z);
			else
			printf("%d > %d > %d ",x,z,y);
			
		}
		else if(y>x && y>z)
		{
			if(x>z)
			printf("%d > %d > %d ",y,x,z);
			else
			printf("%d > %d > %d ",y,z,x);
			
		}
		else if(z>x && z>y)
		{
			if(x>y)
			printf("%d > %d > %d ",z,x,y);
			else
			printf("%d > %d > %d ",z,y,x);
			
		}
		else
		printf("Yanlis karakter veya esit numara.");
	}
	else printf("\nHatali karakter girisi.\n");
	
	tekrar1:;
	printf("\nTekrar Denemek Icin -----[1]\nCikis Icin --------------[2]\n");
	scanf("%d%c",&c,&ch);
		switch(c)
		{
			case 1: goto don;
					break;
			case 2: break;	
			
			default:
			printf("Hatali Bir karakter Girdiniz.\n");
			sleep(1);
			printf("KAPANIYOR");
			for(a=0;a<3;a++)
			{
			sleep(1);
			printf(".");
			}
			break;
		}

	
	
	
}
void fibonacci(){
	//Fiboanacci sayisi kendisinden önce iki sayinin toplamý kendisine eþit demektir.
	don:;
	int x=0,y=1,z=1,a,b,c;
	printf("Degerini ogrenmek istediginiz fibonacci dizisini giriniz:\n");
	scanf("%d",&b);
	for(a=1;a<=b-2;a++)
	{
		
		z=x+y;
		x=y;
		y=z;
		
		
	
	}
	printf("%d\n",y);
	printf("\nTekrar Denemek Icin -----[1]\nCikis Icin --------------[2]\n");
	scanf("%d",&c);
		switch(c)
		{
			case 1: goto don;
					break;
			case 2: break;	
			
			default:
			printf("Hatali Bir karakter Girdiniz.\n");
			sleep(1);
			printf("KAPANIYOR");
			for(a=0;a<3;a++)
			{
			sleep(1);
			printf(".");
			}
			break;
		}
	
	
}
void en_buyuk(){
	
	int x[10],i,y,z;
	printf("Kac Tane Sayi Gireceksiniz:");
	scanf("%d",&y);
	for(i=0;i<y;i++) //Istenilen sayiya kadar Dondurme Islemi
	{
		printf("%d. Sayi Gir:",i+1);
		scanf("%d",&x[i]); //Sayi Girme islemi
	}
	z = x[0];
	for(i=0;i<y;i++)
	{
		if(z<x[i]) //En buyugu bulma islemi
		{
			z = x[i];
		}
	}
	printf("En buyuk sayi %d dir.",z);
}
void sec(){
		
		int x,ch;
		git:;
		printf("\t\t\t\t\tYapmak Istediginiz Islemi Secin:\n");
		printf("Girilen Sayinin Faktoriyelini Hesapla [1]\nGirilen Sayiya Kadar Faktoriyelini Hesapla [2]\n");
		scanf("%d%c",&x,&ch);
		switch(x)
		{
			case 1: 
				faktoriyel(); 
				break;
			case 2: 
				xfaktoriyel();
				break;
			case 3:
				mukemmel();
				break;
			case 4:
				siralama();
				break;
			case 5:
				fibonacci();
				break;
			case 6:
				en_buyuk();
				break;
			case 7:
				tek_cift_mi();
				break;
			case 8:
				tek_or_pozitif();
				break;
			case 9:
				floydUcgen();	
				break;
			case 10:
				randomkiyas();
				break;
			case 11:
				eleman_sil();
				break;
			case 12:
				baklava();
				break;	
			case 13:
				random_siralama();
				break;	
			case 14:
				rand_eleman_ekle();
				break;
			case 15:
				bol_kalan_bulma();
				break;
			case 16:
				x_ort();
				break;
			case 17:
			    kelebek();
				break;
			case 18:
				sqrt_olmadan();
				break;
			case 19:
				tavsan_tavuk();
				break;
			case 20:
				saati_yaz();
				break;
			case 21:
				zamancevirme();
				break;	
			case 22:
				derece_cevirme();
				break;
			case 23:
				x_us();
				break;
			case 24:
				dizi_birles();
				break;
			case 25:
				harf_kucult();
				break;
			case 26:
				birbolu_n();
				break;
			case 27:
				carpim_tablo();
				break;
			case 28:
				carpim_tablo_matris();
				break;
			case 29:
				kelime_sayma();
				break;
			case 30:
			    harf_sayma();
			case 31:
				paskalucgeni();
				break;
			case 32:
			 	matris_top();
				break;		
							
			default:
				printf("Hatali Karakter Girisi.\n");
				sleep(1);
				printf("Tekrar Yonlendiriliyorsunuz");
				for(x=0;x<=2;x++)
					{	
						printf(".");
						sleep(1);			
				break;
					}
					printf("\n");
					system("cls");
				goto git;
		}

}
int main(){
	sec();
	}
