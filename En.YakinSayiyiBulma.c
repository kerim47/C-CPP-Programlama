#include <stdio.h>
#include <stdlib.h>
#define tam 150

int main() {
	int no,boy,fark,minno,minboy,z=0,numara;
	z++;
	printf("%d. Ogrenci No:",z);
	scanf("%d",&no);
	printf("%d. Ogrenci Boy:",z);
	scanf("%d",&boy);
	fark=abs(boy-tam);
	
	while(no>0)
	{
		z++;
		printf("%d. Ogrenci No:",z);
		scanf("%d",&no);
		printf("%d. Ogrenci Boy:",z);
		scanf("%d",&boy);
		
		if(abs(boy-tam)<fark)
		{
			fark=abs(boy-tam);
			minno=no;

			minboy=boy;
			numara=z;
		}
	}
	printf("%d. siradaki %d nolu ogrenci %d boyla 150 cm e daha yakindir.",z-1,minno,minboy);
	
	return 0;
}
