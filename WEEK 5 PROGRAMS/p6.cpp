#include <stdio.h>
int main()
{
int b,c;
int n,k;
printf("enter vaue of n :" );
scanf("%d", &n);
printf("enter vaue of k :" );
scanf("%d", &k);
int i,j,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			b=a[j];
			a[j]=a[j+1];
			a[j+1]=b;		
		}
	}
}
printf("kth smallest term in array is : %d", a[k-1]);
printf("kth largest term in array is : %d", a[n-k]);



}
 
