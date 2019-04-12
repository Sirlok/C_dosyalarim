#include<stdio.h>

int fakt(int sayi){
	if(sayi<=1){
	return 1;
	}
	else{
		return(sayi*fakt(sayi-1));
	}
}
int main(){
	int sayi=0;
	printf("Faktoriyelini almak istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	printf("%d sayisinin faktoriyeli=%d",sayi,fakt(sayi));
}
