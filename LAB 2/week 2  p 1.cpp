#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
		printf("THE GREATEST NUMBER IS %d" , a);
	else
		if(b>c)
			printf(" THE GREATEST NUMBER IS %d" , b);
		else
			printf("THE GREATEST NUMBER IS %d", c);
	
	
}


