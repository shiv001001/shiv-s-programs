#include <stdio.h>
int main()
{
int i,j,n,count;
n=5;
for(i=0;i<n;i++)
 	{
 		if(i%2!=0)
 				printf("%d", i+2);
 		for(j=0;j<6;j++)
 		{
 			printf("%d", i+1);
 		}
 		if(i%2==0)
 				printf("%d", i+2);
		 printf("\n");
	 }
}


