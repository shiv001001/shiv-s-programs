//checking if two strings are equal
#include <stdio.h>
int main()
{
int n=100000, i, count=0, count2=0, rep=0;
char str[n],str2[n];
scanf("%s", str);
printf("initial string A is %s\n", str);
scanf("%s", str2);
printf("initial string B is %s\n", str2);
char cstr[n];
for(i=0;i<n;i++)
	{
		if(str[i]!='\0')
			{
				count++;
			}
		if(str[i]=='\0')
			{
				i=n+1;
			}
	}

for(i=0;i<n;i++)
	{
		if(str2[i]!='\0')
			{
				count2++;
			}
		if(str2[i]=='\0')
			{
				i=n+1;
			}
	
	}
if(count!=count2)
	printf("STRING NOT EQUAL");
else
	{
		for(i=0;i<count;i++)
		{
			if(str[i]!=str2[i])
				{
					printf("STRINGS NOT EQUAL");
					i=count+1;
					rep++;
				}
		}
		if(rep==0)
		{
			printf("STRINGS ARE EQUAL");
		}
	}
}
