#include <stdio.h>


void foo(int *a, int *b)
{
	*a = *b; 	// b degeri a' ya  atanmistir. Dikkat edilmesi gereken husus işaretçinin tuttuğu değer atanmistr.
	*b = 17; 	// b degeri 17 degeri almistir
	*a = *a + 1;    // A nin degeri bir artirilmistir.
}

int main()
{
	int i, j;
	int *x, *y;
	
	x = &i; // i adresi x' e atanmistir.
	y = &j; // j adresi y' e atanmistir.

	// Degiskenlere deger atanmistir. i, j degiskenin adresini tutarlar ve iki deger de degisir.
	*x = 17; 
	*y = 0;
	
	printf("x = %d, y = %d\n", *x, *y); // x = 17, y = 0 degerlerini alacaktir.

	foo(x, y); // x ve y degiskenlerinin adresi gonderilmistir. Degerlerin kendileri de haliyle degismis olacaktir.

	printf("x = %d, y = %d\n", *x, *y); // x = 1, y = 17 degerlerini alacaktir.
	
	/*
	 * Şu husus onem arz etmektedir. Girilen degerlerin eğer bir işaretçi ise bellek üzerinden işlem yapıldığı için fonksiyonlarda da degeri degismektedir.
	 * Ama sadece bir değişken ise stack bolgede saklandığından dolayı degerde bir degisiklik olmayacaktır.
	 */


	return 0;
}
