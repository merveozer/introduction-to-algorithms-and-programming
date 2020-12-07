#include<stdio.h>
int main(){

int islem;
int bakiye=1000;
int tutar;
printf("Islemi seciniz\n1: para cekme\n2: para yatirma\n3: havale yapma\n4: bakiye sorgulama\n5: iptal\n");
scanf("%d", &islem);

switch (islem) {
	case 1: {
		printf("Bakiyeniz: %d\n", bakiye);
		printf("Cekilecek tutar:");
		scanf("%d",&tutar);
	    if (tutar>bakiye) {
		printf("Bakiye yetersiz");
		}
		bakiye-=tutar;
		printf("Kalan bakiyeniz: %d", bakiye);
		break;
	}
	case 2: {
	    printf("Bakiyeniz: %d\n", bakiye);
		printf("Yatirilacak tutar:");
		scanf("%d",&tutar);
	    bakiye+=tutar;
	    printf("Bakiyeniz:%d", bakiye);
		break;
	}
	case 3: {
		printf("Bakiyeniz:%d\n", bakiye);
		printf("Havale yapilacak tutari giriniz:");
		scanf("%d", &tutar);
		if (tutar>bakiye) {
		printf("Bakiye yetersiz");
		}
		bakiye-=tutar;
		printf("Kalan bakiyeniz: %d", bakiye);
		break;	
	}
	case 4: {
		printf("Bakiyeniz:%d", bakiye);
		break;
	}
	case 5: {
		printf("kart iade ediliyor");
		break;
	}
}
return (15);
}
