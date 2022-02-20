#include <stdio.h>
#include <stdlib.h>
#define max 5
#define size 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char dizi[max][size],*p,*p2,gecici;
	int i;
	printf("%d kelime giriniz:\n",max);
	for(i=0;i<max;i++)
	{
		printf("\n%d.kelime:",i+1);
		scanf("%s",dizi[i]);
	}
	for(i=0;i<max;i++)
	{
		p=p2=dizi+i;
		while(*p2)
		{
			p2++;
		}
		p2--;
		while(p<p2)
		{
			gecici=*p;
			*p=*p2;
			*p2=gecici;
			 p++;
			 p2--;
		}
	}
	for(i=0;i<max;i++)
	{
		printf("%s\n",*(dizi+i));
	}
	return 0;
}
