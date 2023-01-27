#include <stdio.h>


void g(int *x, int *y)
{ 
	*x = *y + 1; // (1) :  x = 18 (2) : x = 377
	*y = *y + 2; // (1) :  y = 19 (2) : y = 377 aynı adresleri kullanmaktadırlar.

	printf("g: *x = %d, *y = %d\n", *x, *y);
}

void f(int *p, int *q)
{
	int n = 17;
	g(q, &n); // q işaretçi , n adres olarak kullanildi. -> q : 18 n : 19
	printf("f: *p = %d, *q = %d , n = %d\n", *p, *q, n);
}

int main(int argc, char **argv)
{
	int i = 42;
	int j = 10;
	int n = 374;
	f(&i, &j); // i ve j adresleri yollandindan  kendi degerleri degismis olacaktir.
	printf("main 1: i = %d, j = %d, n = %d\n", i, j, n);
	g(&n, &n);
	printf("main 2: i = %d, j = %d, n = %d\n", i, j, n);

	return 0;
}

