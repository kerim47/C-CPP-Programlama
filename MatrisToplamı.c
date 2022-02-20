#include <stdio.h>


int main()
{
	int i,j,satir,sutun,gecici,gecici2,top=0;
	printf("Satir sayisini giriniz:");
	scanf("%d",&satir);
	printf("Sutun sayisini giriniz:");
	scanf("%d",&sutun);
	int dizi[satir][sutun];
	printf("%d * %d tipinde matris girin:\n",satir,sutun);
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			scanf("%d",&dizi[i][j]);
		}
	}
	gecici=dizi[0][0];
	gecici2=dizi[0][0];
	printf(" Matrisimiz:\n--------------\n\n");
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
				printf(" %d  ",dizi[i][j]);
				top+=dizi[i][j];
				if(dizi[i][j]>gecici)
				{
					gecici = dizi[i][j];
				}
				else if(dizi[i][j]<gecici2)
				{
					 gecici2 = dizi[i][j];
				}
		}
		printf("\n");
	}
	printf("--------------\n");
	printf("En buyuk deger : %d\n",gecici);
	printf("En kucuk deger : %d\n",gecici2);
	printf("--------------\n");
	printf("Matrisin tum elemanlari toplami : %d\n",top);
}
