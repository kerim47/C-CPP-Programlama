#include <stdio.h>
#include <stdlib.h>
int main() {
	int *p1,*p2,n,m=1,gecici;
	printf("Dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	int dizi[n];
	for(p1=dizi;p1<dizi+n;p1++)
	{
		printf("%d. Elemani gir:",m);
		scanf("%d",p1);	
		m++;
	}
	printf("----------------------\nDizimizin normal hali:");
	for(p1=dizi;p1<dizi+n;p1++)
	{
		printf(" %d",*p1);
	}
	printf("\n----------------------\n  Dizimizin son hali:");
	for(p1=dizi,p2=dizi+n-1;p1<p2;p1++,p2--)
	{
			gecici=*p1;
			*p1=*p2;
			*p2=gecici;	
	}
	for(p1=dizi;p1<n+dizi;p1++)
	{
		printf(" %d",*p1);
	}
	
	return 0;
}
