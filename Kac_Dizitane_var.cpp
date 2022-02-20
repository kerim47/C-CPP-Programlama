
// Bir dizi icinde dizi sayisi sorgulama

#include <stdio.h>

int aBoyut=18;
int bBoyut=3;

int tekrarla(int a[],int b[],int aBoyut);
int karsilastir(int a[],int b[],int i,int j);

int main()
{
	int a[] = {1,5,4,6,1,5,4,1,4,5,1,5,4,8,2,1,5,4};
	int b[] = {1,5,4};
	int i= 0,j= 0,toplam=0;
	
	printf("index : ");
	
	for(i=0;i<aBoyut;i++)
	{
		toplam += karsilastir(a,b,i,bBoyut);
	}
	printf("\nB dizisi A dizisi icinde %d kere bulunmustur.",toplam);
	
	
}
int karsilastir(int a[],int b[],int i,int j)
{
	int toplam=0;
	if(a[i] == b[i])
	{
		if(b[j+1] == '\0')
		{
			printf("%d-%d ",i-2,i);
			toplam++;
		}
		else
		{
			i++;
			j++;
		}
	}
	return toplam;
}

