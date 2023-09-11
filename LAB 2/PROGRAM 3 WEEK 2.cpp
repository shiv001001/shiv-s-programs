#include <stdio.h>
int main()
{
	
	int u;
	printf("enter the number of units used ");
	scanf("%d", &u);
	if(u <= 100)
		printf("TOTAL AMOUNT TO BE PAID IS %d", u*2);
	else if(u>=101 && u <= 250)
		printf("TOTAL AMOUNT TO BE PAID IS %d", u*3);
	else
		printf("TOTAL AMOUNT TO BE PAID IS %d", u*5);	
	
}


