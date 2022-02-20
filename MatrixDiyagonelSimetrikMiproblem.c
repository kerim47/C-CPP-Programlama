#include <stdio.h>
#include <stdlib.h>
#define n 5
void bastirma(int mat[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}
void simetrik(int mat[n][n],int *deger){
	
   *deger=1;
   int i,j;
   for(i=0;i<n;i++)
   {
	   	for(j=1;j<n;j++)
		{
   			if(mat[i][j]!=mat[j][i])
   			{
   				*deger=0;
			}
	    }
   }
}
void diyagonel(int mat[n][n],int *m){
	
   *m=1;
   int i,j;
   for(i=0;i<n;i++)
   {
	   	for(j=0;j<n;j++)
		{
   			if(i!=j && mat[i][j]!=0)
   			{
   				*m=0;
			}
	    }
   }
	
	
}
	
int main() {
	int d,e;
	int matrix[n][n]={
						{2,0,0,0,0},
						{0,6,0,0,0},
						{0,0,2,0,0},
						{0,0,0,7,8},
						{0,0,0,8,4}
					};
	bastirma(matrix);
	simetrik(matrix,&d);
	diyagonel(matrix,&e);
	if(d==1)
	{
		printf("Bu matrix simetriktir.");
	}
	else
	{
		printf("Bu matrix simetrik degildir.");
	}
	if(d)
	{
		printf("\nBu matrix diyagoneldir.");
	}
	else
	{
		printf("\nBu matrix diyagonel degildir.");
	}
				   
	return 0;
}
