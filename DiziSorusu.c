#include <stdio.h>

//Dizideki degerlerin ortalamasi, dizi içindeki degerden kucukse birer artir deðilse birer azaltan algoritma
// NOT:Pointerler araciligiyla

void fonk(int* ptr, const int boyut);
void main()
{
	int i=0;
	int dizi[]  = {2,4,2,4,2,4};
	printf("Dizideki Degerler :\n");
	for(;i<6;i++)
	{
		printf("%d ",dizi[i]); 
	}
	int boyut = i;
	fonk(dizi,boyut);
	printf("\nGuncellenmis Dizi :\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",dizi[i]);
	}

}

void fonk(int* ptr, const int boyut)
{
	int i, ort, top = 0;
	int* dizim = ptr;
	for (i = 0; i < boyut; i++)
	{
		top += *dizim;
		dizim++;

	}

	ort = top / boyut;
	for (i = 0; i < boyut; i++)
	{
		if (*(ptr) < ort)
		{
			(*ptr)--;

		}
		else
		{
			(* ptr)++;
		}
		ptr++;
	}
}
