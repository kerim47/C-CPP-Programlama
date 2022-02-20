#include <stdio.h>
#include <stdlib.h>
struct ogrenciTip{
int no;
char cevap[10];
};

struct sonucTip{
int no;
int not;
};


int main()
{
    /*Bir öğretmen 30 kişilik sınıfa 10 soruluk çoktan seçmeli sorulardan oluşan bir sınav vermiştir.
    Bu sınavda her sorunun 4 şıkkı(A B C D) bulunmakta ve 4 yanlış bir doğruyu götürmektedir.Bu programda
    bir öğrencinin okul numarasını ve cevaplarını içeren bir yapı tanımlayınız ve sınıfta bulunan her öğrencinin
    okul numarasını ve cevaplarını bu yapı dizisine okutunuz.Daha sonra öğretmenin hazırladığı cevap anahtarını
    bir karakter dizisine okuyunuz ve her öğrencinin 10 üzerinden aldığı notu hesaplayınız.Her öğrencinin okul numarası
    ile,hesaplanan sınav sonucunu bir başka yapı dizisinde tutunuz ve sonuçları ekranda görüntüleyiniz.*/


    struct ogrenciTip ogrenci[30];
    struct sonucTip sonuc[30];
    char anahtar[10],satir;
    int i,j;
    int dogru,yanlis;

    printf("Lutfen cevap anahtarini giriniz\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",&anahtar[i]);
    }

    printf("Ogrenci bilgilerini giriniz\n");

    for(j=0;j<30;j++)
    {
        printf("Ogrenci no:\n");
        scanf("%d",&ogrenci[j].no);
        dogru=yanlis=0;
        scanf("%c",&satir);
        printf("Cevaplari:");
        for(i=0;i<10;i++)
        {
            scanf("%s",&ogrenci[j].cevap[i]);
            if(anahtar[i]==ogrenci[j].cevap[i])
            {
                dogru++;
            }
            else if(ogrenci[j].cevap[i] !=' ')
            {
                yanlis++;
            }
        }
        sonuc[j].no=ogrenci[j].no;
        printf("Dogru :%d Yanlis:%d\n",dogru,yanlis);
        sonuc[j].not=dogru-(yanlis/4);
    }

    for(j=0;j<30;j++)
    {
        printf("Ogrenci no :%d  Not:%d\n",sonuc[j].no,sonuc[j].not);

    }

	
	return 0;
}
