#include <stdio.h>
#include <stdlib.h>
// Count the number of digits in a given number.
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

int main()
{
    int sayi1;
    printf("Lutfen bir sayi girin: ");
    scanf("%d",&sayi1);
    printf("Girdiginiz sayi %d basamaklidir.",basamak(sayi1));
    return 0;
}