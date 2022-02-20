#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi;
	printf("Lutfen sayinizi giriniz : ");
	scanf("%d",&sayi);
	int x=0,nobetciDeger;
	nobetciDeger  = sayi;
	for(;sayi>0;)
	{
		if(sayi%10==7)
		{
			x++;
		}
		sayi=sayi/10;
	}
	printf("%d tane 7 rakami bulunmaktadir.",x);
	return 0;
}
