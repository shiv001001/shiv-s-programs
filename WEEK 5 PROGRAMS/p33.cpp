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
}											//Input : n=5 x=2 a={2 4 8 6 2}
int avg,sum=0;                                                //Output: 2 0 0 1 2
int count[n], avgarray[n];
for(i=0;i<n;i++)
	{	sum=0;
		avg=0;
		for(j=0;j<=i;j++)
			{
				sum=sum+a[j];
			}
		avg=sum/(i+1);
		avgarray[i]=avg;
	}
for(i=0;i<n;i++)
{
	printf("%d ", avgarray[i]);	
}
}
 
