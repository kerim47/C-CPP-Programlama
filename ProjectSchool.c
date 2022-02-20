#include <stdio.h> 
int main() {
	char c; short s; int i; long l;
	float f; double d; long double ld;
	int dizi[20], * ptr = dizi;
	printf(" sizeof c = %d \t sizeof(char) = %d \n sizeof s = %d \t sizeof(short) = %d"
		"\n sizeof i = %d \t sizeof(int) = %d \n sizeof l = %d \t sizeof(long) = %d"
		"\n sizeof f = %d \t sizeof(float) = %d \n sizeof d = %d \t sizeof(double) = %d"
		"\n sizeof ld = %d \t sizeof(long double) = %d \n sizeof dizi = %d \n sizeof ptr = %d\n",
		sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i, sizeof(int),
		sizeof l, sizeof(long), sizeof f, sizeof(float), sizeof d, sizeof(double),
		sizeof ld, sizeof(long double), sizeof dizi, sizeof ptr);
	return 0;
}
