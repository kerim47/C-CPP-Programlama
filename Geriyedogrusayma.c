#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main() {

	setlocale(LC_ALL ,"turkish");
	int x,y,z,i;
	system("color 2");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Geriye Doðru Sayma");
	sleep(2);
	system("cls");
	tekrar:
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                              Kaçtan Geriye doðru Gitsin:\n");
	scanf("%d",&z);
	printf("\n\n                                              Kaçar Geriye doðru Gitsin:\n");
	scanf("%d",&y);
	system("cls");
	printf("\n\n\n                                    %d den Geriye doðru %d'er Siralamasi Þöyledir:\n\n",z,y);	
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
	printf("\n\nTekrar Denemek  Ýçin-----[1]\nÇýkýþ için[2]");
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
