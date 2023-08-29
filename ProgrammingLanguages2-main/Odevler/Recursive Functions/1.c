 #include <stdio.h>
 #include <stdlib.h>

 void fonk1(int x,int i, int toplam)
 {
    if(x==i)
    {
        if(x==toplam)
        {
            printf("%d mukkemmel sayidir.",x);

        }
        else
        {
            printf("%d mukemmel sayi degildir.",x);
        }
    }
    else
    {
        if(x%i==0)
        {
        toplam+=i;
        }
        fonk1(x,i+1,toplam);       
    }
    
 }

 int main()
 {
    int sayi1,toplam=0,i=1;
    printf("Lutfen bir sayi girin: ");
    scanf("%d", &sayi1);
    fonk1(sayi1, i, toplam);
    return 0;
 }

 