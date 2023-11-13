//check for palindrome or not
#include <stdio.h>
int main()
{
int n=100000, i, count=0, rep=0;
char str[n];
scanf("%s", str);
printf("initial string....%s\n", str);
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
for(i=0;i<count;i++)
	if(str[i]!=str[count-1-i])
		{
			rep++;
		}
if(rep==0)
	{
		printf("palindrome");
	}
else
	{
		printf("not palindrome");
	}
}
