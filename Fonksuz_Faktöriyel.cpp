#include<stdio.h>
#include <conio.h>

int main()
{
	int sayi;
	int i;
	int sonuc;
	i=1;
	sonuc=1;
	printf("Faktorileyini almak istediginiz sayiyi:");
	scanf("%d",&sayi);
	printf("Faktoriyel hesaplaniyor\n");
	
	while(i<=sayi){
		sonuc=sonuc*i;
		i++;
	}
	printf("Cevabiniz:%d",sonuc);
	getch();
	return 0;
}
