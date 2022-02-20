#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int saniye,dakika,saat;
}zaman;
void zamanfark(zaman t1,zaman t2,zaman *farki)
{
	if(t2.saniye>t1.saniye)
	{
		--t1.dakika;
		t1.saniye+=60;
	}
	farki->saniye=t1.saniye-t2.saniye;
	if(t2.dakika>t1.dakika)
	{
		--t1.saat;
		t1.dakika+=60;
	}
	farki->dakika=t1.dakika-t2.dakika;
	farki->saat=t1.saat-t2.saat;
}
int main(int argc, char *argv[]) {
	zaman t1,t2,fark;
	printf("Baslangic zamanini (saat,dakika,saniye) seklinde giriniz:");
	scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);
	printf("Bitis zamanini (saat,dakika,saniye) seklinde giriniz:");
	scanf("%d%d%d",&t2.saat,&t2.dakika,&t2.saniye);
	zamanfark(t1,t2,&fark);
	printf("\nzaman farki : %d:%d:%d - %d:%d:%d = %d:%d:%d",t1.saat,t1.dakika,t1.saniye,t2.saat,t2.dakika,t2.saniye,fark.saat,fark.dakika,fark.saniye);
	system("pause");
	return 0;
}

