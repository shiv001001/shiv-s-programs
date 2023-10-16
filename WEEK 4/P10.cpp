#include <stdio.h>
int main()
{
int i,j,n,s;
n=8;
 for(i=0;i<n;i++)
 {
 	if(i<=n/2)
 	{
 		for(j=0;j<i+1;j++)
 			{
 				printf("*");
			 }
		printf("\n");
	}
	else
	{
		for(j=0;j<n-i+1;j++)
			{
				printf("*");
			 } 
		printf("\n");
	}
   }
}
