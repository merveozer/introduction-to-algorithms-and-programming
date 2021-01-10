//Deitel-C ve C++ programlama. Sayfa 193. Örnek 5.26. Mükemmel Sayý.

#include<stdio.h>
int sayi, toplam=0;
int mukemmel();
int main(){

mukemmel();

}
mukemmel(){
	for (sayi=1; sayi<=1000;sayi++){ //1-1000 arasý sayýlarý kontrol edecek döngü.
	
	   for (int i=1; i<=sayi-1; i++ ){ //1'den sayýya gelene kadarki tüm sayýlarý kontrol edecek döngü.
	   
		if(sayi%i==0){ 
			printf("carpanlar: %d\n", i); //Sayýnýn çarpanlarýný kontrol.
			toplam += i; //Bulunan çarpaný toplama ekleme.
			}
	}
		if(toplam==sayi){ //Eðer toplam ve sayýmýz eþitse sayýmýz mükemmeldi. Bu koþulu kontrol.
			printf("sayiniz: %d, carpanlari toplami %d dir ve mukemmeldir.\n", sayi,toplam);
		}
		else{
			printf("sayiniz: %d, carpanlari toplami %d dir ve mukemmel degildir.\n", sayi, toplam);	
		} 
	toplam = 0; //Yeni sayýya geçerken toplamý sýfýrlýyoruz.
	}
	
}

