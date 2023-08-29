#include <stdio.h>
//2. Klavyeden girilen iki tamsayının bölme operandı (/) kullanmadan, birbirlerine bölümü ile elde edilecek olan sonucu (bölüm), rekürsif fonksiyon kullanarak bulduran C kodunu yazınız. 
int fonk1(int x, int y)
{
    if(x<y)
    {
        return 0;
    }

    return fonk1(x-y, y)+1;
}

int main()
{
    int sayi1,sayi2;
    printf("Lutfen iki sayi girin.\n");
    scanf("%d %d",&sayi1, &sayi2);
    printf("%d sayisinin %d sayisina bolme isleminde bolumu %d dir.",sayi1,sayi2,fonk1(sayi1,sayi2));
}