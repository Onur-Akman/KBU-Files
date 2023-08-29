#include <stdio.h>
#include <stdlib.h>
//Find HCF of two numbers.

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
    int sayi1,sayi2;
    printf("Lutfen iki sayi girin:\n");
    scanf("%d %d",&sayi1, &sayi2);
    printf("Girdiginiz iki sayinin ebobu %d dir.",fonk1(sayi1,sayi2));
    return 0;
}