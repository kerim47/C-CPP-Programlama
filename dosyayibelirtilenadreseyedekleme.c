#include <stdio.h>
#include <stdlib.h>


int main() {
	FILE *giris,*cikis;
	char bas[50],bit[50],ch;
	printf("Hangi (dosyadan) yedekleme islemi yapilacak[uzantisini yazin]:");
	gets(bas);
	giris=fopen(bas,"r");
	if(giris==NULL)
	{
		printf("Dosya bulunamadi.");
		exit(0);
	}
	else
	{
		printf("Hangi (dosyaya) yedekleme islemi yapilacak[uzantisini yazin]:");
		gets(bit);
		cikis=fopen(bit,"w");
		if(cikis==NULL)
		{
			printf("Dosya bulunamadi.");
			exit(0);
		}
		else
		{
			for(ch=getc(giris);ch!=EOF;ch=getc(giris))
			{
				putc(ch,cikis);
			}
		}
	}
	fclose(giris);
	fclose(cikis);
	return 0;
}
