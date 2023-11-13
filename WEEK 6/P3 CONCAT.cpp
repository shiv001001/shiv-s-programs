//concatting two strings to third string
#include <stdio.h>
int main()
{
int n=100000, i, count=0, count2=0;
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

for(i=0;i<count+count2;i++)
	{
		if(i<count)
		{
			cstr[i]=str[i];
		}
		else
		{
			cstr[i]=str2[i-count];
		}
	}
printf("concatted string is : %s\n", cstr);
}
