#include <stdio.h>
#include <ctype.h>

#include <stdlib.h>

int main()
{
	char string[10],gecici;
	int i=0,j;
	printf("Cumlenizi giriniz : ");
	scanf("%s",string);
	for(i=0;string[i]!='\0';i++);
	for(j=0;j<i/2;j++)
	{
		if(string[i-j-1]==string[j])
		{
			if(j==(i/2)-1)
			{
				printf("palendromdur");
			}
		}
		else
		{
			printf("palendrom degildir");
			break;
		}
	}
	
	
	return 0;
}
