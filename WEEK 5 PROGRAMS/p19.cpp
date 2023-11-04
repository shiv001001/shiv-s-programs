#include <stdio.h>
int main()
{
int n,c;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,j,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
int b[n+1];
for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
printf("enter the new element to be added");
scanf("%d", &b[n]);
for(i=0;i<n;i++)
{
	for(j=0;j<n-i;j++)
	{
		if(b[j]>b[j+1])
		{
			c=b[j];
			b[j]=b[j+1];
			b[j+1]=c;		
		}
	}
}
for(i=0;i<n+1;i++)
{
	printf("%d ", b[i]);	
}
}
 
