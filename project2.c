#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*D��ar�dan girilen bir n tam say�s�na kadar olan tek tam say�lar�n toplam�n� bulan c program�.*/
	int i,x;
	int top=0;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&x);
	for(i=1;i<=x;i+=2)
	{
		
		top+=i;
	}
	
		printf("Sonucunuz %d dir.",top);
	return 0;
}

