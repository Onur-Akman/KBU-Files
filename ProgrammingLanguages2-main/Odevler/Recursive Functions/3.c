#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Check whether a number is Armstrong number or not.
int basamak(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return 1+ basamak(x/10);
    }
}

int fonk1(int x, int y)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        int kalan= x%10;
        return pow(kalan,y) + fonk1(x/10,y);
    }
}

void kontrol(x)
{
    if(x==fonk1(x,basamak(x)))
    {
        printf("Girdiginiz sayi bir Armstrong sayisidir.");
    }
    else
    {
        printf("Girdiginiz sayi bir Armstrong sayisi degildir.");
    }
}

int main()
{
    int sayi1,tempbasamak;
    printf("Lutfen bir sayi girin: ");
    scanf("%d",&sayi1);
    kontrol(sayi1);
}