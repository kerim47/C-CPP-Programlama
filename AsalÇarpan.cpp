

//Bir sayinin asal carpnlarinin bulunmasi

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int hesapla(int sayi)
{
	int flag = 0, i ;
       for( i = 2; i <= sayi/2; i++)
	   {
	        if(sayi % i == 0)
			{
	          flag = 1;
	          break;
	        }
       } 
       if(flag == 0)
          return 1;
       else
          return 0;
}
int  main()
{
	int sayi = 945,i=2,x=2;
	while(sayi!=1)
	{
		if(sayi%i==0)
		{
			if(hesapla(i)==1)
			{
				printf("%3d",i);
			}
			sayi/=i;
		}
		i++;
	}
	
}
