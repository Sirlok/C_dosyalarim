#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>

int main(){
	int i=0,k,h=1,sayac=0,hak=10,uyumsuz=0;
	char R,G,B,Y,P,O;
	char renk[4];
	char yeni[6]={'R','G','B','Y','P','O'};
	int a=1;
	char sayi[5];
	printf("Lutfen secmek istediginiz rengleri giriniz.\nToplam 4 renk girilecektir\n");
	printf("Toplam 10 hakkiniz vardir\n");
	printf("Red=R  Green=G  Blue=B  Yellow=Y  Purple=P Orange=O\n");
	printf("Ornegin:RRGB\n");
	srand(time(NULL));
    
	for(a=1;a<5;a++){
        sayi[a]=rand()%6;
        if(sayi[a]==0) 
			sayi[a]='R';
			//sayi[a]=yeni[0];
		else if(sayi[a]==1)
			sayi[a]='G';
			//sayi[a]=yeni[1];
		else if(sayi[a]==2)
			sayi[a]='B';
			//sayi[a]=yeni[2];
		else if(sayi[a]==3)
			sayi[a]='Y';
			//sayi[a]=yeni[3];
		else if(sayi[a]==4)
			sayi[a]='P';
			//sayi[a]=yeni[4];
		else if(sayi[a]==5)
			sayi[a]='O';
			//sayi[a]=yeni[5];
	}
		int yyeni=0;	
	while(h<hak && sayac!=4){
		printf("%d.Tahmin:",h);
		scanf("%s",renk);
		if(strlen(renk)!=4)
			printf("Lutfen 4 harf giriniz.(Girdiginiz harf sayisi=%d)\n",strlen(renk));	
		else{
				for(i=0;i<4;i++){
					if(renk[i]=='R' || renk[i]=='G' || renk[i]=='B' || renk[i]=='Y' || renk[i]=='P' || renk[i]=='O'){
						uyumsuz++;
					}
					else
						yyeni++;
				}	
				if(uyumsuz==4){
					i=0;
					sayac=0;
					for(i=0,k=1;i<4,k<5;i++,k++){
						if(renk[i]==sayi[k])
     						sayac++;	
					}
					printf("%d rengin yeri dogru\n\n",sayac);		
				}
				else
					printf("Lutfen mevcut harfleri kullaniniz.\n");
		}
		uyumsuz=0;
		h++;
	}
	if(sayac==4){
		printf("Cevap=%c %c %c %c\n",sayi[1],sayi[2],sayi[3],sayi[4]);	
		printf("%d. denemenizde kazandiniz\nCikmak icin bir tusa tiklayin",h-1);
	}
	else{
		printf("Cevap=%c %c %c %c\n",sayi[1],sayi[2],sayi[3],sayi[4]);	
		printf("Tekrar dene");
	}
	getchar();
	getchar();		
	return 0;
}
