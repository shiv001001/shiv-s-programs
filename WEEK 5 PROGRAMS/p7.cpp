#include <stdio.h>
int main()
{
int n,k;
printf("enter vaue of n :" );
scanf("%d", &n);
printf("enter vaue of k :" );
scanf("%d", &k);
int count;
int i,j,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
for(i=0;i<n;i++)
	{
		if(a[i]==k)
			{
				count+=1;
			}
	}
printf("occurence of k is: %d", count);
}
 
