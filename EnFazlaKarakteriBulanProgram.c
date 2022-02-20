#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i = 0,encok;
	char harf = 'a';
	int kucukharf[26] = {0};
	char cumle[100];
	
	printf("Cumlenizi Giriniz:\n");
	gets(cumle);
	
	while(cumle[i])
	 {
	 	if(cumle[i] >=  'a' && cumle[i] <= 'z')
	 	{
	 		kucukharf[cumle[i]-'a']++;	
		}
		i++;
	 }
	 
	 encok = kucukharf[0];
	 for(i=1;i<26;i++)
	 {
	 	
	 		if(kucukharf[i] > encok)
			 {
					encok = kucukharf[i];
					harf = i+'a';
			 }	
		
	 }
	 printf("%c",harf);
	return 0;
}
