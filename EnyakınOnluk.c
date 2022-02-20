#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double y,x=8.5;
	y=floor((x*10+.5)/10);
	y=floor((x*100+.5)/100);
	printf("%lf\n",y);
	
	printf("%lf",y);
	return 0;
}
