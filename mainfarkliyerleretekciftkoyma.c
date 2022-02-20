#include <stdio.h>
#include <stdlib.h>
int main() {
	int *p,*p2,i,n,tek=0,cift=0;
	printf("Kaca kadar alinsin:");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	p2=malloc(n*sizeof(int));
	for(i=0;i<=n;i++)
	{
		if(i%2==1)
		{
			*(p2+tek)=i;
			tek++;
		}
		else
		{
			*(p+cift)=i;
			cift++;
		}	
	}
	printf("Cift sayilar\n");
	for(i=0;i<cift;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\nTek sayilar\n");
	for(i=0;i<tek;i++)
	{
		printf("%d ",*(p2+i));
	}
	return 0;
}
