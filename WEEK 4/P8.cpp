#include <stdio.h>
int main()
{
int i,j,n,s;
n=5;
 for(i=0;i<n;i++)
 	{
 		for(s=0;s<=n-i-1;s++)
 			{
 				printf(" ");
		 	}
 		for(j=0;j<n;j++)
 			{
 				printf(" *");
			 }
		printf("\n");
	 }



}
