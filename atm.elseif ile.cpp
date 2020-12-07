#include<stdio.h>
int main(){
	int i;
	int bakiye=1500;
	printf("isleminizi seciniz:\n");
	printf("1:para cekme, 2:yatirma, 3:havale, 4:bakiye\n");
	scanf("%d", &i);
	
	if(i==1) {
		int tutar;
		printf("cekeceginiz tutar nedir:");
		scanf("%d", &tutar);
		printf("%d", bakiye-tutar);
		if (tutar>bakiye){
			printf("bakiye yetersiz");
		}
		
	}
	else if(i==2) {
		int tutar;
		printf("yatiracaginiz tutar nedir:");
		scanf("%d", &tutar);
		printf("%d", bakiye+tutar);
		
	}
    else if(i==3) {
		int tutar;
		printf("göndereceginiz tutar nedir:");
		scanf("%d", &tutar);
		printf("%d", bakiye-tutar);
		if (tutar>bakiye){
			printf("bakiye yetersiz");
		}
	
	}
    else if(i==4)  {
	
		printf("bakiyeniz: %d", bakiye);
	
	}
	else {
		printf("gecersiz islem");
		
	}

	return 0;
}
