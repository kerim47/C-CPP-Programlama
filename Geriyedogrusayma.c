#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main() {

	setlocale(LC_ALL ,"turkish");
	int x,y,z,i;
	system("color 2");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Geriye Do�ru Sayma");
	sleep(2);
	system("cls");
	tekrar:
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                              Ka�tan Geriye do�ru Gitsin:\n");
	scanf("%d",&z);
	printf("\n\n                                              Ka�ar Geriye do�ru Gitsin:\n");
	scanf("%d",&y);
	system("cls");
	printf("\n\n\n                                    %d den Geriye do�ru %d'er Siralamasi ��yledir:\n\n",z,y);	
	while(z+y>=y){
		
		for(i=0;i<10;i++){
			z-=y;
		if(z<0){
			break;
		}
			printf("%d\t",z);
				
		}
		printf("\n");
		
	}
	printf("\n\nTekrar Denemek  ��in-----[1]\n��k�� i�in[2]");
	scanf("%d",&x);
	system("cls");
	switch(x){
		case 1:
			
			goto tekrar;
			break;
			
		case 2:
			
			break;		
	}
		

	
	
	
	return 0;
}
