#include <stdio.h>
int main()
{
int n;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,j,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
for(i=n-1;i>=0;i--)
	{
		printf("%d", a[i]);
	}
}
 
