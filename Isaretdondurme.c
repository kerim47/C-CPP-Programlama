#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	second:;
	system("cls");
	int x,y,z;
	start:;
	printf("Birinci sayiyiyi giriniz:\n");
	scanf("%d",&x);
	printf("Ikinci sayiyiyi giriniz:\n");
	scanf("%d",&y);
	int m = x*y;
	if(m>0){
		
	printf("\n>>sign(%d*%d) = +1",x,y);
	
	printf("\n\nTekrar denemek için 1 e cikmak icin 2 ye silmek için 3 e basin basin:\n");
	scanf("%d",&z);
	if(z==1) goto start;
	if(z==2) return 0;
	if(z==3) goto second;
		
	}else if(m<0){
		
	printf("\n>>sign(%d*%d) = -1",x,y);
	
	printf("\n\nTekrar denemek icin 1 e cikmak icin 2 ye silmek icin 3 e basin basin:\n");
	scanf("%d",&z);
	if(z==1) goto start; 
	if(z==2) return 0;
	if(z==3) goto second;	
		
	}else{
		
	printf("\n>>sign(%d*%d) = 0",x,y);
	
	printf("\n\nTekrar denemek için 1 e cikmak icin 2 ye silmek için 3 e basin basin:\n");
	scanf("%d",&z);
	if(z==1) goto start;
	if(z==2) return 0;
	if(z==3) goto second;
	
	}		
		
	
	
	return 0;
}
