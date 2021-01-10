//Deitel'in C ve C++ Programlama kitabý-Sayfa 248. Örnek 6.21.

#include<stdio.h>
//iki ayrý bölümden rezervasyon yapýlabilecek program
int main(){
	
	int secim, koltuk,yenisecim;
	int dizi1[5]={0}; //1-5 arasý koltuklar yani sigara içilen bölüm için tanýmlanan dizi
	int dizi2[5]={0}; //6-10 arasý koltuklar yani sigara içilmeyen bölüm için tanýmlanan dizi
	printf("Sigara icilen bolum icin 1'e basin.\nSigara icilmeyen bolum icin 2'ye basin.\n"); 
	scanf("%d", &secim);
	  
	
	    if (secim==1){
		/*
		}for(int i=0;i<=4;i++)
        printf("\n %d.koltuk durumu= %d\n ",i,dizi1[i]); */
        
		printf("\nSececeginiz koltuk numarasini girin(1-5 arasi secim yapabilirsiniz):");
		scanf("%d", &koltuk);
		dizi1[koltuk-1]=1;	//indis ve dizi eleman sayýsý farkýndan kaynaklý düzenleme, 5. eleman = 4. indis
		for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+1,dizi1[i]);}
		 }
		 
		else if (secim==2){
			/*for(int i=5;i<=9;i++)
        printf("\n %d.koltuk durumu= %d\n ",i,dizi1[i]);*/
        
		printf("\nSececeginiz koltuk numarasini girin(6-10 arasi secim yapabilirsiniz):");
		scanf("%d", &koltuk);
		dizi2[koltuk-6]=1;	//indis ve dizi eleman sayýsý farkýndan kaynaklý düzenleme, 10. eleman = 4. indis
		
		for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+6,dizi2[i]);}
		 }
		 
		printf("\nyeniden secim yapmak istiyorsaniz sigara icilen bolum icin 1, icilmeyen bolum icin 2'yi tuslayiniz.");
		scanf("%d", &secim);
	  
	    if (secim==1){
		/*
		}for(int i=0;i<=4;i++)
        printf("\n %d.koltuk durumu= %d\n ",i,dizi1[i]); */
        
		printf("\nSececeginiz koltuk numarasini girin(1-5 arasi secim yapabilirsiniz):");
		scanf("%d", &koltuk);
		
		if (dizi1[koltuk-1]==1){
			printf("Rezerve edilmis koltugu satin alamazsiniz. Diger alandan rezervasyon icin 1, cikis icin 2 tuslayiniz\n");
		    scanf("%d", &yenisecim);
		    if (yenisecim==1){
		    	printf("sigara icilmeyen alandan tercih yapabilirsiniz.\n");}
			
		    else if (yenisecim==2){
		    	printf("sonraki ucus 3 saat sonra!\n");
			}}
			
		for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+1,dizi1[i]);}
}
	
	
	if (secim==2){
		/*
		}for(int i=0;i<=4;i++)
        printf("\n %d.koltuk durumu= %d\n ",i,dizi1[i]); */
        
		printf("\nSececeginiz koltuk numarasini girin(6-10 arasi secim yapabilirsiniz):");
		scanf("%d", &koltuk);
		
		if (dizi2[koltuk-6]==1){
			printf("Rezerve edilmis koltugu satin alamazsiniz. Diger alandan rezervasyon icin 1, cikis icin 2 tuslayiniz\n");
		    scanf("%d", &yenisecim);
		    if (yenisecim==1){
		    	printf("sigara icilen alandan tercih yapabilirsiniz.\n");}
			
		    else if (yenisecim==2){
		    	printf("sonraki ucus 3 saat sonra!\n");
			}}
			
		dizi2[koltuk-6]=1;	
		for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+6,dizi2[i]);}

	} 
	
	printf("\nKoltuk secimleriniz:\n"); //rezerve edilen tüm koltuklarý gösteren kýsým
	for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+1,dizi1[i]);}
	
	for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+6,dizi2[i]);}

    }
    /*buraya kadar olan kýsým yeniden rezervasyonu yalnýz bir kez sorar. Dolayýsýyla ikiden fazla rezervasyon 
    yapýlamaz. Örnek bu baðlamda geliþtirilebilir. Belki tüm koltuklar dolana kadar rezervasyon yapýlabilecek þekilde*/
		


