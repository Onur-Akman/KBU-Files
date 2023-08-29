#include <stdio.h>
#include <stdlib.h>
// Find first and last digit of a number.
int fonk1(int x)
{
    if(x<10)
    {
        return x;
    }
    else
    {
        return fonk1(x/10);
    }
}
int fonk2(int x)
{
    return x%10;
}
int main()
{
    int sayi1;
    printf("Lutfen bir sayi girin: ");
    scanf("%d",&sayi1);
    printf("Girdiginiz sayinin ilk basamagi %d son basamagi ise %d dir.",fonk1(sayi1),fonk2(sayi1));
    return 0;
}