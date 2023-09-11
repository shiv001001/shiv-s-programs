#include <stdio.h>
int main()
{
	
	int a,b,c;
	printf("ENTER THE THREE NUMBERS AND WE WILL CHECK IF ALL 3 ARE EQUAL OR NOT");
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c && c==a)
		printf("Equal");
	else 
		printf("Not Equal");
	 
}


