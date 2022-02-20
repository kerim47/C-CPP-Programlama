#include <stdio.h>
#include <stdlib.h>
#define max 3
typedef struct{
	char ilac_adi[20];
	int adet,fiyat;
	
}data;
int main() {
	data ilac[max];
	int i;
	for(i=0;i<max;i++)
	{
		fflush(stdin);
		printf("Ilac ismi giriniz:");
		scanf("%s",&ilac[i].ilac_adi);
		printf("Ilac adeti giriniz:");
		scanf("%d",&ilac[i].adet);
		printf("Ilac fiyati giriniz:");
		scanf("%d",&ilac[i].fiyat);
		
	}
	printf("\nIlac ismi\t\tIlac adedi\t\tIlac fiyati");
	printf("\n----------------------------------------------------------\n");
	for(i=0;i<max;i++)
	{
		if(ilac[i].adet<=20 && ilac[i].adet>=1)
		{
			printf("%s\t\t\t%d\t\t\t%d\n",ilac[i].ilac_adi,ilac[i].adet,ilac[i].fiyat);
		}
	}
	
	
	return 0;
}
