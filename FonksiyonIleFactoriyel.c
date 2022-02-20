#include<stdio.h>

long long int faktoriyel(int sayi)
{
	if(sayi==1)
	{
		return 1;
	}
	else
	{
		 return sayi*faktoriyel(sayi-1);
	}
}
int main ()
{
   int sayi;
   printf("Faktoriyelini girmek istediginiz sayiyi giriniz : ");
   scanf("%d",&sayi);	
   long long int sonuc = faktoriyel(sayi);
   printf("Sonuc : %d",sonuc);
   return 0;
}
