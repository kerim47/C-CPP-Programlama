#include <stdio.h>
#define pi 3.14

int main(int argc, char *argv[]) {
	
	//Dairenin alanini ve çevresini hesaplama
	float alan,cevre,yaricap;
	printf("Lutfen bir yaricap degeri giriniz : ");
	scanf("%f",&yaricap);
	
	alan = pi*yaricap*yaricap;
	cevre = 2*pi*yaricap;
	printf("Dairenin alani : %f\nDairenin yaricapi : %f",alan,cevre);
	return 0;
}
