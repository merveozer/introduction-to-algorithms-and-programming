#include<stdio.h>
#include<string.h>
int main(){
	char cumle[100];
	printf("bir cumle giriniz: ");
	gets(cumle);
	int enuzun=0, uzun=0;
     
     
	for (int i=0; i<=strlen(cumle); i++){
     	if (uzun>enuzun){
		 enuzun=uzun;
	     }
	     uzun++;
	     if (cumle [i]==' '){
	     	uzun=0;
		 }
}
	printf("%d", enuzun);


	return 0;
}
