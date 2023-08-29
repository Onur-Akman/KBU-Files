#include <stdio.h>
#include <stdlib.h>
//Find LCM of two numbers.

int fonk1(int x, int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return fonk1(y,x%y);
    }
}

int main()
{
    int sayi1,sayi2,ekok;
    printf("Lutfen iki sayi girin:\n");
    scanf("%d %d",&sayi1, &sayi2);
    ekok= (sayi1*sayi2)/ fonk1(sayi1,sayi2);
    printf("Girdiginiz iki sayinin ekoku %d dir.",ekok);
    return 0;
}