#include <stdio.h>
int main()
{
int n,i,j;
n=5;
int c[n]={};
int a[n]={4,2,3,1,5};
for(i=0;i<n;i++)
  {
	if(a[i]<a[i+1])
		{
			c[i]=a[i+1];	
		}
	else
		{
			c[i]=a[i];
		}
  }
for(j=0;j<n;j++);
	printf("c[ %d ] = %d ", i, c[i]);
}
