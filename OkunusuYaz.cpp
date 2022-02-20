#include <stdio.h>


int main()
{
	
	char* birler[]= {" ","bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};
	char* onlar[]= {" ","on","yirmi","otuz","kirk","elli","altmis","yetmis","seksen","doksan"};
	
	int number;
	printf("Iki basamakli bir sayi girin: ");
	scanf("%d",&number);

	int ones = number%10;
	int tens = number/10;
	printf("%s %s",onlar[tens],birler[ones]);
}
