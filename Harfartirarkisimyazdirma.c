#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,x;
	char cumle[100];
	printf("Cumleyi giriniz:\n");
	gets(cumle);
	for(i=0;i<=strlen(cumle);i++)
	 {
	 		for(x=0;x<i;x++)
	 		{
	 			printf("%c ",cumle[x])	;
			}
			printf("\n");
			
	 }

	return 0;
}
