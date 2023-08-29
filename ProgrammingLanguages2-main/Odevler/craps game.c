#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    int zar1,zar2,t,a;
    srand(time (NULL));
    zar1 = 1 + rand() % 6;
    zar2 = 1 + rand() % 6;
    t= zar1+zar2;
    printf("İlk zar=%d İkinci zar= %d Zarlar Toplami= %d\n",zar1,zar2,t);
    if(t == 7 || t == 11)
    {
        printf("Oyunu Kazandiniz!!!\n");

    }
    else if(t == 2 || t == 3 || t == 12)
    {
        printf("Oyunu Kaybettiniz :(\n");
    }
    else
    {
        a = t;
        printf("-------KURAL DEĞİŞİKLİĞİ ARTIK ILK ATTIĞINDAKİ TOPLAM ZARINI TUTTURMAYA ÇALIŞACAKSIN-------\n");
        do
        {
        zar1 = 1 + rand() % 6;
        zar2 = 1 + rand() % 6;
        t = zar1+zar2;
        printf("İlk zar=%d  İkinci Zar= %d  Zarlar Toplami= %d Kazanma Zari= %d\n",zar1,zar2,t,a);
        if(t==7)
        {
            printf("Oyunu kaybettiniz :( \n");
            exit(0);
        }
        }
        while(t!=a);
        printf("Oyunu kazandiniz !!!!\n");
    }
}