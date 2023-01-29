/*
 *
 * 	Author : Abdulkerim Akan
 *	Date   : 29.01.2023
 *
 *
 * */



#include <stdio.h>



int main()
{
       /*
	  switch case kullanildigi zaman case durumlarındaki break komutunun olup olmadigi dikkat edilmelidir. 
	  Eger kullanilmaz ise tum durunları kapsayacaktir.     
       */
	int i = 1;

	switch(++i) // i = 2
	{
		case 1:
			printf("**");
		case 2:
			printf("++");
		case 4:
			printf("--");
		default:
			printf("//");
	}
	// Cikti : ++--//
	return 1;
}
