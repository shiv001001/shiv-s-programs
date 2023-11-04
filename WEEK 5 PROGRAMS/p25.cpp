#include <stdio.h>
int main()
{
int i,j,n,count=0;
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
n=5;
for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("%d ", alphabet[j] );
 		}
 		 printf("\n");
	 }
}


