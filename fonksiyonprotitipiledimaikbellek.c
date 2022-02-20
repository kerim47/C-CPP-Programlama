#include <stdio.h>
#include <stdlib.h>
void dizi_olustur(int N,int *pe){
	int i;
	srand(time(0));
	for(i=0;i<N;i++)
	{
		*(pe+i)=rand()%100;
		printf("%d ",*(pe+i));
	}
	
}
void dizi_sirala(int N,int *pe){
	int i,j;
	int gecici;
	for(j=1;j<N;j++)
	{
		for(i=0;i<N-1;i++)
		{
			if(*(pe+i)>*(pe+i+1))
			{
				gecici=*(pe+i);
				*(pe+i)=*(pe+i+1);
				*(pe+i+1)=gecici;
			}
		}
	}   
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",*(pe+i));
	}
}
void dizi_buyuk(int N,int *pe){
	int i;
	int gecici=*pe;
	for(i=0;i<N;i++)
	{
		if(gecici<*(pe+i))
		{
			gecici=*(pe+i);
		}
	}
	printf("\nEn buyuk sayimiz : %d",gecici);
}
int main() {
	
	int n,*p;
	printf("Kac adet sayi uretilsin:");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	dizi_olustur(n,p);
	dizi_sirala(n,p);
	dizi_buyuk(n,p);
	free(p);
	return 0;
}
