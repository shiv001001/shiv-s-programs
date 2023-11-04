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
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("enter b[%d][%d] =", i, j); 
		scanf("%d", &element);
		b[i][j]=element; 
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
//------------------------------------------
int c[n][n];
int k;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	c[i][j]=0;
	for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
	}
}
printf("the multiplication of a and b matrices gives c matrix equal to \n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf(" %d", c[i][j]);
	}
	printf("\n");
}
}
