#include<stdio.h>
#include <math.h>
#include <conio.h>
int main()
 {
int a;
int b;
int c;
int sonuc=1;
int i;
	printf("1.sayiyi giriniz:");
	scanf("%d",&a);
	
	printf("2.sayiyi giriniz:");
	scanf("%d",&b);
	
	printf("yapmak istediginiz islemin numarasini giriniz\n\tToplamak icin '1'\n\tCikarmak icin '2'\n\tCarpmak icin '3'\n\tBolmek icin '4'\n\tus almak icin '5'\n");
	printf("secilen islem:");
	scanf("%d",&c);
	printf("cevabiniz:");
	
	if(c==1)
{
	printf("%d\n",a+b);
		
}
	else if (c==2)
	{
		printf("%d\n",a-b);
	}
	

	else if(c==3)
	{
			printf("%d\n",a*b);
	}
	else if(c==4)
	{
			printf("%d\n",a/b);
	}

		else if(c==5)
	
		for(i=0; i<b; i++)
			{
			
		 sonuc = sonuc * a;
		 }
		 {
		 printf("%d\n",sonuc);
	}
	
	getch();
	return 0;
}

