#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int x,y,z,i,m;
		printf("                                       Max-min ve siralama bulma                                       \n");
		printf("Hangi siralamayi ogrenmek istiyorsaniz yanindaki numarayi giriniz:\nBuyukten kucuge siralama icin [2]\nKucukten buyuge siralama icin [1]\n");
	scanf("%d",&i);
	if(i==2){
	scanf("%d %d %d",&x,&y,&z);
	for(i=0;i<1;i++)
	{
		system("cls");
		m;
		if(x>y && x>z && y>z){
			
			printf("En buyuk sayi: %d dir.\n",x);
			printf("En kucuk sayi: %d dir.\n",z);
			printf("Buyukten kucuge siralama soyledir:\n\n");
			printf("%d>%d>%d",x,y,z);
			
		}
		else if(x>y && x>z && z>y){
			printf("En buyuk sayi: %d dir.\n",x);
			printf("En kucuk sayi: %d dir.\n\n",y);
			printf("Buyukten kucuge siralama soyledir:\n\n");
			printf("%d>%d>%d",x,z,y);
			
		}
		else if(y>x && y>z && x>z){
			
		printf("En buyuk sayi: %d dir.\n",y);
		printf("En kucuk sayi: %d dir.\n\n",z);	
		printf("Buyukten kucuge siralama soyledir:\n\n");
		printf("%d>%d>%d",y,x,z);
			
		}
		else if(y>x && y>z && z>x){
			
		printf("En buyuk sayi: %d dir.\n",y);
		printf("En kucuk sayi: %d dir.\n\n",x);	
		printf("Buyukten kucuge siralama soyledir:\n\n");
		printf("%d>%d>%d",y,z,x);
			
		}
	else if(z>x && z>y && x>y){
	
		printf("En buyuk sayi: %d dir.\n",z);
		printf("En kucuk sayi: %d dir.\n\n",y);	
		printf("Buyukten kucuge siralama soyledir:\n\n");
		printf("%d>%d>%d",z,x,y);
			
		}
	else if(z>x && z>y && y>x){
	
		printf("En buyuk sayi: %d dir.\n",z);
		printf("En kucuk sayi: %d dir.\n\n",x);
		printf("Buyukten kucuge siralama soyledir:\n\n");
		printf("%d>%d>%d",z,y,x);
			
		}
	
	
	}
		
	}
	if(i==1){
		scanf("%d %d %d",&x,&y,&z);
	for(i=0;i<1;i++)
	{
		system("cls");
		m;
		if(x>y && x>z && y>z){
			
			printf("En buyuk sayi: %d dir.\n",x);
			printf("En kucuk sayi: %d dir.\n",z);
			printf("Kucukten buyuge gore siralama soyledir:\n\n");
			printf("%d<%d<%d",z,y,x);
			
		}
		else if(x>y && x>z && z>y){
			
			printf("En buyuk sayi: %d dir.\n",x);
			printf("En kucuk sayi: %d dir.\n\n",y);
			printf("Kucukten buyuge gore siralama soyledir:\n\n");
			printf("%d<%d<%d",y,z,x);
			
		}
		else if(y>x && y>z && x>z){
			
		printf("En buyuk sayi: %d dir.\n",y);
		printf("En kucuk sayi: %d dir.\n\n",z);		
		printf("Kucukten buyuge gore siralama soyledir:\n\n");
		printf("%d<%d<%d",z,x,y);
			
		}
		else if(y>x && y>z && z>x){
			
		printf("En buyuk sayi: %d dir.\n",y);
		printf("En kucuk sayi: %d dir.\n\n",x);
		printf("Kucukten buyuge gore siralama soyledir:\n\n");
		printf("%d<%d<%d",x,z,y);
			
		}
	else if(z>x && z>y && x>y){
		
		printf("En buyuk sayi: %d dir.\n",z);
		printf("En kucuk sayi: %d dir.\n\n",y);	
		printf("Kucukten buyuge gore siralama soyledir:\n\n");
		printf("%d<%d<%d",y,x,z);
			
		}
	else if(z>x && z>y && y>x){
	
		printf("En buyuk sayi: %d dir.\n",z);
		printf("En kucuk sayi: %d dir.\n\n",x);
		printf("Kucukten buyuge gore siralama soyledir:\n\n");
		printf("%d<%d<%d",x,y,z);
			
		}
	
	
	}
		
		
	}
	
	return 0;
}
