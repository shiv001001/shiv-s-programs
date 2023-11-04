#include <stdio.h>
#include <math.h>
int main( )
{
int m,n;
printf("enter M value : %d", m);
scanf("%d", &m);
printf("enter N value : %d", n);
scanf("%d", &n);
int i, j, a[m], b[m], suma=0, sumb=0;
printf("enter values of array A");
for(i=0;i<m;i++)
{
	scanf("%d", &a[i]);	
}
printf("enter values of array B");
for(i=0;i<n;i++)
{
	scanf("%d", &b[i]);	
}
for(i=0;i<m;i++)
	{
		suma=suma+a[i]*pow(10,(m-i-1));
	}
for(i=0;i<n;i++)
	{
		sumb=sumb+b[i]*pow(10,(n-i-1));
	}
int sumtotal;
sumtotal = suma + sumb;
printf("total sum of A and B is :%d", sumtotal);
}
