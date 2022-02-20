#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/*Disardan girilen n sayisina kadar olan sayilarin karelerinin toplamini hesaplayan c programi.*/
	
	int x,y,i;
	int top=0;
	printf("Please enter a number:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
	   top+=i*i;	
	}
	printf("%d  sayisina kadar olan sayilarin toplami=%d dir.",y,top);
	
	return 0;
}
