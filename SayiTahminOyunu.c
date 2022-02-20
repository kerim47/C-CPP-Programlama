#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int soylenen,i=0,tutulan=3,n;
	int alt=1,ust=7;
	for(n=1;n<=10;n++)
	{
		soylenen=(alt+ust)/2;
		if(soylenen==tutulan)
		{
			printf("tahmin edilen sayi %d --- %d. tahminde buldunuz tebrikler",soylenen,i+1);
			return 0;
		}
		else
		{
			if(soylenen>tutulan)
			{
				ust=soylenen-1;
			}
			else
			{
				alt=soylenen+1;
			}
			i++;
		}
		printf("\n%d\n",soylenen);
		
	}
	return 0;
}
