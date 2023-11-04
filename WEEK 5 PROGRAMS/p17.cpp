#include <stdio.h>
int main()
{
int n,count;
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
	count=0;
	for(j=0;j<n;j++)
	{
		if(a[i]==a[j])
			count++;
	}
	printf("the frequency of %d is %d \n", a[i], count );
}	

}
