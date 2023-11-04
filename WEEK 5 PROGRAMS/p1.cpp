#include <stdio.h>
int main()
{
int n;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,j,  a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}
int c,max=0, min=0;
float avg=0.0;
max=a[0];
min=a[0];
for(i=0;i<n;i++)
  {
	if(max<a[i])
	{
	 	max=a[i];
	}
	if(min>a[i])
	{
		min=a[i];
	}
  }
int sum=0;
	for(j=0;j<n;j++)
		{
			sum+=a[j];
		}
avg = float(sum)/n;
printf("maximum = %d\n", max);
printf("minimum = %d\n", min);
printf("average = %f\n", avg);
}
