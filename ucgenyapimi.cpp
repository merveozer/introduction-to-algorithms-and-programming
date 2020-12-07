#include<stdio.h>
int main() {
	int adet=1;
	for (int i=0; i<7; i++)
	{
		for (int j=0; j<adet; j++)
		{
			printf("*");
		}
		printf("\n");
		adet++;
	}
	
	
	return 0;
}
