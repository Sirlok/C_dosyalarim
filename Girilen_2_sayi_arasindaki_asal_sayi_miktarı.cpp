#include<stdio.h>

int main(){
	int alt=0,ust=0,yenisayac=0;
	int i=0,olmayanSayac=0,sayac=0;
	
	printf("Baslangic sayisini giriniz:");	scanf("%d",&alt);
	printf("Sonuncu sayiyi giriniz:");		scanf("%d",&ust);
	
		while(alt!=ust){
			for(i=2;i<ust+1;i++){
				if(alt%i==0){
					olmayanSayac++;
				}
				else{
					sayac++;
				}
			}
			if(olmayanSayac==1){
						yenisayac++;
					}
			alt++;
			olmayanSayac=0;
		}
	printf("%d",yenisayac);
	return 0;
}
