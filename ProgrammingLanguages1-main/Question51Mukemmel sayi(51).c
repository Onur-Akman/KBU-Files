#include <stdio.h>
int main(){
	int sayi;
	printf("Sayi? \n");
	scanf("%d",&sayi);
	int toplam = 0;
	for(int j=1; j<sayi; j++)
	{
		if(sayi%j==0){
			toplam = toplam + j;
		}
	}
	if(toplam == sayi)
	{
		printf("%d bir mukemmel sayidir\n",sayi );
	}
	else
	{
		printf("%d bir mukemmel sayi degildir\n",sayi );
	}
}