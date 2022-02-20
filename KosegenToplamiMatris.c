
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int **matris,sat,i,j,top=0;
	printf("N*N  matrisin boyutunu giriniz:");
	scanf("%d",&sat);
	matris=malloc(sat*sizeof(int));
	for(i=0;i<sat;i++)
	{
		matris[i]=malloc(sat*sizeof(int));
		for(j=0;j<sat;j++)
		{
			printf("[%d][%d]-->",i,j);
			scanf("%d",&(matris[i][j]));
			if(i==j)
			{	
				top+=(matris[i][i]);
			}
		}
	}
	printf("\n");
	for(i=0;i<sat;i++)
	{
		for(j=0;j<sat;j++)
		{
			printf("%d ",matris[i][j]);
		}
			printf("\n");
	}
	printf("\n%d",top);
	return 0;
}
