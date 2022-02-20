#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//Bir ucgennin eskenenar,ikizkenar ya da cesitkenar oldugunu bulan program

	int x,y,z,m;
	printf("Kenar hesaplamak icin ---[1] Aci hesaplamak icin ---[2]\n");
	scanf("%d",&m);
	if(m==1)
	{
	printf("Please Enter numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x==y && x==z && y==z)
	printf("Eskenar Ucgen");
	
	else if(x==y || x==z || y==z)
	printf("Ikizkenar Ucgen");
	
	else printf("Cesitkenar Ucgen.");
	
	}else if(m==2)
	
	{
	printf("Please Enter numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x==60 && y==60 && z==60)
	printf("Eskenar Ucgen");
	
	else if((x+y+z)==180 && x==y || y==z || x==z)
	printf("Ikizkenar Ucgen");
	
	else if(x!=y && x!=z && y!=z && (x+y+z)==180) 
	printf("Cesitkenar Ucgen.");
	else printf("toplami 180 olan bir sayi giriniz.");
	}
	
	return 0;
}
