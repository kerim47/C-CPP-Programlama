#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Dýþarýdan girilen bir n tam sayýsýna kadar olan tek tam sayýlarýn toplamýný bulan c programý.*/
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

