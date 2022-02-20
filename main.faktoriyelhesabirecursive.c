#include <stdio.h>
#include <stdlib.h>

int fact(int deger,int sabit)
{
	if(deger==1)
	{
		sabit=deger;
	}
	else
	{
		sabit=deger*fact(deger-1,sabit);
	}
	return sabit;
}

int main() {
	int sayi,sabit=1;
	printf("Lutfen faktoriyeli alinacak sayiyi giriniz:");
	scanf("%d",&sayi);
	printf("%d! : %d",sayi,fact(sayi,sabit));
	return 0;
}
