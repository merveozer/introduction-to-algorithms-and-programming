//Deitel-C ve C++ programlama. Sayfa 193. �rnek 5.26. M�kemmel Say�.

#include<stdio.h>
int sayi, toplam=0;
int mukemmel();
int main(){

mukemmel();

}
mukemmel(){
	for (sayi=1; sayi<=1000;sayi++){ //1-1000 aras� say�lar� kontrol edecek d�ng�.
	
	   for (int i=1; i<=sayi-1; i++ ){ //1'den say�ya gelene kadarki t�m say�lar� kontrol edecek d�ng�.
	   
		if(sayi%i==0){ 
			printf("carpanlar: %d\n", i); //Say�n�n �arpanlar�n� kontrol.
			toplam += i; //Bulunan �arpan� toplama ekleme.
			}
	}
		if(toplam==sayi){ //E�er toplam ve say�m�z e�itse say�m�z m�kemmeldi. Bu ko�ulu kontrol.
			printf("sayiniz: %d, carpanlari toplami %d dir ve mukemmeldir.\n", sayi,toplam);
		}
		else{
			printf("sayiniz: %d, carpanlari toplami %d dir ve mukemmel degildir.\n", sayi, toplam);	
		} 
	toplam = 0; //Yeni say�ya ge�erken toplam� s�f�rl�yoruz.
	}
	
}

