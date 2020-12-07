#include<stdio.h>
int main(){
	int yas;
	int bugununyili;
    int islem;
   
    printf("icinde bulundugumuz yili giriniz:");
    scanf("%d", &bugununyili);
    printf("yasinizi giriniz:");
    scanf("%d", &yas);
    islem=bugununyili-yas;
    printf("dogum yiliniz: %d", islem);
    
	return 0;
}
