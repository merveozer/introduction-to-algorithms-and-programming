//Deitel- C ve C++ Programlama. Sayfa 190. �rnek 5.9.

#include <stdio.h>

float ucret1, ucret2, ucret3; //�cretlerimiz bu�uklu da olabilece�i i�in float �eklinde tan�mlad�k.
int park_saati1,park_saati2,park_saati3; 

int main(){
	int ucretHesapla(); //Fonksiyonumuzu en yukar�da tan�tarak ba�l�yoruz. 
	
	printf("1. aracin park saatini girin:");
		scanf("%d", &park_saati1);
		printf("2. aracin park saatini girin:");
		scanf("%d", &park_saati2);
		printf("3. aracin park saatini girin:");
		scanf("%d", &park_saati3);
	
	ucretHesapla(); //fonksiyon �a�r�s�nda bulunuyoruz.
	
	printf("Araba\t\t\tSaat\t\t\tUcret\n"); //Fonksiyon ��kt�lar�n� burada kullan�yoruz.
	printf("1\t\t\t%d\t\t\t%.2fTL\n", park_saati1, ucret1);
	printf("2\t\t\t%d\t\t\t%.2fTL\n", park_saati2, ucret2);
	printf("3\t\t\t%d\t\t\t%.2fTL\n", park_saati3, ucret3);
	printf("TOPLAM\t\t\t%d\t\t\t%.2fTL",(park_saati1 +park_saati2 +park_saati3), (ucret1+ucret2+ucret3));
}
	ucretHesapla(){ //Fonksiyonumuzun nas�l �al��aca��n� a��kl�yoruz.
		 
		if (park_saati1<=3){
			ucret1 = 2;
		}else if (park_saati1<24){
			ucret1 = 2 + ((park_saati1-3) * 0.5);
		}
		else if (park_saati1 == 24){
		
		ucret1 = 10;}
		
	if (park_saati2<=3){
			ucret2 = 2;
		}else if (park_saati2<24){
			ucret2 = 2 + ((park_saati2-3) * 0.5);
		}
		else if (park_saati2 == 24){
		
		ucret2 = 10;}
		
	if (park_saati3<=3){
			ucret3 = 2;
		}else if (park_saati3<24){
			ucret3 = 2 + ((park_saati3-3) * 0.5);
		}
		else if (park_saati3 == 24){
		
		ucret3 = 10;}
	}
	
