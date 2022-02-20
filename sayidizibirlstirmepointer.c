#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int m,n,*p1,*p2,x=1;
	printf("Birinci dizinin eleman sayisini giriniz:");
	scanf("%d",&m);
	int dizi1[m];
	for(p1=dizi1;p1<dizi1+m;p1++)
	{
		printf("%d. elemani gir:",p1-dizi1+1);
		scanf("%d",p1);
	}
	printf("Ikinci dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	int dizi2[n];
	x=1;
	for(p2=dizi2;p2<dizi2+n;p2++)
	{
		printf("%d. elemani gir:",p2-dizi2+1);
		scanf("%d",p2);
	}
	printf("\nDizi 1:\n");
	for(p1=dizi1;p1<dizi1+m;p1++)
	{
		printf("%d ",*p1);
	}
	printf("\nDizi 2:\n");
	for(p2=dizi2;p2<dizi2+n;p2++)
	{
		printf("%d ",*p2);
	}
	for(p1=dizi1+m,p2=dizi2;p1<dizi1+m+n,p2<dizi2+n;p1++,p2++)
	{
		*p1=*p2;
	}
	printf("\nIkinci dizinin birinciye ekledikten sonraki hali:\n");
	for(p1=dizi1;p1<dizi1+n+m;p1++)
	{
		printf("%d ",*p1);
	}
	
	
	return 0;
}
