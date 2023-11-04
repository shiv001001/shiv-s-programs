#include <stdio.h>
int main(){
int b,c=0;
int n,sum;
printf("enter value of n :" );
scanf("%d", &n);
printf("enter value of sum:" );
scanf("%d", &sum);
int i,j,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
for(i=0;i<n;i++)
{												
	for(j=i+1;j<n;j++)
	{
		if(a[i]+a[j]==sum)
		{
			printf("the pair is %d,%d", a[i], a[j]);
			i=n+1;
			j=n+1;
		}
	}
}
}
 
