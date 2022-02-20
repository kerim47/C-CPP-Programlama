#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* my_strcopy(char *pointer1,char *pointer2){
	int gecici=*pointer1;
	*pointer1=*pointer2;
	*pointer2=gecici;	
	return *pointer1;
}
int main(int argc, char *argv[]) {
	char cumle[100];
	char *p1;
	char ch;
	printf("Bir karakter dizisi girin:");
	gets(cumle);
	int size=strlen(cumle);
	printf("\n%s",cumle);
	printf("\nKaldirmak istediginiz karakteri giriniz:");
	scanf("%c",&ch);
	for(p1=cumle;*p1;p1++)
	{
		if(*p1==ch)
		{
			my_strcopy(p1,p1+1);
		}
	}
	printf("%s",cumle);
	return 0;
}
