#include <stdio.h>
int main()
{
int n,i,j;
n=5;
int c,max=0, min=0;
float avg=0.0;
int a[n]={1,2,3,4,5};
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
avg = sum/n;
printf("maximum = %d\n", max);
printf("minimum = %d\n", min);
printf("average = %f\n", avg);
}
