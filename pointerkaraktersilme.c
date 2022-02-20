#include <stdio.h>
int main() {
	char cumle[100],*p1,ch;
	printf("Bir karakter dizisi girin:");
	gets(cumle);
	printf("\n%s",cumle);
	printf("\nKaldirmak istediginiz karakteri giriniz:");
	scanf("%c",&ch);
	for(p1=cumle;*p1;p1++) // 1000
	{
		if(*p1==ch)
		{
			*p1=strcopy(*p1,*p1+1);
		}
	}
	printf("\nKarakter dizisinin son hali: %s",cumle);
	for(p1=cumle;*p1;p1++)
	{
		printf("%c",p1);
	}
	return 0;
}
