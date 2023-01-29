#include <stdio.h>



int main()
{

	int girilecek_sayi, toplam = 0;
	
	do
	{
		printf("Sayi gir : ");
		scanf("%d", &girilecek_sayi);
		
		if(girilecek_sayi != 0) // Girilen sayi 0 degilse topla
			toplam += girilecek_sayi;
		else                    // girilen sayi 0 ise donguden cik
			break;

	}while(1);
	
	// Toplanan sayilari yazdir
	printf("Girilen sayilarin toplami : %d\n", toplam);


	return 0;
}
