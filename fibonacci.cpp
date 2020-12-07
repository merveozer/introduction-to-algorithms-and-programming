#include<stdio.h>
int main(){
	int a[20];
	a[0]=1;
	a[1]=1;
	for (int i=2; i<20; i++){

	    a[i]=a[i-1]+a[i-2];
	    
	    printf("%d\n", a[i]);
	}
	
	
	
	return 0;
}
