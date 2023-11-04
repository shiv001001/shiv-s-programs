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
	if(c==1)
		break;
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			printf("the first repeating element is :%d", a[i]);
			c=1;
		}
	}
}
}
 
