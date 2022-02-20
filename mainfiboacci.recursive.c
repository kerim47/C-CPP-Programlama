#include <stdio.h>
#include <stdlib.h>

int fibonacci(x)// 1 1 2 3 5 8 13
{
	if(x==0)
	{
		return 0;
	}
	else if(x==1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(x-2)+fibonacci(x-1));
	}	
		
	
}

int main() {
	int k=1,l=1,m=2,n,i;
	printf("kaca kadar hesaplasin:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",fibonacci(i));	
	}
	
	
	return 0;
}
