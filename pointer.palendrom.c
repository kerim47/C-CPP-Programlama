#include <stdio.h>
#include <stdlib.h>

int main() {
	char *p1,*p2,cumle[100];
	int kontrol;
	printf("Lutfen cumlenizi yazin (NOT:Maksimum 100 karakter giriniz.)\n");
	gets(cumle);
	for(p2=cumle;*p2;p2++);
	p2--;
	kontrol=1;
	for(p1=cumle;kontrol && p1<p2;p1++,p2--)
	{
		if(*p1!=*p2)
		{
			kontrol = 0;
		}
	}
	if(kontrol)
	{
		printf("(%s) bir palendrom sayidir.",cumle);
	}
	else
	{
		printf("(%s) bir palendrom degildir.",cumle);
	}
	return 0;
}
