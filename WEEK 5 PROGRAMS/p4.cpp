#include <stdio.h>
int main()
{
int n,b;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,j,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
for(i=0;i<n-1;i++)
{
	if(i%2==0)
		{
			b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;		
		}	
}
for(i=0;i<n;i++)
{
	printf("%d ", a[i]);	
}


}
 
