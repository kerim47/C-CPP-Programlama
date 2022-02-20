#include <iostream>

using namespace std;


int main()
{
   int girilen,sayac=0,ikili[100];
   cout << "Onluk sayinizi giriniz : ";
   cin >> girilen;
   while(girilen>0)
   {
   		if(girilen%2==0)
   		{
   			ikili[sayac] = 0;
		}
		else
		{
			ikili[sayac] = 1;
		}
		girilen/=2;
		sayac++;
   }
   for(int i=sayac-1;i>=0;i--)
   {
		cout << ikili[i];
   }
   
   
   
}
