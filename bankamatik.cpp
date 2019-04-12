#include<stdio.h>
#include <conio.h>
int main()
{
	int YatirilacakPara;
	int HavaleMiktari;
	int CekilenMiktar;
	int YatirilanMiktar;
	int islem;
	int Bakiye=1000;
	int Havale;
	int Fatura;
	int e=100;
	int d=400;
	int s=80;
	int i=72;
	int mtv=1500;
	
	printf("Islemler\n\t1:Para Cekme\n\t2:Para Yatirma\n\t3:Havale\n\t4:Fatura Odeme\n\t5:Kart Bilgisi\n\n\n\n");
	printf("Bakiye=1000\n");
	printf("Isleminizi Giriniz:");
	scanf("%d",&islem);
	
	
	while(islem!=-1){
		switch(islem){
	
			case 1: printf("Bakiyeniz:%d\n",Bakiye);
					printf("Cekmek Istediginiz Miktari Giriniz:");
					scanf("%d",&CekilenMiktar);
					if(CekilenMiktar>Bakiye){
						printf("Bakiye Yetersiz\n");
					}
					else{
						Bakiye-=CekilenMiktar;
						printf("Yeni Bakiyeniz:%d",Bakiye);
					}
			break;
		
			case 2: printf("Bakiyeniz:%d\n",Bakiye);
					printf("Yatirmak Istediginiz Miktari Giriniz:");
					scanf("%d",&YatirilanMiktar);
					Bakiye+=YatirilanMiktar;
					printf("Yeni Bakiyeniz:%d",Bakiye);
			break;
			
			case 3: printf("Bakiyeniz:%d\n",Bakiye);
					printf("Havale Yapmak Istediginiz Miktari Giriniz:");
					scanf("%d",&HavaleMiktari);
					if(HavaleMiktari>Bakiye){
						printf("Bakiye Yetersiz\n");
					}
					else{
						Bakiye-=HavaleMiktari;
						printf("Yeni Bakiyeniz:%d",Bakiye);
				}
			break;
			
			case 4: //printf("Bakiyeniz:%d\n",Bakiye);
					printf("Faturalar\n\t7:Elektrik:100tl\n\t8:Dogalgaz:400:tl\n\t9:Su:80tl\n\t10:Internet:72tl\n\t11:Motorlu Tasitlar Vergisi:1500tl\n");
					printf("Odemek Istediginiz Faturayi Giriniz:");
					scanf("%d",&Fatura);
					if(Fatura> 12 || Fatura < 7){
						while(Fatura>12 || Fatura<7 ){
							printf("Gecerli bir fatura giriniz.");
							scanf("%d",&Fatura);
						}	
					}				
					switch(Fatura){
						case 7 :printf("Bakiyeniz:%d\n",Bakiye);
								printf("Elektrik Faturaniz:%d\n",e);

								if(e>Bakiye){
									printf("Bakiye Yetersiz\n");
								}
								else{
									Bakiye-=e;
									printf("Yeni Bakiyeniz:%d\n",Bakiye);
								}
						break;
						
						case 8 :printf("Bakiyeniz:%d\n",Bakiye);
								printf("Doðalgaz Faturaniz:%d\n",d);
								if(d>Bakiye){
									printf("Bakiye Yetersiz\n");
								}
								else{
									Bakiye-=d;
									printf("Yeni Bakiyeniz:%d\n",Bakiye);
								}
						break;
				 
						case 9 :printf("Bakiyeniz:%d\n",Bakiye);
								printf("Su Faturaniz:%d\n",s);				
								if(s>Bakiye){
									printf("Bakiye Yetersiz\n");
								}
								else{
									Bakiye-=s;
									printf("Yeni Bakiyeniz:%d",Bakiye);
								}
						break;
						
						case 10 :printf("Bakiyeniz:%d\n",Bakiye);
							     printf("Internet Faturaniz:%d\n",i);
								 if(i>Bakiye){
									printf("Bakiye Yetersiz\n");
								}
								else{
									Bakiye-=i;
									printf("Yeni Bakiyeniz:%d\n",Bakiye);
								}
						break;
						
						case 11 :printf("Bakiyeniz:%d\n",Bakiye);
							     printf("Motorlu Tasitlar Verginiz:%d\n",mtv);
			 					 if(mtv>Bakiye){
									printf("Bakiye Yetersiz\n");
								}
								else{
									Bakiye-=mtv;
									printf("Yeni Bakiyeniz:%d\n",Bakiye);
								}
						break;
					}
						case 5: printf("Bakiyeniz:%d\n",Bakiye);
						break;
						default : printf("bilinmeyen islem\n");
						break;
		}		
		printf("\nIsleminizi Giriniz:");
		scanf("%d",&islem);		
	}
	return 0;
}
