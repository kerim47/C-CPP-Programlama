#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    char cumle[150];

    int harf,i=0,sayac=1;;

    printf("Cumle giriniz. \n");

    gets(cumle);

    harf=strlen(cumle);

    while(cumle[i])

    {

        if(cumle[i]==32)

        {

            harf--;

            sayac++;

        }

     i++;



   }

   printf("%d harf %d kelime var",harf,sayac);
	return 0;
}
