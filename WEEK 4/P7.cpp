#include <stdio.h>
int main()
{
int i,j,n,s;
n=5;
 for(i=0;i<n;i++)
 	{
 		for(s=0;s<n-i;s++)
 		{
 			printf(" ");
		}
 		for(j=0;j<i+1;j++)
 		{
 			printf("* ");
		}
		 printf("\n");
	 }



}

