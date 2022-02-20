#include <stdio.h>

int main()
{
	int a,b,c;
	printf("3 tam sayi giriniz : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Maksimum %d dir",max(a,b,c));
}
int max(int a,int b,int c)
{
	int maxi=a;
	if(b>maxi) maxi=b;
	if(c>maxi) maxi=c;
	return maxi;
}
