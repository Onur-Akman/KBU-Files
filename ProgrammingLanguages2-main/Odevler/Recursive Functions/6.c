#include <stdio.h>
#include <stdlib.h>
// Determine whether given number is a prime number or not.
int fonk1(int x, int y)
{
    if(y==1)
    {
        return 1;
    }
    else
    {
        if(x%y==0)
        {
            return 0;
        }
        else
        {
            return fonk1(x,y-1);
        }
    }
}
void kontrol(int x)
{
    if(fonk1(x,x-1))
    {
        printf("Girdiginiz sayi bir asal sayidir.");
    }
    else
    {
        printf("Girdiginiz sayi bir asal sayi degildir.");
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