#include <stdio.h>
int main()
{
int n,count,i,j;
printf("enter vaue of n :" );
scanf("%d", &n);
int a[n], b[n],k=0;
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}
for(i=0;i<n;i++)
	{	
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]!=a[j])
				count=1;
				break;
		}
		if(count==1)
		{
			b[k]=a[i];
			k++;
		}
	}
for(i=0;i<k;i++)
{
	printf("%d ", b[i]);	
}
}
 
