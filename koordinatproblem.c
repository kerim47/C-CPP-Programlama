#include <stdio.h>
#include <stdlib.h>

struct koordinat{
        float x,y;
    };

/*Bir topun x-y koordinat düzlemindeki hareketi için aşağıdaki yapı ve formüller
    kullanılmaktadır.Topun t=0 anından t=10 anına kadar 0.1 sn lik zaman dilimlerinde
    x ve y koordinat değerlerinin bulunmasını ve ekrana gösterilmesini sağlayan C programını
    yazınız.


    Formüller

    x=20-6cos(t);
    y=15+2sin(t);

    */
int main()
{
    struct koordinat top;
    float t;

    printf("    X\t\t   Y\n");
    printf("========\t========\n");

      for(t=0.0;t<10.0;t+=0.1)
        {
            top.x=20-6*cos(t);
            top.y=15+2*sin(t);
            printf("%f\t %f\n",top.x,top.y);
        }






    return 0;
}
