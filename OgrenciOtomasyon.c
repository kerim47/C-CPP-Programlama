#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
 
    struct ogrenci{
        int ID;
        int numara;
        char isim[40];
        char soyisim[40];
        int vize;
        int final;
        double ortalama;
    };
 
    void secimMenusu();
    void yeniKayit();
    void noKayitListele();
    void isimKayitListele();
    void kayitGuncelle();
    void kayitSil();
    void kayitlariListele();
    void textDosyasinaKaydet();
 
    int main(void)
    {
        secimMenusu();
        return 0;
    }
    void secimMenusu(FILE *dosya)
    {
        int secim;
 
        while(1)
        {
            printf("\nLutfen yapmak istediginiz islemi seciniz : \n\n"
               "[1 Dosyaya kayit ekle.                      ]\n"
               "[2 Ogrenci numarasina gore kayit listele.   ]\n"
               "[3 Ogrenci adina gore liste.                ]\n"
               "[4 Kayit guncelle.                          ]\n"
               "[5 Kayit silme.                             ]\n"
               "[6 Tum kayitlari listele.                   ]\n"
               "[7 Tum kayitlari text dosyasina kaydet.     ]\n"
               "[8 Programdan cik.                          ]\n\n"
               "Seciminiz ? : ");
 
            scanf("%d",&secim);
            switch(secim)
            {
                case 1:
                yeniKayit();
                break;
 
                case 2:
                noKayitListele(dosya);
                break;
 
                case 3:
                isimKayitListele(dosya);
                break;
 
                case 4:
                kayitGuncelle(dosya);
                break;
 
                case 5:
                kayitSil(dosya);
                break;
 
                case 6:
                kayitlariListele(dosya);
                break;
 
                case 7:
                textDosyasinaKaydet();
                break;
 
                case 8:
                printf("nProgram sonlandiriliyor..n");
                exit(0);
                break;
 
                default:
                printf("nLutfen gecerli bir secim yapiniz!..n");
                break;
            }
        }
    }
    void yeniKayit()
    {
        FILE *dosya;
        struct ogrenci kayit={0,0,"","",0,0,0.0};
        int kayitID;
 
        printf("nLutfen kayit numarasi giriniz : ");
        scanf("%d",&kayitID);
 
        if((dosya=fopen("veritabani.db","ab+"))==NULL)
        {
            printf("nVeri tabanina erisimde sorun!..n");
        }
        else
        {
            fseek(dosya,(kayitID-1)*sizeof(struct ogrenci),SEEK_SET);
            fread(&kayit,sizeof(struct ogrenci),1,dosya);
 
            if(kayit.ID != 0)
            {
                printf("n%d ID'si baska kayit icin kullaniliyor!..n");
                yeniKayit(dosya);
            }
            else
            {
                kayit.ID = kayitID;
                printf("Ogrenci numarasini giriniz : ");
                scanf("%d",&kayit.numara);
 
                printf("Ogrenci ismini giriniz : ");
                scanf("%s",&kayit.isim);
 
                printf("%s'in Soyismini giriniz : ",kayit.isim);
                scanf("%s",&kayit.soyisim);
 
                printf("%s %s'in vize notunu giriniz : ",kayit.isim,kayit.soyisim);
                scanf("%d",&kayit.vize);
 
                printf("%s %s'in final notunu giriniz : ",kayit.isim,kayit.soyisim);
                scanf("%d",&kayit.final);
 
                kayit.ortalama =(double)0.4*kayit.vize + 0.6*kayit.final;
 
                fseek(dosya,(kayit.ID-1)*sizeof(struct ogrenci),SEEK_SET);
                fwrite(&kayit,sizeof(struct ogrenci),1,dosya);
            }
        }
        fclose(dosya);
    }
    void noKayitListele()
    {
        FILE *dosya;
        struct ogrenci kayit={0,0,"","",0,0,0.0};
        int arananNo;
        int bulundu=0;
 
        printf("nListelemek istediginiz ogrencinin numarasini  giriniz : ");
        scanf("%d",&arananNo);
 
        if((dosya=fopen("veritabani.db","r+b"))==NULL)
        {
            printf("nVeri tabanina erisimde sorun!..n");
        }
        else
        {
            while(!feof(dosya))
            {
                fread(&kayit,sizeof(struct ogrenci),1,dosya);
                if(kayit.ID != 0)
                {
                    if(kayit.numara == arananNo )
                    {
                        bulundu++;
                        printf("n|----------Arama--Sonucu------------|n"
                        "nKayit bulundu.........n"
                        "n-------------------------------------n"
                        "Ogrenci No: %dn%s %snVize : %3dnFinal :%3d"
                        "nOrtalama :%3.2fn"
                        "n-------------------------------------n"
                        ,kayit.numara,kayit.isim,kayit.soyisim
                        ,kayit.vize,kayit.final,kayit.ortalama);
                    }
                }
            }
        }
        if(bulundu == 0) printf("n%d Numarasina sahip ogrenci kayitlar arasinda bulunamadi!..n"
                                ,arananNo);
        fclose(dosya);
    }
    void isimKayitListele()
    {
        FILE *dosya;
        struct ogrenci kayit={0,0,"","",0,0,0.0};
        char arananisim[40];
        int bulundu=0;
 
        printf("nListelemek istediginiz ogrencinin ismini giriniz : ");
        scanf("n%s",arananisim);
 
        if((dosya=fopen("veritabani.db","rb"))==NULL)
        {
            printf("nVeritabanina erisimde sorun!..n");
        }
        else
        {
            while(!feof(dosya))
            {
                fread(&kayit,sizeof(struct ogrenci),1,dosya);
                if(kayit.ID != 0)
                {
                    if((strcmp(kayit.isim,arananisim))==0)
                    {
                        bulundu++;
                        printf("n|----------Arama--Sonucu------------|n"
                        "nKayit bulundu.........n"
                        "n-------------------------------------n"
                        "Ogrenci No: %dn%s %snVize : %3dnFinal :%3d"
                        "nOrtalama :%3.2fn"
                        "n-------------------------------------n"
                        ,kayit.numara,kayit.isim,kayit.soyisim
                        ,kayit.vize,kayit.final,kayit.ortalama);
                    }
                }
             }
        }
        if(bulundu > 1)
        {
            printf("nBirden fazla kayit listelendi!..n");
        }
        else
        {
            printf("n%s isimli bir ogrenci kayitlar arasinda bulunamadi!..n"
                    ,arananisim);
        }
        fclose(dosya);
    }
    void kayitGuncelle()
    {
        FILE *dosya;
        struct ogrenci kayit={0,0,"","",0,0,0.0};
        int kayitID;
 
        printf("nGuncellemek istediginiz kayitin ID'sini giriniz : ");
        scanf("%d",&kayitID);
 
        if((dosya=fopen("veritabani.db","a+b"))==NULL)
        {
            printf("nVeritabanina erisimde sorun!..n");
        }
        else
        {
            fseek(dosya,(kayitID-1)*sizeof(struct ogrenci),SEEK_SET);
            fread(&kayit,sizeof(struct ogrenci),1,dosya);
 
            if(kayit.ID == 0)
            {
                printf("n%d. ID ye sahip kayit mevcut degil!..n",kayitID);
 
            }
            else
            {
                printf("nDegistirilecek kayit ;n"
                        "%s %s nVize : %3dnFinal :%3dnOrtalama :%3.2fn"
                        ,kayit.isim,kayit.soyisim,kayit.vize,kayit.final,kayit.ortalama);
 
                printf("%s %s'in Vize notunu giriniz : ",kayit.isim,kayit.soyisim);
                scanf("%d",&kayit.vize);
                printf("%s %s'in Final notunu giriniz : ",kayit.isim,kayit.soyisim);
                scanf("%d",&kayit.final);
                kayit.ortalama=(double)0.4*kayit.vize + 0.6*kayit.final;
 
                fseek(dosya,(kayitID-1)*sizeof(struct ogrenci),SEEK_SET);
                fwrite(&kayit,sizeof(struct ogrenci),1,dosya);
            }
        }
        fclose(dosya);
    }
    void kayitSil()
    {
        FILE *dosya;
        struct ogrenci kayit={0,0,"","",0,0,0.0};
        struct ogrenci bosKayit={0,0,"","",0,0,0.0};
        int kayitID;
 
        if((dosya=fopen("veritabani.db","ab"))==NULL)
        {
            printf("nVeritabanina erisimde sorun!..n");
        }
        else
        {
            rewind(dosya);
            printf("nLutfen silmek istediginiz kayit ID sini giriniz : ");
            scanf("%d",&kayitID);
 
            fseek(dosya,(kayitID -1)*sizeof(struct ogrenci),SEEK_SET);
            fread(&kayit,sizeof(struct ogrenci),1,dosya);
 
            if(kayit.ID == 0)
            {
                printf("n%d ID'sine sahip kayit bulunamadi!..n",kayitID);
            }
            else
            {
                fseek(dosya,(kayitID-1)*sizeof(struct ogrenci),SEEK_SET);
                fwrite(&bosKayit,sizeof(struct ogrenci),1,dosya);
            }
        }
        fclose(dosya);
    }
    void kayitlariListele()
    {
        FILE *dosya;
        struct ogrenci kayit={0,0,"","",0,0,0.0};
        int bulundu=0;
 
        if((dosya=fopen("veritabani.db","rb+"))==NULL)
        {
            printf("nVeri tabanina erisimde sorun!..n");
        }
        else
        {
            while(!feof(dosya))
            {
                fread(&kayit,sizeof(struct ogrenci),1,dosya);
                if(kayit.ID != 0)
                {
                    {
                        bulundu++;
                        printf("n|-------------------------------|n"
                        "ID :: %dnOgrenci No: %dn%s %snVize : %3dnFinal :%3dn"
                        "Ortalama :%3.2fn"
                        ,kayit.ID,kayit.numara,kayit.isim,kayit.soyisim
                        ,kayit.vize,kayit.final,kayit.ortalama);
                    }
                }
            }
            printf("n|-------------------------------|n");
            fclose(dosya);
            if(bulundu == 0) printf("nVeritabani suanda bos!..n");
        }
    }
    void textDosyasinaKaydet()
    {
        FILE *dosyaOku;
        FILE *dosyaYaz;
        struct ogrenci kayit={0,0,"","",0,0,0.0};
 
        if((dosyaOku=fopen("veritabani.db","rb"))==NULL)
        {
            printf("nVeritabanina erisimde hata!..n");
        }
        else
        {
            if((dosyaYaz=fopen("veritabani.txt","w"))==NULL)
            {
                printf("nDosya islemi basarisiz!..n");
            }
            else
            {
                rewind(dosyaOku);
 
                while(!feof(dosyaOku))
                {
                    fread(&kayit,sizeof(struct ogrenci),1,dosyaOku);
                    if(kayit.ID != 0)
                    {
                        fprintf(dosyaYaz,"n|-------------------------------|n"
                        "ID :: %dnOgrenci No: %dn%s %snVize : %3dnFinal :%3dn"
                        "Ortalama :%3.2fn"
                        ,kayit.ID,kayit.numara,kayit.isim,kayit.soyisim
                        ,kayit.vize,kayit.final,kayit.ortalama);
                    }
                }
                fprintf(dosyaYaz,"n|-------------------------------|n");
            }
        }
        fclose(dosyaOku);
        fclose(dosyaYaz);
    }
	
						
