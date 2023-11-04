#include <stdio.h>
int main()
{
int i, j,element,n;
printf("enter value of n:");
scanf("%d", &n);
int a[n][n];
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
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d", a[i][j]);
	}
	printf("\n");
}
//----------------------------------------
int b[n][n];
printf("printing transpose of A given by B :");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		b[i][j]=a[j][i];
	}
	printf("\n");
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d", b[i][j]);
	}
	printf("\n");
}
}
