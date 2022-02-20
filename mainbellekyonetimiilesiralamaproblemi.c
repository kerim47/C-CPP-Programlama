#include <stdio.h>
#include <stdlib.h>

int main() {
	int  n,*p,i;
	printf("Kac adet sayi uretilsin:");
	scanf("%d",&n);
	srand(time(0));
	p=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		*(p+i)=rand()%100-50;
		printf("%3d",*(p+i));
	}
	int x=*p;
	for(i=1;i<n-1;i++)
	{
		if(*(p+i)<x)
		{
			x=*(p+i);
		}
	}
	printf("\nEn kucuk sayimiz : %d",x);
	free(p);
	return 0;
}
