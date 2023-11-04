#include <stdio.h>
int main(){
int b,count=0, ncount;
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
	count=0;
	for(j=0;j<n;j++)
	{
		if(a[i]==a[j])
		{
			count++;
		}
	}
	if(count>n/2)
	{
		printf("the majority element is : %d", a[i]);
		i=n+1;
	}
	else
		ncount++;
}
if(ncount==n-1)
	printf("No Majority Element");
}
 
