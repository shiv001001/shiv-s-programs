#include <stdio.h>
int main()
{
	int basic;
	scanf("%d", &basic);
	int hra = (30*basic)/100;
	int da = (20*basic)/100;
	printf("TOTAL GROSS SALARY IS %d", basic+hra+da);
}


