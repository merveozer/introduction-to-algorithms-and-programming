//Deitel'in C ve C++ Programlama kitab�-Sayfa 248. �rnek 6.21.

#include<stdio.h>
//iki ayr� b�l�mden rezervasyon yap�labilecek program
int main(){
	
	int secim, koltuk,yenisecim;
	int dizi1[5]={0}; //1-5 aras� koltuklar yani sigara i�ilen b�l�m i�in tan�mlanan dizi
	int dizi2[5]={0}; //6-10 aras� koltuklar yani sigara i�ilmeyen b�l�m i�in tan�mlanan dizi
	printf("Sigara icilen bolum icin 1'e basin.\nSigara icilmeyen bolum icin 2'ye basin.\n"); 
	scanf("%d", &secim);
	  
	
	    if (secim==1){
		/*
		}for(int i=0;i<=4;i++)
        printf("\n %d.koltuk durumu= %d\n ",i,dizi1[i]); */
        
		printf("\nSececeginiz koltuk numarasini girin(1-5 arasi secim yapabilirsiniz):");
		scanf("%d", &koltuk);
		dizi1[koltuk-1]=1;	//indis ve dizi eleman say�s� fark�ndan kaynakl� d�zenleme, 5. eleman = 4. indis
		for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+1,dizi1[i]);}
		 }
		 
		else if (secim==2){
			/*for(int i=5;i<=9;i++)
        printf("\n %d.koltuk durumu= %d\n ",i,dizi1[i]);*/
        
		printf("\nSececeginiz koltuk numarasini girin(6-10 arasi secim yapabilirsiniz):");
		scanf("%d", &koltuk);
		dizi2[koltuk-6]=1;	//indis ve dizi eleman say�s� fark�ndan kaynakl� d�zenleme, 10. eleman = 4. indis
		
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
	
	printf("\nKoltuk secimleriniz:\n"); //rezerve edilen t�m koltuklar� g�steren k�s�m
	for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+1,dizi1[i]);}
	
	for (int i=0;i<=4;i++){
		printf("\n %d.koltuk durumu= %d\n ",i+6,dizi2[i]);}

    }
    /*buraya kadar olan k�s�m yeniden rezervasyonu yaln�z bir kez sorar. Dolay�s�yla ikiden fazla rezervasyon 
    yap�lamaz. �rnek bu ba�lamda geli�tirilebilir. Belki t�m koltuklar dolana kadar rezervasyon yap�labilecek �ekilde*/
		


