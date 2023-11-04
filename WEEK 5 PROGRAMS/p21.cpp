#include <stdio.h>
int main()
{
int i,j,n,count;
n=4;
for(i=0;i<n;i++)
 	{
 		for(j=0;j<i+1;j++)
 		{
 			printf("%d ", i+3);
 			
		}
		 printf("\n");
	 }
for(i=0;i<n;i++)
 	{
 		for(j=0;j<n-i;j++)
 		{
 			printf("%d ", (n-i-1)+3);
 			
		}
		 printf("\n");
	 }




}


