#include <stdio.h>
#include <stdlib.h>
#define n 30

void olustur(int k[]){
	int i,x;
	printf("Birinci kumenin eleman adedini gir:");scanf("%d",&x);
	printf("\nElemanlari gir\n");
	for(i=1;i<=x;i++)scanf("%d",&k[i]);
	k[0]=x;
}
void yazdir(int kume[]){
	int i,adet;
	adet=kume[0];
	for(i=1;i<=adet;i++) printf("%d  ",kume[i]);   
}
void birlestir(int kume[],int kume2[],int kume4[]){
	int adet=kume[0],i;
	kume4[0]=0;
	for(i=0;i<=adet;i++)
	{
		kume4[i]=kume[i];
	}
	adet=kume2[0];
	for(i=1;i<=adet;i++)
	{
		if(!kontrol(kume2[i],kume4))
		{
			kume4[++kume4[0]]=kume2[i];
		}
	}
	
}
int kontrol(int kume,int kume4[]){
	int i,adet=kume4[0];
	for(i=1;i<=adet;i++)
	{
		if(kume==kume4[i])
		{
			return 1;
		}
	}
	return 0;
}
void ucunu_birlestir(int kume[],int kume2[],int kume3[],int kume4[]){
	
	int adet=kume[0],i;
	kume4[0]=0;
	for(i=0;i<=adet;i++)
	{
		kume4[i]=kume[i];
	}
	adet=kume2[0];
	for(i=1;i<=adet;i++)
	{
		if(!kontrol(kume2[i],kume4))
		{
			kume4[++kume4[0]]=kume2[i];
		}
	}
	adet=kume3[0];
	for(i=1;i<=adet;i++)
	{
		if(!kontrol(kume3[i],kume4))
		{
			kume4[++kume4[0]]=kume3[i];
		}
	}
}
void kesistir(int kume1[],int kume2[],int kume4[]){
	
	int adet=kume1[0],i;
	kume4[0]=0;
	adet=kume2[0];
	for(i=1;i<=adet;i++)
	{
		if(kontrol(kume2[i],kume1))
		{
			kume4[++kume4[0]]=kume2[i];
		}
	}
	
}
void ucunu_kesistir(int kume[],int kume2[],int kume3[],int kume4[],int kume5[]){
	
	int adet=kume[0],i;
	kume4[0]=0;
	kume5[0]=0;
	for(i=1;i<=adet;i++)
	{
		if(kontrol(kume2[i],kume))
		{
			kume5[++kume5[0]]=kume2[i];
		}
	}
	adet=kume3[0];
	for(i=1;i<=adet;i++)
	{
		if(kontrol(kume3[i],kume5))
		{
			kume4[++kume4[0]]=kume3[i];
		}
	}
	
}
void farki(int kume[],int kume2[],int kume4[]){
	int i,ne;
	kume4[0]=0;
	ne=kume[0];
	for(i=1;i<=ne;i++)
	{
		if(!kontrol(kume[i],kume2))
		{
			kume4[++kume4[0]]=kume[i];
		}
	}
}
void uclu_farki(int kume[],int kume2[],int kume3[],int kume4[],int kume5[]){

	int adet=kume2[0],i;
	kume5[0]=0;
	
	for(i=0;i<=adet;i++)
	{
		kume5[i]=kume2[i];
	}
	adet=kume3[0];
	for(i=1;i<=adet;i++)
	{
		if(!kontrol(kume3[i],kume5))
		{
			kume5[++kume5[0]]=kume3[i];
		}
	}
	int ne;
	kume4[0]=0;
	ne=kume[0];
	for(i=1;i<=ne;i++)
	{
		if(!kontrol(kume[i],kume5))
		{
			kume4[++kume4[0]]=kume[i];
		}
	}
			
}
int main() {
	int kume[n],kume2[n],kume3[n],kume4[n],kume5[n];          
	int sec,adet,sec2;
	do{
		printf("\n\n1-) 3 tane kume olustur\n2-) Kumeleri yazdir\n3-) Kumeleri birlestir\n4-) Kumelerin kesisimi\n5-) Kumelerin farki\n6-) Cik\n");
		scanf("%d",&sec);
		switch(sec){
			case 1:
				olustur(kume); 
				olustur(kume2);
				olustur(kume3);
				break;
			case 2:
				printf("\nKume 1\n");
				yazdir(kume);
				printf("\nKume 2\n");	 
				yazdir(kume2);
				printf("\nKume 3\n");	 
				yazdir(kume3);
				break;
			case 3:
				do{
					printf("\n\n1-) Kume 1 - 2 birlesim\n2-) Kume 1 - 3 birlesim\n3-) Kume 2 - 3 birlesim\n4-) Kume 1 - 2 -3 birlesim\n5-) Cik\n");
					scanf("%d",&sec2);
					switch(sec2){
						case 1:
							printf("\nKume 1 - 2 birlesimi\n");
							birlestir(kume,kume2,kume4);
							yazdir(kume4);
							break;
						case 2:
							printf("\nKume 1 - 3 birlesimi\n");
							birlestir(kume,kume3,kume4);
							yazdir(kume4);
							break;
						case 3:
							printf("\nKume 2 - 3 birlesimi\n");
							birlestir(kume2,kume3,kume4);
							yazdir(kume4);
							break;
						case 4:
							printf("\nKume 1 - 2 - 3 birlesimi\n");
							ucunu_birlestir(kume,kume2,kume3,kume4);
							yazdir(kume4);
							break;
						default:
							if(sec2!=5)
							printf("\nHatali karakter kullanimi\n");	
							
					}
					
				}while(sec2!=5);
				break;
			case 4:
				do{
					
				printf("\n\n1-) Kume 1 - 2 kesisim\n2-) Kume 1 - 3 kesisim\n3-) Kume 2 - 3 kesisim\n4-) Kume 1 - 2 -3 kesisim\n5-) Cik\n");
				scanf("%d",&sec2);
				switch(sec2){
					case 1:
						printf("\nKume 1 - 2 kesisimi\n");
						kesistir(kume,kume2,kume4);
						yazdir(kume4);
						break;
					case 2:
						printf("\nKume 1 - 3 kesisimi\n");
						kesistir(kume,kume3,kume4);
						yazdir(kume4);
						break;
					case 3:
						printf("\nKume 2 - 3 kesisimi\n");
						kesistir(kume2,kume3,kume4);
						yazdir(kume4);
						break;						
					case 4:
						printf("\nKume 1 - 2 - 3 kesisimi\n");
						ucunu_kesistir(kume,kume2,kume3,kume4,kume5);
						yazdir(kume4);
						break;						
					default:
						if(sec2!=5)
						printf("\nHatali karakter kullanimi\n");	
						
				}
				}while(sec2!=5);	
				break;
			case 5:
				do{
					
				printf("\n\n1-) Kume 1 - 2 farki\n2-) Kume 1 - 3 farki\n3-) Kume 2 - 3 farki\n4-) Kume 1 - 2 -3 farki\n5-) Cik\n");
				scanf("%d",&sec2);
				switch(sec2){
					case 1:
						printf("\nKume 1 - 2 farki\n");
						farki(kume,kume2,kume4);
						yazdir(kume4);
						break;
					case 2:
						printf("\nKume 1 - 3 farki\n");
						farki(kume,kume3,kume4);
						yazdir(kume4);
						break;
					case 3:
						printf("\nKume 2 - 3 farki\n");
						farki(kume2,kume3,kume4);
						yazdir(kume4);
						break;						
					case 4:
						printf("\nKume 1 - 2 - 3 farki\n");
						uclu_farki(kume,kume2,kume3,kume4,kume5);
						yazdir(kume4);
						break;						
					default:
						if(sec2!=5)
						printf("\nHatali karakter kullanimi\n");	
						
				}
			
				}while(sec2!=5);
				break;
			default:
				if(sec!=6)
				printf("\nHatali karakter kullanimi\n");			 
		}
		
	}while(sec!=6);

	return 0;

}
