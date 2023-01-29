/*
 *
 *	Author : Abdulkerim Akan 
 *	Date   : 29.01.2023
 *
 * */


#include <stdio.h>


int main()
{
	int satir_adedi = 5;

	int i, j;

	for(i = 1; i<= satir_adedi; i++)
	{
		for(j = 1; j<= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}


	return 0;
}
