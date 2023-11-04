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
int sumleft=0,sumryt=0;
for(i=0;i<n/2;i++)
	{
		sumleft=sumleft+a[i];
	}
for(i=n/2;i<n;i++)
	{
		sumryt=sumryt+a[i];
	}
int addnum;
if(sumleft<sumryt)
	{
		addnum=sumryt-sumleft;
		printf("%d", addnum);
	}
else if(sumleft>sumryt)
	{
		addnum=sumleft-sumryt;
		printf("%d", addnum);
	}
}
 
