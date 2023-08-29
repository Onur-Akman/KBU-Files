#include <stdio.h>
#include <stdlib.h>

long faktoriyel(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return (x*faktoriyel(x-1));
    }
}

int fonk1(int x)
{
    int kalan;
    kalan= x % 10;
    if(x==0)
    {
        return 0;
    }
    return faktoriyel(kalan) + fonk1(x/10);
}
void kontrol(int x)
{
    int y = fonk1(x);
    if(x==y)
    {
        printf("%d bir Strong sayidir.",x);
    }
    else
    {
        printf("%d bir Strong sayi degildir.",x);
    }
}
int main()
{
    int sayi1;
    printf("Lutfen bir sayi girin: ");
    scanf("%d",&sayi1);
    kontrol(sayi1);
    return 0;

}