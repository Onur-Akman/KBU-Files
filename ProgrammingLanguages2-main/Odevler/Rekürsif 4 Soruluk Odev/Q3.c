#include <stdio.h>
//3. Klavyeden girilen iki sayının çarpımlarını (*) operandı kullanmadan, rekürsif fonksiyon kullanarak bulduran C kodunu yazınız.
int fonk1(int x, int y)
{
    if(y==0)
    {
        return 0;
    }
    return x + fonk1(x, y-1);
}

int main()
{
    int sayi1,sayi2;
    printf("Lutfen iki sayi girin.\n");
    scanf("%d %d",&sayi1, &sayi2);
    printf("%d sayisinin %d sayisi ile carpiminin sonucu %d dir.",sayi1,sayi2,fonk1(sayi1,sayi2));
}