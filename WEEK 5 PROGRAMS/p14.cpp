#include <stdio.h>
int main(){
int b,c=0;
int n,sum;
printf("enter value of n :" );
scanf("%d", &n);
printf("enter value of sum:" );
scanf("%d", &sum);
int i,j,k,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
for(i=0;i<n;i++)
{												
	for(j=i+1;j<n;j++)
	{
		for(k=i+2;k<n;k++)
			{
				if(a[i]+a[j]+a[k]==sum)
				{
					printf("the pair is %d,%d,%d", a[i], a[j], a[k]);
					i=n+1;
					j=n+1;
					k=n+1;
				}
				
			}
	}
}
}
 
