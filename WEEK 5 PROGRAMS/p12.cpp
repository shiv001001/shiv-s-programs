#include <stdio.h>
int main(){
int b,c=0;
int n,k;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,j,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
for(i=0;i<n;i++)
{
	c=0;
	for(j=i+1;j<n;j++)
	{
		if(a[i]!=a[j])
		{
			c++;
		}
	}
	if(c==n-(i+1))
	{
		printf("the first non repeating element is :%d", a[i]);
		i=n+1;
	}
}
}
