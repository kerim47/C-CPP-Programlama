#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,toplam=0,x=0,i=0;
	printf("Kaç sayi girilecegini belirtiniz : ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++)
	{
		scanf("%d",&x);
		toplam+=x;
	}
	printf("Sayilarin toplami : %d",toplam);
	return 0;
}
