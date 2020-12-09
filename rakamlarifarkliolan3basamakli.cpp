#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand (time(NULL));
	int yuzler[100];
	int onlar[100];
	int birler[100];
	int sayi[100];
	int i,j,sayac=0;
	
for (i=0;i<100;i++){
		 yuzler[i]=1+rand()%9;
	     onlar[i]=0+rand()%10;
	     birler[i]=0+rand()%10;

for (j=0;j<100;j++){
	     sayi[100]=yuzler[i]*100+onlar[i]*10+birler[i];}
         printf("%d\n",sayi[100]);
		 if (yuzler[i]!=onlar[i] && yuzler[i]!=birler[i] && onlar[i]!=birler[i]){
              sayac++;}

         printf("rakamlari farkli olan %d adet sayi vardir\n", sayac);
		
}
return 0;
}
