#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i,ilk,son,aranan,orta;
	printf("Kac adet sayi uretilsin:");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	for(i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nNumarasini istediginiz sayiyi girin:");
	scanf("%d",&aranan);
	ilk=0;
	son=n-1;
	orta=(ilk+son)/2;
	while(ilk<=son)
	{
		if(dizi[orta]<aranan)
		{
			ilk=orta+1;
		}
		else if(dizi[orta]==aranan)
		{
			printf("\n%d sayisi %d. sirada bulundu.",aranan,orta+1);
		}
		else if(dizi[orta]>aranan)
		{
			son=orta-1;
		}
		orta=(ilk+son)/2;
	}
		
	
	
	return 0;
}
