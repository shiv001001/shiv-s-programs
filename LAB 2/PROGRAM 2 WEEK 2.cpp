#include <stdio.h>
int main()
{

int a;
printf("enter your year ");
scanf("%d" , &a );
if(a%4==0 &&  (a%100 != 0 || a%400 == 0))
	printf("ENTERED YEAR IS A LEAP YEAR");
else
	printf("ENTERED YEAR IS NOT A LEAP YEAR " );
}


