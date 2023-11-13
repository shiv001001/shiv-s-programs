//copying one string into another without using strcpy function
#include <stdio.h>
int main()
{
int n=100000, i, count=0;
char str[n],cstr[n];
scanf("%s", str);
printf("initial string A is %s\n", str);
for(i=0;i<n;i++)
	{
		if(str[i]!='\0')
			{
				cstr[i]=str[i];
			}
		if(str[i]=='\0')
			{
				i=n+1;
			}
	}
printf("copied values of initial string A into string B..... printing string B\n");
printf("%s", cstr);
}
