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
int num1=0,num0=0;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j)
			{
				if(a[i][j]==1)
					num1++;
			}
		else if(a[i][j]==0)
			{
				num0++;
			}	
	}
}
if(num1==n && num0==(n*n)-n)
	{
		printf("the matrix is an identity matrix");
	}
else
	{	
		printf("the matrix is not an identity matrix");		
	}
}
