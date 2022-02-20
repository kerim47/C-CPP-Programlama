#include <stdio.h>
#include <stdlib.h>

int ikius(a,b)
{
	if(a==0)
	{
		return 1;
	}
	else if(a>=1)
	{
		return b*us(a-1,b);
	}
	
}

int main() {
	int sayi;
	printf("Lutfen 2'nin bir ussunu giriniz:");
	scanf("%d",&sayi);
	ikius(sayi,2);
	printf("%d",ikius(sayi,2));
	
	return 0;
}
