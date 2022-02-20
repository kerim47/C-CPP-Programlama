
// 10 luk tabandaki bir sayinin binary karsiligini bulan program

#include <stdio.h>
#include <math.h>
int main()
{
	int sayi=15,i=0,toplam=0;
	
	for(i=0;sayi!=0;i++)
	{
		if(sayi%2==1)
		{
			toplam+=(float)(pow(10,i));
		}
		sayi/=2;
	}
	printf("Ikilik sistemdeki karsiligi : %d",toplam);
}
