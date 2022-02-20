#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i=1,j=1;
	float toplam=1,faktoriyel=1;
	for(i=1;i<=10;i++)
	{
		faktoriyel=1;
		for(j=1;j<=i;j++)
		{
			faktoriyel*=j;
		}
		toplam+=(float)(1/faktoriyel);
	}
	printf("%lf",toplam);
	return 0;
}

