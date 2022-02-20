#include <stdio.h>
#define maas 200

int main(int argc, char *argv[]) {
	
	float satis,toplam=0;
	
	while(satis!=-1){
		toplam=0;
		printf("Lutfen bu aylik satisinizi belirtiniz : ");
		scanf("%f",&satis);
		toplam+=maas+satis*.09;
		printf("Yeni maasiniz : %.2f $\n",toplam);
	}
	
	return 0;
}
