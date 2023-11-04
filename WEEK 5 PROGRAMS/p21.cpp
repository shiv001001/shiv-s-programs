#include <stdio.h>
int main()
{
int i, j,element,n;
n=3
;
int a[n][n];
printf("enter elements of array : ");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("enter a[%d][%d] =", i, j); 
		scanf("%d", &element);
		a[i][j]=element; 
	}
	printf("\n");                                   
}
printf("printing elements of array : \n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d", a[i][j]);
	}
	printf("\n");
}
}
