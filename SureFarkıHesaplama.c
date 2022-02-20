#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	time_t start,end;
	time(&start);
	int sayi=0;
	int s=1;
	while(s==1){
		
	int a=getch();
	printf("%c",a);
	if(a==32)
	{
		sayi++;
	}
	else if(a==13){
		time(&end);
		printf("\nsure:%f",difftime(end,start));
		printf("\n%d",sayi);
	}	
	}
	
	return 0;
}
