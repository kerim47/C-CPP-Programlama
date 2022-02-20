#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	char karakter;
	int z;
	printf("Lutfen Alfabedeki yerini ogrenmek istediginiz harfi yaziniz:\n");
	scanf("%c",&karakter);
	if((karakter>='A') && (karakter<='Z'))
	{
		z=(int)karakter-(int)'A'+1;
	}
	else if((karakter>='a') && (karakter<='z'))
	{
		z=(int)karakter-(int)'a'+1;
	}
	else
	{
		printf("Lütfen alfabedeki bir karakteri giriniz.");
	}
	printf("%c: %d. siradadir.",karakter,z);
	return 0;
}
