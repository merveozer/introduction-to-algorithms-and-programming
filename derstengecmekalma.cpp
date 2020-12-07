#include<stdio.h>
int main () {
	int vize1,vize2,final;
	float ort;
	float genelort;
	printf("Notlarinizi giriniz.");
	scanf("%d %d %d", &vize1, &vize2, &final);
	printf("genel ortalaminizi giriniz:");
	scanf("%f", &genelort);
	ort= (vize1+vize2+final)/3;
	if (ort>60)
	 {
		printf("Tebrikler gectiniz");
	}
	else if (ort>50) {
		printf("Bute kaldiniz\n");
		if (genelort<2.50) {
			printf("Genel ortalamaniz cok dusuk ders seneye de secilecek");
		}
	}
	else if (ort>40 ){
		printf("Sartli gectiniz");
	}
	else {
		printf("kaldiniz");
	}
	return 0;
}
