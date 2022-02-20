#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *dosya = fopen("C:\\Users\\kerim\\Desktop\\Documents\\dosyaislemlerim.txt","w");
	int satir,i;
	char karakter;
	if(dosya!=NULL)
	{
		printf("Kaca kadar tek ve cift siralasin.");
		scanf("%d",&satir);
		for(i=0;i<=satir;i++)
		{
			if(i%2==0)
			{
				fprintf(dosya,"%d : Cift\n",i);
			}
			else
			{
				fprintf(dosya,"%d : Tek\n",i);
			}
	
		}
		printf("Bilgiler dosyaya yazildi.\n");
		printf("Dosyalar okunuyor.\n");
	
		dosya = fopen("C:\\Users\\kerim\\Desktop\\Documents\\dosyaislemlerim.txt","r");
		do
		{
			karakter = getc(dosya);
			if(karakter!=EOF)
			{
				putchar(karakter);
			}
		}while(karakter!=EOF);
	}
	else
	{
		printf("Dosya bulunamadi veya olusturulamadi.");
	}
	fclose(dosya);
	return 0;
}

