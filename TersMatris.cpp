#include <iostream>
#define boyut 3
#include <math.h>
#include <locale.h>
using namespace std;

int i,j,toplam = 0;
int main() {
	setlocale(LC_ALL,"Turkish");
	int matris[boyut][boyut];
	int matris2[boyut+2][boyut+2];
	int matris3[boyut][boyut];
	int deger[boyut];
	int degerim[boyut];
	int gecici=0,detA;
	cout <<"Lutfen matrisinizi giriniz ve sonuçlarini giriniz\n1 2 3 : 6\n4 5 6 : 15\n7 8 9 : 24\n(Ornekteki gibi yaziniz)\n";
	for(i=1;i<=boyut;i++)
	{
		for(j=1;j<=boyut;j++)
		{
			cin >> matris[i][j];
			matris2[i][j] = matris[i][j];
		}
		cin >> deger[i];
	}
	for(i=1;i<boyut;i++)
	{
		for(j=1;j<=boyut;j++)
		{
			 matris2[i+3][j] = matris[i][j];
		}
	}
	toplam += (matris2[2][1]*matris2[3][2]*matris2[4][3])+(matris2[3][1]*matris2[4][2]*matris2[5][3])+(matris2[1][1]*matris2[2][2]*matris2[3][3]);
	toplam-= (matris2[1][3]*matris2[2][2]*matris2[3][1])+(matris2[2][3]*matris2[3][2]*matris2[4][1])+(matris2[3][3]*matris2[4][2]*matris2[5][1]);
	cout <<"DET(A) : "<<toplam<<endl;
	detA=toplam;
	matris2[1][1] = +1*((matris[2][2]*matris[3][3])-(matris[3][2]*matris[2][3]));
	matris2[1][2] = -1*((matris[2][1]*matris[3][3])-(matris[3][1]*matris[2][3]));
	matris2[1][3] = +1*((matris[2][1]*matris[3][2])-(matris[2][2]*matris[3][1]));
	matris2[2][1] = -1*((matris[1][2]*matris[3][3])-(matris[1][3]*matris[3][2]));
	matris2[2][2] = +1*((matris[1][1]*matris[3][3])-(matris[1][3]*matris[3][1]));
	matris2[2][3] = -1*((matris[1][1]*matris[3][2])-(matris[1][2]*matris[3][1]));
	matris2[3][1] = +1*((matris[1][2]*matris[2][3])-(matris[1][3]*matris[2][2]));
	matris2[3][2] = -1*((matris[1][1]*matris[2][3])-(matris[1][3]*matris[2][1]));
	matris2[3][3] = +1*((matris[1][1]*matris[2][2])-(matris[1][2]*matris[2][1]));
	
	matris3[1][1]= matris2[1][1]; 
	matris3[1][2]= matris2[2][1]; 
	matris3[1][3]= matris2[3][1]; 
	matris3[2][1]= matris2[1][2]; 
	matris3[2][2]= matris2[2][2]; 
	matris3[2][3]= matris2[3][2]; 
	matris3[3][1]= matris2[1][3]; 
	matris3[3][2]= matris2[2][3]; 
	matris3[3][3]= matris2[3][3]; 
	
	for(i=1;i<=boyut;i++)
	{	    
		    for(j=1;j<=boyut;j++)
		    {
		    	cout<<matris3[i][j]<<" ";
			}
			cout <<"\n";
	}
	
	for(i=1;i<=boyut;i++)
	{	
		toplam = 0;   
		for(j=1;j<=boyut;j++)
		{
	   		toplam += matris3[i][j]*deger[j];
		}
		degerim[i] =toplam;
		degerim[i] /=detA;
	}
	for(i=1;i<=boyut;i++)
	{	
		cout<<"x"<<i<<" nin degeri : "<<degerim[i]<<"\n";
	}
	return 0;
}
