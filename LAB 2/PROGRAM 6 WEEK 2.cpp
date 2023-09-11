#include <stdio.h>
int main()
{
	
	int a,b,c;
	printf("ENTER 3 NUMBERS AND THE O/P WILL BE THE GREATEST OF THE 3");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
		printf("THE GREATEST NUMBER IS %d", a);
	else if(b>c)
		printf("THE GREATEST NUMBER IS %d", b);
	else
		printf("THE GREATEST NUMBER IS %d", c);
}


