#include <stdio.h>
#include <stdlib.h>

void bas(int x)
{
	int i;
	if(x==0)
	{
		exit(0);
	}
	else
	{
		for(i=x;i>0;i--)
		{
			printf("%c ",254);
		}
		printf("\n");
		bas(x-1);
	}
}

int main() {
	int n,i;
	printf("Kac satir ters yildiz bassin:");
	scanf("%d",&n);
	bas(n);
	return 0;
}
