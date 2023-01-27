#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define altSinir 10
#define ustSinir 20

#define sayiAdedi 5

int tersArray[sayiAdedi];

void TersCevir(int[], int);

int main()
{

	// 1970' den itibaren milisaniyeyi verir.
	srand(time(NULL));

	// Degisken tanimlamalari
	int duzArray[sayiAdedi], i;
	
	// Dizideki degerlere altSinir ve ustSinir arasinda deger atandi.
	for(i = 0; i< sayiAdedi; i++)
		duzArray[i] = altSinir + rand() % 10 + 1; // Alabilecegi max deger ustSinirdir.
       for(i =0; i< sayiAdedi; i++)
                 printf("%d -> %d\n", i + 1,  duzArray[i]);

	TersCevir(duzArray, sayiAdedi);

   	for(i =0; i< sayiAdedi; i++)
	         printf("%d -> %d\n", i + 1,  tersArray[i]);

	
	return 1;
}
void TersCevir(int duzArray[], int SIZE)
{
	int i;

	for(i = 0; i< SIZE; i++)
		tersArray[i] = duzArray[SIZE -i - 1];

}
