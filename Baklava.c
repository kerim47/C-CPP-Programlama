#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int satir,i,y,z;
	printf("Lutfen satir sayisini giriniz : ");
	scanf("%d",&satir);
	if(satir%2==1)
	{
		for(i=0;i<satir/2+1;i++)
		{
			printf("\n");
			for(y=0;y<satir/2-i;y++)
			{
				printf(" ");
			}
			for(z=0;z<2*i+1;z++)
			{
				printf("*");
			}
			
		}
		for(i=0;i<satir/2;i++)
		{
			printf("\n");
			for(y=0;y<1+i;y++)
			{
				printf(" ");
			}
			for(z=0;z<satir-(2+2*i);z++)
			{
				printf("*");
			}
		}
		
	}
	else
	{
		printf("Lutfen tek bir sayi giriniz.");
	}
	
	return 0;
}
