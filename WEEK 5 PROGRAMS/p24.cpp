#include <stdio.h>
int main()
{
int i,j,n,count=0;
n=5;
for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("%d ", count+1);
 			count+=1;
 		}
 		 printf("\n");
	 }
}


