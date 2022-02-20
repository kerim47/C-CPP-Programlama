#include <stdio.h>
#include <stdlib.h>
int kerim()
{
	int y=0,i=0,j,a,ch;

	char x[1000];
	ab:;
	printf("Capraz sekilde yazmak icin [1] Alt Alta yazmak icin [2]:\n");
	scanf("%d%c",&a,&ch);
	system("cls");
	switch(a)
	{
		case 1:
				printf("Lutfen Cumlenizi Giriniz:\n");
				gets(x);
				while(x[i])
				{
					printf("%c",x[i]);
					if(x[i]==32)
					{
						
						printf("\n");
						y++;
						for(j=0;j<y;j++) 
						{
							printf("\t");
						}	
					
				    }
		
				i++;
				}
		break;
		
		case 2:
			ac:;
			printf("Karakterleri Alt Alta yazmak icin [1] Kelimeleri Alt Alta yazmak icin [2]:\n");
			scanf("%d%c",&a,&ch);
			system("cls");
			
			switch(a)
			{
				case 1:
					printf("Lutfen Cumlenizi Giriniz:\n");
					gets(x);
					while(x[i])
					{
					printf("%c\n",x[i]);
					i++;
					}
					
				break;
				
				case 2:
			
					printf("Lutfen Cumlenizi Giriniz:\n");
					gets(x);
					while(x[i])
					{
				
						printf("%c",x[i]);
						if(x[i]==32)
						{
						printf("\n");
					
						}
			
					i++;
				
					}
				break;
				
				default:
					printf("Yanlis Tusa Bastiniz:\n");
					sleep(1);
					printf("Tekrar yonlendiriliyorsunuz...\n");
					sleep(2);
					goto ac;	
				
			}
		break;
		
		default:
			printf("Yanlis Tusa Bastiniz:\n");
			sleep(1);
			printf("Tekrar yonlendiriliyorsunuz...\n");
			sleep(2);
			goto ab;

	}
}
int main() {
	
kerim();
	
	return 0;
}
