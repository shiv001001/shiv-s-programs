#include <stdio.h>
int main()
{
int b,c;
int n;
printf("enter vaue of n :" );
scanf("%d", &n);
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
int x;
printf("enter x num");
scanf("%d", &x);
for(i=0;i<n;i++)
{
	if(a[i]>x)
		{
			printf("ceiling number is : %d", a[i]);
			i=n+1;
		}
}


}
 
