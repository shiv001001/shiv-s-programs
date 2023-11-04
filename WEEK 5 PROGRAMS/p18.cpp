#include <stdio.h>
int main()
{
int n;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,k,l,a[n];
int odd[n];
int even[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
k=0;
l=0;
for(i=0;i<n;i++)
{	
	if(a[i]%2==0)
	{
		even[k]=a[i];
		k++;
	}
	else
	{
		odd[l]=a[i];
		l++;
	}
}
printf("odd array");
for(i=0;i<l;i++)
{
	printf("%d ", odd[i]);	
}
printf("even array");
for(i=0;i<k;i++)
{
	printf("%d ", even[i]);	
}
}
