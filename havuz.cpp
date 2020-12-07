#include<stdio.h>
int main (){
	float a;
	float b;
	float c;
	float islem;
    printf("musluklarinizin doldurma saatlerini giriniz:");
	scanf("%f%f%f", &a,&b,&c);
	islem= 24/(a+b+c);
	printf("a, b ve c musluklari havuzu %f saatte doldurur", islem);
	
	return 0;
}
