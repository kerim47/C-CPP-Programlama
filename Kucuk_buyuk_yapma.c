
/*
		Diziye eklenen karakterlerin pointer yardimiyla karakterleri buyuk yapma
		
*/

#include <stdio.h>
#include <ctype.h>

void buyukHarfeCevir(char*);

int main()
{
	char string[] = "karakterler ve dolar otuz iki tele";
	printf("Cevrilmeden once string : %s\n", string);

	buyukHarfeCevir(string);
	printf("Cevrilmeden sonra string : %s", string);

	return 0;
}
void buyukHarfeCevir(char* sPtr)
{
	while (sPtr != '\0')
	{
		if (islower(*sPtr))
		{
			*sPtr = toupper(*sPtr);
		}
		++sPtr;
	}
}
