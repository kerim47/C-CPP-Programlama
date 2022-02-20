#include <stdio.h>

int main()
{
	int x;
	printf("Lutfen kac tane sayi gireceginizi belirtiniz : ");
	scanf("%d",&x);
	int i=0,j=0,sayi[x],nobetciDeger;
	for(;j<x;j++)
	{
		printf("%d. sayiyi gir : ",j+1);
		scanf("%d",&sayi[j]);
	}
	for(;i<=x-1;i++)
	{
		for(j=i;j<=x-1;j++)
		{
			if(sayi[i]<sayi[j])
			{
				nobetciDeger = sayi[i];
				sayi[i] = sayi[j];
				sayi[j] = nobetciDeger;
			}
		}
	}
	i=0;
	for(;i<x;i++)
	{
		if(i==x-1)
		{
			printf("%d",sayi[i]);
			i++;
		}
		else
		{
			printf("%d>",sayi[i]);
		}
		
		
	}
}
