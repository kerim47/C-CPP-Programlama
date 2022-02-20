#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char ad[10],soyad[10],adres[100],tel[20],postakodu[10];	
}adres_defteri;
int main() {
	int n,i=0;
	char ch,chh;
	printf("Bilgileri girilecek aile sayisi giriniz:");
	scanf("%d%c",&n,&ch);
	adres_defteri fert[n];
	for(;i<n;i++)
	{
		printf("\n%d. Aile bilgilerini giriniz\n",i+1);
		printf("Fert adi:");
		gets(fert[i].ad);
		printf("Fert soyadi:");
		gets(fert[i].soyad);
		printf("Fert tel no [11 hane giriniz]:");
		gets(fert[i].tel);
		printf("Posta kodu:");
		gets(fert[i].postakodu);
		printf("Fert adres:");
		gets(fert[i].adres);
	}
	printf("AD\t\tSOYAD\t\tTEL NO\t\tPOSTA KODU\t\tADRES\n-----------------------------------------------------------------------------");
	for(i=0;i<n;i++)
	{ 
		printf("\n%s\t\t%s\t\t%s\t\t%s\t\t%s\n",fert[i].ad,fert[i].soyad,fert[i].tel,fert[i].postakodu,fert[i].adres);
	}
	return 0;
}
