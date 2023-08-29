#include <stdio.h>
//4. Bir sayının istenen kuvvetini rekürsif fonksiyon ile bulan C programını yazınız.
int fonk1(int x, int y)
{
    if(y==0)
    {
        return 1;
    }
    return x * fonk1(x, y-1);
}

int main()
{
    int sayi1,sayi2;
    printf("Lutfen iki sayi girin.\n");
    scanf("%d %d",&sayi1, &sayi2);
    printf("%d sayisinin %d.kuvveti  %d dir.",sayi1,sayi2,fonk1(sayi1,sayi2));
}