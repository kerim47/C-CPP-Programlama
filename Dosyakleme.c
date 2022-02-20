#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	FILE *dosya;
	char cumle;
	int i=0,n;
	char karakter[10][10];
	if((dosya = fopen("C:\\Users\\kerim\\Desktop\\dosyaislemlerim.txt","a"))!=NULL)
	{
		fprintf(dosya,"EKLEME YAPILDI.");
	}
	else
	{
		printf("Dosya bulunamadi");
	}
	fclose(dosya);
	return 0;
}
