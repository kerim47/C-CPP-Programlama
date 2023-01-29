#include <stdio.h>  //  hata : ()

#define PI 3.14

int main() // main parantezler  olacaktir 
{
	int cap; //  veri tipleri buyuk harfle baslamaz.
	float alan, cevre;
	
	printf("\nYaricap:"); // printf noktali virgul ile bitir.
	scanf("%d", &cap);    // scanf' te adres operatoru kullanilmidir.
	
	alan = PI *cap *cap; // pi degeri define olarak kullanıması dogrudur hata degildir hatalara sebebiyet  verebilir.
	printf("\nAlan : %f", alan); // %d degil %f kullanilacak

	cevre = 2 *PI *cap;
	printf("\nÇevre : %f", cevre);


	return 0;

}
