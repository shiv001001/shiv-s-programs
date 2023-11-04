#include <stdio.h>
int main()
{
int n,c;
printf("enter vaue of n :" );
scanf("%d", &n);
int i,j,index,a[n];
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);	
}	
int b[n+1], num;
printf("enter the index to which new element is to be added");
scanf("%d", &index);
printf("enter the new element to be added");
scanf("%d", &num);
for(i=0;i<index;i++)
{
	b[i]=a[i];
}
b[index]=num;
for(i=index+1;i<n+1;i++)
{
	b[i]=a[i-1];
}

for(i=0;i<n+1;i++)
{
	printf("%d ", b[i]);	
}
}
 
