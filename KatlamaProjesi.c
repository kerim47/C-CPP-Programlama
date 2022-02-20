#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,k=1,i;
	printf("Lutfen kacar kat gitmek istediginizi belirtiniz:\n");
	scanf("%d",&x);
	printf("Kaca kadar %d sar gitsin belirtiniz:\n",x);
	scanf("%d",&y);
	for(i=0;i<=y;i+=x){
		
		
		if(i<y)
		printf("%d ",i);
		if(k%10==0){	
			
		printf("\n");
		k=0;
				
		}
		k++;
	
		

		
		
	}
	return 0;
}
