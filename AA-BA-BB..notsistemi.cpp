#include <stdio.h>
int main () {
	int vize1, vize2, final;
	float ortalama;
	float genelort;
	printf("Sinav notlarinizi ve genel ortalamanizi giriniz");
	scanf("%d %d %d", &vize1, &vize2, &final);
	scanf("%f", &genelort);
	  ortalama =  (vize1 + vize2 + final)/3;
	
	if (ortalama>90) {
		printf("Dersi tam anlamiyla anlamissiniz tebrik ederiz. Harf notunuz AA");
		}
		else if(ortalama>80) {
	    printf("Dersi anlamissiniz ancak biraz daha calismaniz gerekir. Harf notunuz BA");
	    }
		else if(ortalama>70) {
	    printf("Dersi gecmis olmaniz anladiginizi göstermez, daha fazla calisin. Harf notunuz BB");
	    }
		else if(ortalama>60) {
	    printf("Dersi gectiniz ancak yeterli degil. Harf notunuz CB");
	    }
		else if(ortalama>50) {
	    printf("Sartli gectiniz. Harf notunuz CC");
		}
        else if (ortalama<50) {
    	    if (genelort<2.5)
		        {
			printf("kaldiniz");	
		        } 
		 else printf("Bute kaldiniz");
	}
		
			return 0;
	}
		


