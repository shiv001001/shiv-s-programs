#include <stdio.h>
int main()
{
int n;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,j,  a[n-1], b[n];
for(i=0;i<n;i++)
{
	b[i]=i+1;	
}
for(i=0;i<n-1;i++)
{
	scanf("%d", &a[i]);	
}
int c;
for(i=0;i<n-2;i++)
{
	for(j=0;j<n-i-2;j++)
	{
		if(a[j]>a[j+1])
		{
			c=a[j];
			a[j]=a[j+1];
			a[j+1]=c;		
		}
	}
}	
for(i=0;i<n-1;i++)
{
	if(a[i]!=b[i])
	{
		printf("the missing element is : %d", b[i] );
		i=n+1;
	}
}
}
 
