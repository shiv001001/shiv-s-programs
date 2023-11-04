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
int sum;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j)
			{
				sum=sum+a[i][j];
			}	
	}
}
printf("sum of left diagonal elemts of matrix A is : %d", sum);
}
