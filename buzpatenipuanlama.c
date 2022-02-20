#include <stdio.h>
#include <stdlib.h>
struct yarismaciTip{

char isim[10],soyad[10];
float puan[10],performans;

};

float puanHesap(struct yarismaciTip pat)
{
    int i;
    float sonuc=0;
    float max=0.0;
    float min=6.0;
    for(i=0;i<10;i++)
    {
        if(pat.puan[i]>max)
        {
            max=pat.puan[i];
        }
        if(pat.puan[i]<min)
        {
            min=pat.puan[i];
        }

        sonuc +=pat.puan[i];
    }

    sonuc=(sonuc-max-min)/8;
    return(sonuc);
}




int main()
{
    struct yarismaciTip patenci[100];
    int n,birinci;
    int i,j;
    char satir;
    float max=0.0;
    printf("Lutfen yarismaci sayisini giriniz\n");
    scanf("%d",&n);
    scanf("%c",&satir);

    for(j=0;j<n;j++)
    {
        printf("Lutfen yarismacinin adini giriniz\n");
        gets(patenci[j].isim);

        printf("Lutfen yarismacinin soyadini giriniz\n");
        gets(patenci[j].soyad);

        printf("Hakem puani\n");

        for(i=0;i<10;i++)
        {
            scanf("%f",&patenci[j].puan[i]);
        }
         scanf("%c",&satir);
        patenci[j].performans=puanHesap(patenci[j]);

        printf("Puan = %f",patenci[j].performans);

        if(patenci[j].performans>max)
        {
            max=patenci[j].performans;
            birinci=j;
        }


    }
    printf("Yarismanin birincisi:\n");
    printf("Isim:%s Soyisim:%s Puan:%f\n",patenci[birinci].isim,patenci[birinci].soyad,max);
	return 0;
}
