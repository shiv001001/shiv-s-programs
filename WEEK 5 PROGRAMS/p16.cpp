#include <stdio.h>
int main()
{
int n;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,j,a[n];
int b[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
for(i=0;i<n;i++)
{
	b[i]=a[i];
}	
for(i=0;i<n;i++)
{
	printf("%d ", b[i]);	
}

}
