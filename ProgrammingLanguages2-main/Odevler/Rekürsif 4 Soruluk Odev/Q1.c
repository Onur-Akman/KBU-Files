#include <stdio.h>

void fonk1(int satir)
{
    
    for(int i=1;i<=satir;i++)
    {
        for(int j=0;j<2*i-1;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    fonk1(satir+2);
}
int main()
{
    int satir=3;
    fonk1(satir);
    return 0;
}