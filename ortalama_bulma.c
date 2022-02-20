#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z=0,m=0;
	printf("Lutfen ortalamasini almak istediginiz sayilari yaziniz:");
	while(x!=-1){
		
		scanf("%d",&x);
		if(x==-1){
			
			break;
		}
		z+=x;
		m++;	
	}
	printf("Yazdiginiz sayilarin toplami:%d\n",z);
	int ort=z/m;
	printf("Sayilarin ortalamisi:%d",ort);
	return 0;
}
