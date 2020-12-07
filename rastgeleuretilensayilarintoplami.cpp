#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int sayi=0;
	int toplam=0;
	int sayac=0;
	srand(time(NULL));
	for(int i=0;i<15;i++){
		sayi=50+rand()%150;
		
	  for(int a=2;a<sayi;a++)
	     if(sayi%a==0);
	     sayac++;
	     if(sayac!=0)
	     { 
	     printf(" %d", sayi);
         toplam+=sayi;}
		 
		 sayac=0;
}
	  printf("\ntoplam deger: %d", toplam);
	

	return 0;
}
