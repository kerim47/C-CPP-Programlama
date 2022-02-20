#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Girilen sayiyi basamaklarina ayirma
	
	int x,y,yuzbinler,onbinler,binler,yuzler,onlar,birler;
	star:;
	system("cls");
	
	start:
	printf("6 Basamakli Sayi Giriniz:\nNOT:[Daha buyuk sayi girmenizde altinci sayidan itibaren alinacakatir.]\n");
	scanf("%d",&x);
	
	yuzbinler=x/100000%10;
	onbinler=(x/10000)%10;
	binler=(x/1000)%10;
	yuzler=(x/100)%10;
	onlar=(x/10)%10;
	birler=x%10;
	
	printf("Yuzbinler:%d\nOnbinler:%d\nbinler:%d\nYuzler:%d\nOnlar:%d\nBirler:%d",yuzbinler,onbinler,binler,yuzler,onlar,birler);
	printf("\n\nTekrar denemek icin 1 cikis icin 2 temizlemek icin 3\n");
	scanf("%d",&y);
	if(y==1) goto start;
	if(y==2) return 0;
	if(y==3) goto star;
	
	

	
	return 0;
}
