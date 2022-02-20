#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef enum{
	ocak=1,   //ne deger verirsem sonrakiler o sayidan baslar saymaya 0 baslayana 2 vesen digeri 3 diye devam eder,
	subat,
	mart,
	nisan,
	mayis,
	haziran,
	temmuz,
	agustos,
	eylul,
	ekim,
	kasim,
	aralik
}aylar;

void ayigoster(aylar kerim1)
{
	switch(kerim1)
	{
		case ocak:
			printf("Ocak");
			break;
		case subat:
			printf("Subat");
			break;
		case mart:
			printf("Mart");
			break;
		case nisan:
			printf("Nisan");
			break;
		case mayis:
			printf("Mayis");
			break;
		case haziran:
			printf("Haziran");
			break;
		case temmuz:
			printf("Temmuz");
			break;
		case agustos:
			printf("Agustos");
			break;
		case eylul:
			printf("Eylul");
			break;
		case ekim:
			printf("Ekim");
			break;
		case kasim:
			printf("Kasim");
			break;
		case aralik:
			printf("Aralik");
			break;
		default:
			printf("Boyle bir ay yok");
			break;
	}
}
int main(int argc, char *argv[]) {
	aylar kerim;
	printf("Ay numarasi girin:");
	scanf("%d",&kerim);
	ayigoster(kerim);
	return 0;
}
