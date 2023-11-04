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
int x;
printf("enter vaue of x :" );
scanf("%d", &x);											//Input : n=5 x=2 a={2 4 8 6 2}
int avg_x_i;                                                //Output: 2 0 0 1 2
int count[n];
for(i=0;i<n;i++)
	{
		avg_x_i= (a[i]+x)/2;
		for(j=0;j<n;j++)
		{																										
			if(avg_x_i==a[j])
			{
				count[i]=1;
				j=n+1;
			}
			else
			{
				count[i]=0;
			}
		}
	}
for(i=0;i<n;i++)
{
	printf("%d ", count[i]);	
}
}
 
